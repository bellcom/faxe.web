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
  $facet->name = 'search_api@faxe_public::field_os2web_base_field_media:file:type';
  $facet->searcher = 'search_api@faxe_public';
  $facet->realm = '';
  $facet->facet = 'field_os2web_base_field_media:file:type';
  $facet->enabled = FALSE;
  $facet->hash = 'cAGLs1Tc0KmgcLulevBzpzaHZuF6Yu1M';
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@faxe_public::field_os2web_base_field_media:file:type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@faxe_public::field_os2web_base_field_struct';
  $facet->searcher = 'search_api@faxe_public';
  $facet->realm = '';
  $facet->facet = 'field_os2web_base_field_struct';
  $facet->enabled = FALSE;
  $facet->hash = 'hbFPnOoJTuMmDRx5DzEKYZQ34jwhKYIL';
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@faxe_public::field_os2web_base_field_struct'] = $facet;

  return $export;
}
