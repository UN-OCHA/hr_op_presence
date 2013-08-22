<?php
/**
 * @file
 * hr_op_presence.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_op_presence_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_op_presence_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function hr_op_presence_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_op_presence'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_op_presence",
    "name" : "Operational Presence",
    "index_id" : "user_profiles",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function hr_op_presence_default_search_api_index() {
  $items = array();
  $items['user_profiles'] = entity_import('search_api_index', '{
    "name" : "User profiles",
    "machine_name" : "user_profiles",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "profile2",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "user" : { "type" : "integer", "entity_type" : "user" },
        "field_clusters" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_coordination_hubs" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_fundings" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_locations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_organizations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_themes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_emergencies" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_first_name" : { "type" : "string" },
        "field_last_name" : { "type" : "string" },
        "field_job_title" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_opt_out" : { "type" : "boolean" },
        "field_email" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "field_organizations:field_organization_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_locations:field_location:wkt" : { "type" : "list\\u003Cstring\\u003E" },
        "field_locations:field_location:lat" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_locations:field_location:lon" : { "type" : "list\\u003Cdecimal\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "field_locations:parents_all" : "field_locations:parents_all" } }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "account" } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Real name",
                "type" : "fulltext",
                "fields" : [ "field_first_name", "field_last_name" ],
                "description" : "A Fulltext aggregation of the following fields: First name, Last name."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_first_name" : true,
              "field_last_name" : true,
              "field_email" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_first_name" : true,
              "field_last_name" : true,
              "field_email" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_email" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_first_name" : true,
              "field_last_name" : true,
              "field_email" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function hr_op_presence_default_search_api_sort() {
  $items = array();
  $items['user_profiles__field_first_name'] = entity_import('search_api_sort', '{
    "index_id" : "user_profiles",
    "field" : "field_first_name",
    "name" : "First name",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "user_profiles__field_first_name",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "First name" },
    "rdf_mapping" : []
  }');
  $items['user_profiles__field_last_name'] = entity_import('search_api_sort', '{
    "index_id" : "user_profiles",
    "field" : "field_last_name",
    "name" : "Last name",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "user_profiles__field_last_name",
    "default_sort" : "0",
    "default_sort_no_terms" : "1",
    "default_order" : "asc",
    "options" : { "field_name" : "Last name" },
    "rdf_mapping" : []
  }');
  $items['user_profiles__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "user_profiles",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "user_profiles__search_api_relevance",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  return $items;
}
