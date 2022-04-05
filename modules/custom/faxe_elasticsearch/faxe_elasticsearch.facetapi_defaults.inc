<?php

/**
 * @file
 * faxe_elasticsearch.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function faxe_elasticsearch_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@faxe_content::field_os2web_base_field_struct';
  $facet->searcher = 'search_api@faxe_content';
  $facet->realm = '';
  $facet->facet = 'field_os2web_base_field_struct';
  $facet->enabled = FALSE;
  $facet->hash = 'hbFPnOoJTuMmDRx5DzEKYZQ34jwhKYIL';
  $facet->settings = array(
    'default_true' => TRUE,
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'exclude' => 0,
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'facet_search_ids' => array(),
    'flatten' => '0',
    'hard_limit' => '50',
    'individual_parent' => '0',
    'limit_active_items' => 0,
    'operator' => 'and',
    'query_type' => 'term',
  );
  $export['search_api@faxe_content::field_os2web_base_field_struct'] = $facet;

  return $export;
}
