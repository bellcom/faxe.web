<?php

/**
 * @file
 * faxe_sitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faxe_sitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function faxe_sitemap_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
