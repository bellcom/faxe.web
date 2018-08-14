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
