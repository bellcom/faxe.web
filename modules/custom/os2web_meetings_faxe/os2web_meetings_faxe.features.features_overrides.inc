<?php
/**
 * @file
 * os2web_meetings_faxe.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function os2web_meetings_faxe_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.os2web_meetings.display|default|display_options|fields|field_os2web_meetings_committee|label"] = '';
  $overrides["views_view.os2web_meetings.display|panel_pane_1|display_options|fields|views_conditional"]["DELETED"] = TRUE;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|defaults|use_ajax"] = FALSE;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|fields|field_os2web_meetings_committee|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|fields|views_conditional"]["DELETED"] = TRUE;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|default_date"] = '-3 months';
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|10"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|12"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|4"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|5"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|7"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|8"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|filters|field_os2web_meetings_date_value|expose|remember_roles|9"] = 0;
  $overrides["views_view.os2web_meetings.display|panel_pane_3|display_options|use_ajax"] = TRUE;

 return $overrides;
}
