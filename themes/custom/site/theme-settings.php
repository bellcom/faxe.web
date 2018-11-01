<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function site_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {

  // Vertical tabs
  $form['project'] = [
    '#type' => 'vertical_tabs',
    '#default_tab' => 'main',
    '#weight' => '-20',
    '#prefix' => '<h2><small>' . t('Projekt indstillinger') . '</small></h2>',
    '#title' => t('Projekt indstillinger'),
  ];

  // Fieldset
  $form['project']['header'] = [
    '#type' => 'fieldset',
    '#title' => t('Page header'),
  ];

  // Background image
  $form['project']['header']['header_background_image'] = array(
    '#type'     => 'managed_file',
    '#title'    => t('Background image'),
    '#description' => t('Should be width: 1675px, height: 300px'),
    '#required' => TRUE,
    '#upload_location' => file_default_scheme() . '://theme/',
    '#default_value' => theme_get_setting('header_background_image'),
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
  );

  $form['#submit'][] = 'site_form_system_theme_settings_submit';
}

function site_form_system_theme_settings_submit(&$form, $form_state, $form_id = NULL) {
  $current_theme = variable_get('theme_default', 'none');

  $fid = $form_state['values']['header_background_image'];
  $file = file_load($fid);

  if (is_object($file)) {

    // Check to make sure that the file is set to be permanent.
    if ($file->status == 0) {

      // Update the status.
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      file_usage_add($file, $current_theme, 'theme', 1);
    }
  }
}
