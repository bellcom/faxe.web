<?php

/**
 * @file
 * faxe_sitemap.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function faxe_sitemap_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faxe_sitemap_categori'.
  $field_bases['field_faxe_sitemap_categori'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faxe_sitemap_categori',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'faxe_sitemap_categories',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
