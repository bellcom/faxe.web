<?php

/**
 * @file
 * faxe_elasticsearch.elasticsearch_connector_defaults.inc
 */

/**
 * Implements hook_default_elasticsearch_connector_cluster().
 */
function faxe_elasticsearch_default_elasticsearch_connector_cluster() {
  $export = array();

  $elasticsearch_connector_cluster = new stdClass();
  $elasticsearch_connector_cluster->disabled = FALSE; /* Edit this to true to make a default elasticsearch_connector_cluster disabled initially */
  $elasticsearch_connector_cluster->api_version = 1;
  $elasticsearch_connector_cluster->cluster_id = 'faxe';
  $elasticsearch_connector_cluster->name = 'Faxe';
  $elasticsearch_connector_cluster->url = 'http://localhost:9200';
  $elasticsearch_connector_cluster->status = 1;
  $elasticsearch_connector_cluster->options = 'a:6:{s:25:"multiple_nodes_connection";i:0;s:18:"use_authentication";i:0;s:19:"authentication_type";s:6:"Digest";s:8:"username";s:0:"";s:8:"password";s:0:"";s:7:"timeout";s:3:"150";}';
  $export['faxe'] = $elasticsearch_connector_cluster;

  return $export;
}
