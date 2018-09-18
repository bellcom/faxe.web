<?php
/**
 * @file
 * os2web_meetings_faxe.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_meetings_faxe_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_453ccf05-7986-4042-9853-1b26c21197e3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Meetings',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'meetings',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_meetings_meeting' => 'os2web_meetings_meeting',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'dark_section_1' => NULL,
      'light_section_1' => NULL,
      'light_section_0' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title (%node:field-os2web-meetings-type)';
  $display->uuid = '6a0e38b9-f949-4558-9978-65e403845cac';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_453ccf05-7986-4042-9853-1b26c21197e3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-afcf8a4d-966f-4a85-adeb-50399ceb5269';
  $pane->panel = 'content';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'afcf8a4d-966f-4a85-adeb-50399ceb5269';
  $display->content['new-afcf8a4d-966f-4a85-adeb-50399ceb5269'] = $pane;
  $display->panels['content'][0] = 'new-afcf8a4d-966f-4a85-adeb-50399ceb5269';
  $pane = new stdClass();
  $pane->pid = 'new-13533b17-8919-407e-b8ee-1717abf70f56';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'Meeting-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '13533b17-8919-407e-b8ee-1717abf70f56';
  $display->content['new-13533b17-8919-407e-b8ee-1717abf70f56'] = $pane;
  $display->panels['content'][1] = 'new-13533b17-8919-407e-b8ee-1717abf70f56';
  $pane = new stdClass();
  $pane->pid = 'new-ff734389-6dba-460e-9c98-40cbb3cc3f66';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_meetings_bullets';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_entity_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
      'links' => 0,
      'use_content_language' => 0,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ff734389-6dba-460e-9c98-40cbb3cc3f66';
  $display->content['new-ff734389-6dba-460e-9c98-40cbb3cc3f66'] = $pane;
  $display->panels['content'][2] = 'new-ff734389-6dba-460e-9c98-40cbb3cc3f66';
  $pane = new stdClass();
  $pane->pid = 'new-e142234b-d02f-42ef-b8e4-c360e7895bf3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_meetings-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e142234b-d02f-42ef-b8e4-c360e7895bf3';
  $display->content['new-e142234b-d02f-42ef-b8e4-c360e7895bf3'] = $pane;
  $display->panels['sidebar'][0] = 'new-e142234b-d02f-42ef-b8e4-c360e7895bf3';
  $pane = new stdClass();
  $pane->pid = 'new-233b2467-b1d4-482a-9173-1abc3032d8ee';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_meetings-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '233b2467-b1d4-482a-9173-1abc3032d8ee';
  $display->content['new-233b2467-b1d4-482a-9173-1abc3032d8ee'] = $pane;
  $display->panels['sidebar'][1] = 'new-233b2467-b1d4-482a-9173-1abc3032d8ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_453ccf05-7986-4042-9853-1b26c21197e3'] = $handler;

  return $export;
}
