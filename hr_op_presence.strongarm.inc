<?php
/**
 * @file
 * hr_op_presence.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hr_op_presence_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@users';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@users'] = $strongarm;

  return $export;
}
