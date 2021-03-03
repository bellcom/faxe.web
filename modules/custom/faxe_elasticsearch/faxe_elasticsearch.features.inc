<?php

/**
 * @file
 * faxe_elasticsearch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faxe_elasticsearch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elasticsearch_connector" && $api == "elasticsearch_connector_defaults") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function faxe_elasticsearch_default_search_api_index() {
  $items = array();
  $items['faxe_public'] = entity_import('search_api_index', '{
    "name" : "Faxe public",
    "machine_name" : "faxe_public",
    "description" : null,
    "server" : "faxe",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "borger_dk_article",
          "os2web_base_contentpage",
          "os2web_meetings_bullet",
          "os2web_meetings_bullet_attach",
          "os2web_meetings_meeting",
          "os2web_base_news"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "index_name" : { "index" : "faxe_public", "cluster_id" : "faxe" },
      "collect_index_statistics" : 0,
      "log_only_not_found" : 0,
      "index_statistics_ttl" : "365d",
      "fields" : {
        "attachments_field_os2web_base_field_media" : { "type" : "text", "boost" : "0.5" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "field_afsnit_paragraphs" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_afsnit_paragraphs:field_afsnit_indhold:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_afsnit_paragraphs:field_afsnit_overskrift" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_borger_dk_header:value" : { "type" : "text", "boost" : "8.0" },
        "field_borger_dk_post_text" : { "type" : "text", "boost" : "3.0" },
        "field_borger_dk_pre_text:value" : { "type" : "text", "boost" : "8.0" },
        "field_os2web_base_field_contact:body:value" : { "type" : "text", "boost" : "0.8" },
        "field_os2web_base_field_contact:field_os2web_contact_field_dept" : { "type" : "text", "boost" : "8.0" },
        "field_os2web_base_field_edi_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_os2web_base_field_media:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_os2web_base_field_media:file:field_file_image_alt_text" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2web_base_field_media:file:field_file_image_title_text" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2web_base_field_media:file:mime" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2web_base_field_media:file:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_os2web_base_field_media:file:type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_os2web_base_field_struct" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_os2web_base_field_struct:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_os2web_base_field_text" : { "type" : "text", "boost" : "3.0" },
        "field_os2web_contact_field_info:value" : { "type" : "text", "boost" : "2.0" },
        "field_os2web_news_page_type:name" : { "type" : "list\\u003Ctext\\u003E" },
        "metatag_abstract" : { "type" : "text" },
        "metatag_article:author" : { "type" : "text" },
        "metatag_article:expiration_time" : { "type" : "text" },
        "metatag_article:modified_time" : { "type" : "text" },
        "metatag_article:published_time" : { "type" : "text" },
        "metatag_article:publisher" : { "type" : "text" },
        "metatag_article:section" : { "type" : "text" },
        "metatag_article:tag" : { "type" : "text" },
        "metatag_author" : { "type" : "uri" },
        "metatag_book:author" : { "type" : "text" },
        "metatag_book:isbn" : { "type" : "text" },
        "metatag_book:release_date" : { "type" : "text" },
        "metatag_book:tag" : { "type" : "text" },
        "metatag_cache-control" : { "type" : "text" },
        "metatag_canonical" : { "type" : "uri" },
        "metatag_content-language" : { "type" : "text" },
        "metatag_description" : { "type" : "text" },
        "metatag_expires" : { "type" : "text" },
        "metatag_fb:admins" : { "type" : "text" },
        "metatag_fb:app_id" : { "type" : "text" },
        "metatag_fb:pages" : { "type" : "text" },
        "metatag_generator" : { "type" : "text" },
        "metatag_geo.placename" : { "type" : "text" },
        "metatag_geo.position" : { "type" : "text" },
        "metatag_geo.region" : { "type" : "text" },
        "metatag_icbm" : { "type" : "text" },
        "metatag_image_src" : { "type" : "uri" },
        "metatag_itemprop:description" : { "type" : "text" },
        "metatag_itemprop:image" : { "type" : "text" },
        "metatag_itemprop:name" : { "type" : "text" },
        "metatag_itemtype" : { "type" : "text" },
        "metatag_keywords" : { "type" : "text" },
        "metatag_kle" : { "type" : "text" },
        "metatag_kle:id" : { "type" : "text" },
        "metatag_kle:title" : { "type" : "text" },
        "metatag_news_keywords" : { "type" : "text" },
        "metatag_next" : { "type" : "uri" },
        "metatag_og:audio" : { "type" : "text" },
        "metatag_og:audio:secure_url" : { "type" : "text" },
        "metatag_og:audio:type" : { "type" : "text" },
        "metatag_og:country_name" : { "type" : "text" },
        "metatag_og:description" : { "type" : "text" },
        "metatag_og:determiner" : { "type" : "text" },
        "metatag_og:email" : { "type" : "text" },
        "metatag_og:fax_number" : { "type" : "text" },
        "metatag_og:image" : { "type" : "text" },
        "metatag_og:image:height" : { "type" : "text" },
        "metatag_og:image:secure_url" : { "type" : "text" },
        "metatag_og:image:type" : { "type" : "text" },
        "metatag_og:image:url" : { "type" : "text" },
        "metatag_og:image:width" : { "type" : "text" },
        "metatag_og:latitude" : { "type" : "text" },
        "metatag_og:locale" : { "type" : "text" },
        "metatag_og:locale:alternate" : { "type" : "text" },
        "metatag_og:locality" : { "type" : "text" },
        "metatag_og:longitude" : { "type" : "text" },
        "metatag_og:phone_number" : { "type" : "text" },
        "metatag_og:postal_code" : { "type" : "text" },
        "metatag_og:region" : { "type" : "text" },
        "metatag_og:see_also" : { "type" : "text" },
        "metatag_og:site_name" : { "type" : "text" },
        "metatag_og:street_address" : { "type" : "text" },
        "metatag_og:title" : { "type" : "text" },
        "metatag_og:type" : { "type" : "text" },
        "metatag_og:updated_time" : { "type" : "text" },
        "metatag_og:url" : { "type" : "text" },
        "metatag_og:video:height" : { "type" : "text" },
        "metatag_og:video:secure_url" : { "type" : "text" },
        "metatag_og:video:type" : { "type" : "text" },
        "metatag_og:video:url" : { "type" : "text" },
        "metatag_og:video:width" : { "type" : "text" },
        "metatag_original-source" : { "type" : "text" },
        "metatag_pragma" : { "type" : "text" },
        "metatag_prev" : { "type" : "uri" },
        "metatag_profile:first_name" : { "type" : "text" },
        "metatag_profile:gender" : { "type" : "text" },
        "metatag_profile:last_name" : { "type" : "text" },
        "metatag_profile:username" : { "type" : "text" },
        "metatag_publisher" : { "type" : "uri" },
        "metatag_rating" : { "type" : "text" },
        "metatag_referrer" : { "type" : "text" },
        "metatag_refresh" : { "type" : "text" },
        "metatag_revisit-after" : { "type" : "text" },
        "metatag_rights" : { "type" : "text" },
        "metatag_robots" : { "type" : "text" },
        "metatag_set_cookie" : { "type" : "text" },
        "metatag_shortlink" : { "type" : "uri" },
        "metatag_standout" : { "type" : "text" },
        "metatag_title" : { "type" : "text" },
        "metatag_video:actor" : { "type" : "text" },
        "metatag_video:actor:role" : { "type" : "text" },
        "metatag_video:director" : { "type" : "text" },
        "metatag_video:duration" : { "type" : "text" },
        "metatag_video:release_date" : { "type" : "text" },
        "metatag_video:series" : { "type" : "text" },
        "metatag_video:tag" : { "type" : "text" },
        "metatag_video:writer" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "21.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "bellcom_elasticsearch_clear_html_alter_settings" : { "status" : 1, "weight" : "0", "settings" : { "fields_clear" : "body" } },
        "search_api_metatag_alter_callback" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_os2web_base_field_struct:parents_all" : "field_os2web_base_field_struct:parents_all" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1,
            "excluded_file_entity_bundles" : []
          }
        },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1,
            "excluded_file_entity_bundles" : []
          }
        },
        "search_api_attachments_paragraphs_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1,
            "excluded_file_entity_bundles" : []
          }
        },
        "search_api_attachments_references_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1,
            "excluded_file_entity_bundles" : []
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_elasticsearch_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "excerpt_fragments" : "3",
            "concatenator" : "...",
            "highlight" : "always"
          }
        },
        "search_api_elasticsearch_prefix_search" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            }
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_os2web_base_field_text" : true,
              "field_borger_dk_post_text" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function faxe_elasticsearch_default_search_api_page() {
  $items = array();
  $items['faxe_elasticsearch_page'] = entity_import('search_api_page', '{
    "index_id" : "faxe_public",
    "path" : "sog",
    "name" : "S\\u00f8gning",
    "machine_name" : "faxe_elasticsearch_page",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "max_length" : "128",
      "per_page" : "50",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result",
      "language_filter" : { "current" : "current", "und" : "und" },
      "search_api_spellcheck" : 1,
      "empty_behavior" : "results"
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function faxe_elasticsearch_default_search_api_server() {
  $items = array();
  $items['faxe'] = entity_import('search_api_server', '{
    "name" : "Faxe",
    "machine_name" : "faxe",
    "description" : "",
    "class" : "search_api_elasticsearch_connector",
    "options" : { "cluster" : "faxe", "facet_limit" : "10" },
    "enabled" : "1"
  }');
  return $items;
}
