<?php

/**
 * @file
 * faxe_sitemap.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function faxe_sitemap_taxonomy_default_vocabularies() {
  return array(
    'faxe_sitemap_categories' => array(
      'name' => 'Sitemap kategorier',
      'machine_name' => 'faxe_sitemap_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
