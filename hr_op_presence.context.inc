<?php
/**
 * @file
 * hr_op_presence.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_op_presence_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'op_presence';
  $context->description = 'When searching for operational presence';
  $context->tag = 'Operational Presence';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'op_presence' => 'op_presence',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-l0YNsdJjrUIEbFjM007gmuIiDcuQXIfn' => array(
          'module' => 'facetapi',
          'delta' => 'l0YNsdJjrUIEbFjM007gmuIiDcuQXIfn',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-HTP1vfBturlCLoRAwIOWieRHoJuYfGIA' => array(
          'module' => 'facetapi',
          'delta' => 'HTP1vfBturlCLoRAwIOWieRHoJuYfGIA',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-Kyi1ogTI5fqL4Ao6C1L1VmKtE1FHU4p4' => array(
          'module' => 'facetapi',
          'delta' => 'Kyi1ogTI5fqL4Ao6C1L1VmKtE1FHU4p4',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-MNq0COLqQ5kecA2svaD0bv6LqAnJ3eL4' => array(
          'module' => 'facetapi',
          'delta' => 'MNq0COLqQ5kecA2svaD0bv6LqAnJ3eL4',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-aUrECBgqm27J7jHmiUXdTD91vUWiM1GR' => array(
          'module' => 'facetapi',
          'delta' => 'aUrECBgqm27J7jHmiUXdTD91vUWiM1GR',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'facetapi-fDpJDYtv9CqvLo1mKmbQtMLosiftDWH0' => array(
          'module' => 'facetapi',
          'delta' => 'fDpJDYtv9CqvLo1mKmbQtMLosiftDWH0',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'facetapi-iaIkIv4x5j6G6F2tKadUjznla3IB6rVF' => array(
          'module' => 'facetapi',
          'delta' => 'iaIkIv4x5j6G6F2tKadUjznla3IB6rVF',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'facetapi-11GB90hn3q10dqiWhznl41HyiarNuEog' => array(
          'module' => 'facetapi',
          'delta' => '11GB90hn3q10dqiWhznl41HyiarNuEog',
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Operational Presence');
  t('When searching for operational presence');
  $export['op_presence'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'op_presence_master';
  $context->description = 'When searching for operational presence';
  $context->tag = 'Operational Presence';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'op_presence:master' => 'op_presence:master',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-op_presence-master' => array(
          'module' => 'views',
          'delta' => '-exp-op_presence-master',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '40',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Operational Presence');
  t('When searching for operational presence');
  $export['op_presence_master'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'op_presence_table';
  $context->description = 'When searching for operational presence';
  $context->tag = 'Operational Presence';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'op_presence:table' => 'op_presence:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views--exp-op_presence-table' => array(
          'module' => 'views',
          'delta' => '-exp-op_presence-table',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Operational Presence');
  t('When searching for operational presence');
  $export['op_presence_table'] = $context;

  return $export;
}
