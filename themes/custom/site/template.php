<?php

/**
 * Implements template_preprocess_html().
 */
function site_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  // Add javascript files
  drupal_add_js($theme_path . '/dist/javascripts/modernizr.js',
    [
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_LIBRARY,
    ]);
  drupal_add_js($theme_path . '/dist/javascripts/app.js',
    [
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_THEME,
    ]);

  // Add fonts from Google fonts API.
  drupal_add_css('https://fonts.googleapis.com/css?family=Lato:400,700',
    ['type' => 'external']);
}

/**
 * Implements hook_preprocess_page().
 */
function site_preprocess_page(&$variables) {
  $current_theme = variable_get('theme_default', 'none');
  $primary_navigation_name = variable_get('menu_main_links_source', 'main-menu');
  $secondary_navigation_name = variable_get('menu_secondary_links_source', 'user-menu');

  // Overriding the one set by mother theme, as we want to limit the number of levels shown
  $variables['theme_path'] = base_path() . drupal_get_path('theme', $current_theme);

  // Navigation
  $variables['flexy_navigation__primary'] = _bellcom_generate_menu($primary_navigation_name, 'flexy_navigation', FALSE, 1);
  $variables['menu_slinky__main_menu'] = _bellcom_generate_menu('main-menu', 'slinky-custom', TRUE);

  // Tabs
  $variables['tabs_primary'] = $variables['tabs'];
  $variables['tabs_secondary'] = $variables['tabs'];
  unset($variables['tabs_primary']['#secondary']);
  unset($variables['tabs_secondary']['#primary']);

  // Header background image
  if ($file = file_load((int) theme_get_setting('header_background_image'))) {

    if ($uri = $file->uri) {
      $variables['header_background_image'] = file_create_url(image_style_url('header_background_image', $uri));
    }
  }
}

/**
 * Implements template_preprocess_node.
 */
function site_preprocess_node(&$variables) {
  $node = $variables['node'];

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function_node_type = __FUNCTION__ . '__' . $node->type;
  $function_view_mode = __FUNCTION__ . '__' . $variables['view_mode'];

  if (function_exists($function_node_type)) {
    $function_node_type($variables);
  }

  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/**
 * Implements template_preprocess_node.
 */
function site_preprocess_node__os2web_spotbox_box(&$variables) {
  $node = $variables['node'];

  // Linkit
  $variables['linkit']['title'] = '';
  $variables['linkit']['url'] = '';

  if ($field = field_get_items('node', $node, 'field_spot_link')) {
    $variables['linkit']['title'] = $field[0]['title'];
    $variables['linkit']['url'] = $field[0]['url'];
  }
}

/*
 * Implements template_preprocess_taxonomy_term().
 */
function site_preprocess_taxonomy_term(&$variables) {
  $term = $variables['term'];
  $view_mode = $variables['view_mode'];
  $vocabulary_machine_name = $variables['vocabulary_machine_name'];

  // Add taxonomy-term--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $view_mode;

  // Make "taxonomy-term--TERMTYPE--VIEWMODE.tpl.php" templates available for terms.
  $variables['theme_hook_suggestions'][] = 'taxonomy_term__' . $vocabulary_machine_name . '__' . $view_mode;

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_taxonomy_term_page() or foo_preprocess_taxonomy_term_story().
  $function_taxonomy_term_type = __FUNCTION__ . '__' . $vocabulary_machine_name;
  $function_view_mode = __FUNCTION__ . '__' . $view_mode;

  if (function_exists($function_taxonomy_term_type)) {
    $function_taxonomy_term_type($variables);
  }

  if (function_exists($function_view_mode)) {
    $function_view_mode($variables);
  }
}

/**
 * Implements template_preprocess_entity().
 */
function site_preprocess_entity(&$variables) {
  $entity_type = $variables['entity_type'];

  // Field collection item
  if ($entity_type === 'field_collection_item') {
    $field_collection_item = $variables['field_collection_item'];

    if ($fields = field_get_items('field_collection_item', $field_collection_item, 'field_bc_hero_slide_link')) {

      if (isset($fields[0]['url'])) {
        $variables['content']['raw_url'] = $fields[0]['url'];
      }
    }
  }
}

/**
 * Implements template_preprocess_entity().
 * List of news teasers.
 */
function site_preprocess_entity__fic_list_of_news_teasers(&$variables) {
  $paragraph = $variables['paragraphs_item'];
  $display = 'news';
  $ids = [];
  $variables['embedded_view'] = false;

  if ($fields = field_get_items('paragraphs_item', $paragraph, 'field_promoted')) {

    if ((boolean) $fields[0]['value']) {
      $display = 'news_promoted';
    }
  }

  if ($fields = field_get_items('paragraphs_item', $paragraph, 'field_section_id')) {

    foreach($fields as $field) {
      $ids[] = $field['tid'];
    }
  }
  $contextual_filter = implode('+', $ids);

  if (! $contextual_filter) {

    if (count(views_get_view_result('fic_embed_nodes', $display))) {
      $variables['embedded_view'] = views_embed_view('fic_embed_nodes', $display);
    }
  } else {

    if (count(views_get_view_result('fic_embed_nodes', $display, $contextual_filter))) {
      $variables['embedded_view'] = views_embed_view('fic_embed_nodes', $display, $contextual_filter);
    }
  }
}

/*
 * Force download
 */
function site_file_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $url = file_create_url($file->uri);
  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }

  //open files of particular mime types in new window
  $new_window_mimetypes = array('application/pdf','text/plain');
  if (in_array($file->filemime, $new_window_mimetypes)) {
    $options['attributes']['target'] = '_blank';
  }

  return '<span class="file">' . $icon . ' ' . l($link_text, $url, $options) . '</span>';
}

function site_preprocess_search_api_page_result(&$variables) {
  $entity = $variables['url']['options']['entity'];
  if ($entity->type == 'os2web_base_contentpage') {
    $sectionTid = $variables['url']['options']['entity']->field_os2web_base_field_struct['und'][0]['tid'];
    $parents = taxonomy_get_parents_all($sectionTid);
    $parents = array_reverse($parents);

    $location = [];
    foreach ($parents as $parent) {
      $location[] = $parent->name;
    }

    $variables['sectionsTree'] = implode(' > ', $location);
  }

  if ($entity->type == 'os2web_meetings_bullet') {
   $nid = $entity->nid;
   $query = new EntityFieldQuery();
   $result = $query->entityCondition('entity_type', 'node')
     ->propertyCondition('type', 'os2web_meetings_meeting')
     ->fieldCondition('field_os2web_meetings_bullets', 'target_id', $nid, '=')
     ->execute();
   $result = array_shift($result);
   if (is_array($result)) {
     $meeting_nid = array_pop(array_keys($result));
     $meeting_node = node_load($meeting_nid);
     $variables['url']['path']= 'node/' . $meeting_nid;
     $variables['title'] = $meeting_node->title . ' ' . $variables['title'];
   }
  }

  if ($entity->type == 'os2web_meetings_bullet_attach') {
    $nid = $entity->nid;
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'node')
       ->propertyCondition('type', 'os2web_meetings_bullet')
       ->fieldCondition('field_os2web_meetings_attach', 'target_id', $nid, '=')
       ->execute();
    $result = array_shift($result);
    if (is_array($result)) {
      $bp_nid = array_pop(array_keys($result));
      $query = new EntityFieldQuery();
      $result = $query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'os2web_meetings_meeting')
        ->fieldCondition('field_os2web_meetings_bullets', 'target_id', $bp_nid, '=')
        ->execute();
      $result = array_shift($result);
      if (is_array($result)) {
        $meeting_nid = array_pop(array_keys($result));
        $meeting_node = node_load($meeting_nid);
        $variables['url']['path']= 'node/' . $meeting_nid;
        $variables['title'] = $meeting_node->title . ' ' . $variables['title'];
      }
    }
  }
}

/**
 * Returns HTML for an image with an appropriate icon for the given file.
 *
 * @param $variables
 *   An associative array containing:
 *   - file: A file object for which to make an icon.
 *   - icon_directory: (optional) A path to a directory of icons to be used for
 *     files. Defaults to the value of the "file_icon_directory" variable.
 *   - alt: (optional) The alternative text to represent the icon in text-based
 *     browsers. Defaults to an empty string.
 *
 * @ingroup themeable
 */
function site_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);

  // Human-readable names, for use as text-alternatives to icons.
  $mime_name = array(
    'application/msword' => t('Microsoft Office document icon'),
    'application/vnd.ms-excel' => t('Office spreadsheet icon'),
    'application/vnd.ms-powerpoint' => t('Office presentation icon'),
    'application/pdf' => t('PDF icon'),
    'video/quicktime' => t('Movie icon'),
    'audio/mpeg' => t('Audio icon'),
    'audio/wav' => t('Audio icon'),
    'image/jpeg' => t('Image icon'),
    'image/png' => t('Image icon'),
    'image/gif' => t('Image icon'),
    'application/zip' => t('Package icon'),
    'text/html' => t('HTML icon'),
    'text/plain' => t('Plain text icon'),
    'application/octet-stream' => t('Binary Data'),
  );
  $alt = ($variables['alt'] == "") ? $mime_name[$mime] : $variables['alt'];

  return '<img class="file-icon" alt="' . check_plain($alt) . '" title="' . $mime . '" src="' . $icon_url . '" />';
}

function site_preprocess_block(&$variables) {
  $variables['theme_hook_suggestions'][] = 'block__' . $variables['block']->region;
  $variables['theme_hook_suggestions'][] = 'block__' . $variables['block']->module;
  $variables['theme_hook_suggestions'][] = 'block__' . $variables['block']->delta;

  // Add block description as template suggestion
  $block = block_custom_block_get($variables['block']->delta);

  // Transform block description to a valid machine name
  if (!empty($block['info'])) {
    setlocale(LC_ALL, 'en_US');

    // required for iconv()
    $variables['theme_hook_suggestions'][] = 'block__' . str_replace(' ', '_', strtolower(iconv('UTF-8', 'ASCII//TRANSLIT', $block['info'])));
  }
}
