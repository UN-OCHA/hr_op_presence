<?php
/**
 * @file
 * hr_op_presence.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hr_op_presence_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_opt_out'
  $field_instances['user-user-field_opt_out'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you do not want to appear on our <a href="/operational-presence">Contact list</a>, check this box',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_opt_out',
    'label' => 'Opt-out',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('If you do not want to appear on our <a href="/operational-presence">Contact list</a>, check this box');
  t('Opt-out');

  return $field_instances;
}
