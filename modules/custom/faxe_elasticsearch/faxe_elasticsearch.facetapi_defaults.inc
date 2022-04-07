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

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@faxe_content:block:field_os2web_base_field_struct';
  $facet->searcher = 'search_api@faxe_content';
  $facet->realm = 'block';
  $facet->facet = 'field_os2web_base_field_struct';
  $facet->enabled = TRUE;
  $facet->hash = 'OtEfdMQvsYjI6UOuUwMD9S9PagkhuXBl';
  $facet->settings = array(
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'date_ranges' => array(
      'add_range' => 'Add a new date range',
    ),
    'display_count' => 1,
    'empty_behavior' => 'none',
    'empty_text' => array(
      'format' => 'filtered_html',
      'value' => '',
    ),
    'facet_fewer_text' => 'Show fewer',
    'facet_more_text' => 'Show more',
    'filters' => array(),
    'nofollow' => '1',
    'ranges' => array(
      'past_24_hours' => array(
        'date_range_end_amount' => '',
        'date_range_end_op' => 'NOW',
        'date_range_end_unit' => 'HOUR',
        'date_range_start_amount' => '24',
        'date_range_start_op' => '-',
        'date_range_start_unit' => 'HOUR',
        'delete' => 0,
        'label' => 'Past 24 hours',
        'machine_name' => 'past_24_hours',
        'weight' => '1',
      ),
      'past_hour' => array(
        'date_range_end_amount' => '',
        'date_range_end_op' => 'NOW',
        'date_range_end_unit' => 'HOUR',
        'date_range_start_amount' => '1',
        'date_range_start_op' => '-',
        'date_range_start_unit' => 'HOUR',
        'delete' => 0,
        'label' => 'Past hour',
        'machine_name' => 'past_hour',
        'weight' => '0',
      ),
      'past_month' => array(
        'date_range_end_amount' => '',
        'date_range_end_op' => 'NOW',
        'date_range_end_unit' => 'HOUR',
        'date_range_start_amount' => '1',
        'date_range_start_op' => '-',
        'date_range_start_unit' => 'MONTH',
        'delete' => 0,
        'label' => 'Past month',
        'machine_name' => 'past_month',
        'weight' => '3',
      ),
      'past_week' => array(
        'date_range_end_amount' => '',
        'date_range_end_op' => 'NOW',
        'date_range_end_unit' => 'HOUR',
        'date_range_start_amount' => '7',
        'date_range_start_op' => '-',
        'date_range_start_unit' => 'DAY',
        'delete' => 0,
        'label' => 'Past week',
        'machine_name' => 'past_week',
        'weight' => '2',
      ),
      'past_year' => array(
        'date_range_end_amount' => '',
        'date_range_end_op' => 'NOW',
        'date_range_end_unit' => 'HOUR',
        'date_range_start_amount' => '1',
        'date_range_start_op' => '-',
        'date_range_start_unit' => 'YEAR',
        'delete' => 0,
        'label' => 'Seneste år',
        'machine_name' => 'past_year',
        'weight' => '4',
      ),
    ),
    'show_expanded' => 1,
    'soft_limit' => '20',
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'title' => 'Portalkategori',
    'title_override' => 0,
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
  );
  $export['search_api@faxe_content:block:field_os2web_base_field_struct'] = $facet;

  return $export;
}
