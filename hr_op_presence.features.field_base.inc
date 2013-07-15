<?php
/**
 * @file
 * hr_op_presence.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hr_op_presence_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_opt_out'
  $field_bases['field_opt_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opt_out',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Exclude name and details from the Humanitarian Contact List',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => 1,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
