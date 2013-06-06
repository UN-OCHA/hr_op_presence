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
        'facetapi-J2xx0ZiR3sjvfqAjGXay2ae1j3EOqPxe' => array(
          'module' => 'facetapi',
          'delta' => 'J2xx0ZiR3sjvfqAjGXay2ae1j3EOqPxe',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-hdh0JdbKEqIFj28eXUBwYwmtSiXIa04Y' => array(
          'module' => 'facetapi',
          'delta' => 'hdh0JdbKEqIFj28eXUBwYwmtSiXIa04Y',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-wJ0dyEg4XOmgo3TKrwyyTEqmOJWPTLhk' => array(
          'module' => 'facetapi',
          'delta' => 'wJ0dyEg4XOmgo3TKrwyyTEqmOJWPTLhk',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-zrgG5chbURHO9dEaGrG68E1d4eDOZ8Q3' => array(
          'module' => 'facetapi',
          'delta' => 'zrgG5chbURHO9dEaGrG68E1d4eDOZ8Q3',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-PiuAlibaoH24MdE4v7MBQLzDuoliaJ2K' => array(
          'module' => 'facetapi',
          'delta' => 'PiuAlibaoH24MdE4v7MBQLzDuoliaJ2K',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-kHK3aOdWG1zh4SceP1pcR4UYr1UyDDNK' => array(
          'module' => 'facetapi',
          'delta' => 'kHK3aOdWG1zh4SceP1pcR4UYr1UyDDNK',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-LGbKhOgYKfyhB4WcN8pt94CqhVIE4bZZ' => array(
          'module' => 'facetapi',
          'delta' => 'LGbKhOgYKfyhB4WcN8pt94CqhVIE4bZZ',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-0vsegKOA0gRsJS9ViRZ1zSAeFmr00QZS' => array(
          'module' => 'facetapi',
          'delta' => '0vsegKOA0gRsJS9ViRZ1zSAeFmr00QZS',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
      ),
    ),
    'disable_context' => array(
      'disabled' => array(
        'search_box' => 'search_box',
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
          'weight' => '-9',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '0',
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
        'views--exp-op_presence-table' => array(
          'module' => 'views',
          'delta' => '-exp-op_presence-table',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '0',
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
