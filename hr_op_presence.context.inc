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
        'op_presence:list' => 'op_presence:list',
        'op_presence:map' => 'op_presence:map',
        'op_presence:master' => 'op_presence:master',
        'op_presence:table' => 'op_presence:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-contacts-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-contacts-quick-links',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-hr_op_presence' => array(
          'module' => 'current_search',
          'delta' => 'hr_op_presence',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-l0YNsdJjrUIEbFjM007gmuIiDcuQXIfn' => array(
          'module' => 'facetapi',
          'delta' => 'l0YNsdJjrUIEbFjM007gmuIiDcuQXIfn',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-XSQGoekXGsJeN9aDfpucwSXC4HxP7B4W' => array(
          'module' => 'facetapi',
          'delta' => 'XSQGoekXGsJeN9aDfpucwSXC4HxP7B4W',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-HTP1vfBturlCLoRAwIOWieRHoJuYfGIA' => array(
          'module' => 'facetapi',
          'delta' => 'HTP1vfBturlCLoRAwIOWieRHoJuYfGIA',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-S3y0Lx93nDrexQr7fb1jCYMrZvzHmFIf' => array(
          'module' => 'facetapi',
          'delta' => 'S3y0Lx93nDrexQr7fb1jCYMrZvzHmFIf',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-E2ZfPWTcO8DvD30phMVHwk2kCKN34M1W' => array(
          'module' => 'facetapi',
          'delta' => 'E2ZfPWTcO8DvD30phMVHwk2kCKN34M1W',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-MNq0COLqQ5kecA2svaD0bv6LqAnJ3eL4' => array(
          'module' => 'facetapi',
          'delta' => 'MNq0COLqQ5kecA2svaD0bv6LqAnJ3eL4',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-aUrECBgqm27J7jHmiUXdTD91vUWiM1GR' => array(
          'module' => 'facetapi',
          'delta' => 'aUrECBgqm27J7jHmiUXdTD91vUWiM1GR',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-fDpJDYtv9CqvLo1mKmbQtMLosiftDWH0' => array(
          'module' => 'facetapi',
          'delta' => 'fDpJDYtv9CqvLo1mKmbQtMLosiftDWH0',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-iaIkIv4x5j6G6F2tKadUjznla3IB6rVF' => array(
          'module' => 'facetapi',
          'delta' => 'iaIkIv4x5j6G6F2tKadUjznla3IB6rVF',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-11GB90hn3q10dqiWhznl41HyiarNuEog' => array(
          'module' => 'facetapi',
          'delta' => '11GB90hn3q10dqiWhznl41HyiarNuEog',
          'region' => 'sidebar_first',
          'weight' => '2',
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
  $context->name = 'op_presence_graphs';
  $context->description = 'On the graphs page';
  $context->tag = 'Operational Presence';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'op_presence:graphs' => 'op_presence:graphs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0756ab467b9e0eca8fd566f837e055dd' => array(
          'module' => 'views',
          'delta' => '0756ab467b9e0eca8fd566f837e055dd',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-349406d2290ce2d2416cdde52a322457' => array(
          'module' => 'views',
          'delta' => '349406d2290ce2d2416cdde52a322457',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-2b2552724b244e6a72081aea3b2ed6de' => array(
          'module' => 'views',
          'delta' => '2b2552724b244e6a72081aea3b2ed6de',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-1efc2fa8f8a3b1510bf657f412414906' => array(
          'module' => 'views',
          'delta' => '1efc2fa8f8a3b1510bf657f412414906',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-d33dc7a98bf1385795153277b7599b0e' => array(
          'module' => 'views',
          'delta' => 'd33dc7a98bf1385795153277b7599b0e',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('On the graphs page');
  t('Operational Presence');
  $export['op_presence_graphs'] = $context;

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
        'search_api_saved_searches-user_profiles' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'user_profiles',
          'region' => 'sidebar_first',
          'weight' => '-13',
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
          'weight' => '50',
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
