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
  $handler->name = 'node_view__meetings';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
  $display->storage_id = 'node_view__meetings';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-101448d0-26f3-4b0a-8cb3-9c3091116d0b';
  $pane->panel = 'content';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '101448d0-26f3-4b0a-8cb3-9c3091116d0b';
  $display->content['new-101448d0-26f3-4b0a-8cb3-9c3091116d0b'] = $pane;
  $display->panels['content'][0] = 'new-101448d0-26f3-4b0a-8cb3-9c3091116d0b';
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
  $export['node_view__meetings'] = $handler;

  return $export;
}
