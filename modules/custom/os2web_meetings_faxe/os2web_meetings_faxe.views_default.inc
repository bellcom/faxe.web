<?php
/**
 * @file
 * os2web_meetings_faxe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_meetings_faxe_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Meeting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indholdselement: Type */
  $handler->display->display_options['fields']['field_os2web_meetings_type']['id'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['field'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_default_classes'] = FALSE;
  /* Field: Indholdselement: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_default_classes'] = FALSE;
  /* Field: Indholdselement: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Indholdselement: Full doc */
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['id'] = 'field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['table'] = 'field_data_field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['field'] = 'field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['label'] = 'Hent som fil';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['settings'] = array(
    'text' => '[field_os2web_meetings_type] [field_os2web_meetings_committee] [file:name]',
  );
  /* Field: Indholdselement: Lokation */
  $handler->display->display_options['fields']['field_os2web_meetings_location']['id'] = 'field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['table'] = 'field_data_field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['field'] = 'field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['Meeting'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Udvalg'),
    t('Dato'),
    t('Hent som fil'),
    t('Lokation'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['Meeting'] = $view;

  return $export;
}
