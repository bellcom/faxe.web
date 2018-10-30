<?php
/**
 * @file
 * os2web_meetings_faxe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_meetings_faxe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_meetings_faxe_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_views_default_views_alter().
 */
function os2web_meetings_faxe_views_default_views_alter(&$data) {
  if (isset($data['os2web_meetings'])) {
    $data['os2web_meetings']->display['default']->display_options['fields']['field_os2web_meetings_committee']['label'] = ''; /* WAS: 'Udvalg' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['defaults']['use_ajax'] = FALSE; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['fields']['field_os2web_meetings_type'] = array(
      'id' => 'field_os2web_meetings_type',
      'table' => 'field_data_field_os2web_meetings_type',
      'field' => 'field_os2web_meetings_type',
      'label' => '',
      'element_label_colon' => FALSE,
    ); /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = '-3 months'; /* WAS: '-12 months' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][10] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][12] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][4] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][5] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][7] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][8] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'][9] = 0; /* WAS: '' */
    $data['os2web_meetings']->display['panel_pane_3']->display_options['use_ajax'] = TRUE; /* WAS: '' */
    unset($data['os2web_meetings']->display['panel_pane_1']->display_options['fields']['views_conditional']);
    unset($data['os2web_meetings']->display['panel_pane_3']->display_options['fields']['field_os2web_meetings_committee']['exclude']);
    unset($data['os2web_meetings']->display['panel_pane_3']->display_options['fields']['views_conditional']);
  }
}
