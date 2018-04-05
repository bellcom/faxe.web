<?php
/**
 * @file
 * bellcom_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bellcom_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function bellcom_hero_image_default_styles() {
  $styles = array();

  // Exported image style: bc_hero.
  $styles['bc_hero'] = array(
    'label' => 'Forsidebanner',
    'effects' => array(
      11 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 1280,
          'height' => 500,
          'anchor' => 'center-center',
          'disable_scale' => 1,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 0,
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bellcom_hero_node_info() {
  $items = array(
    'bc_hero' => array(
      'name' => t('Forsidebanner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
