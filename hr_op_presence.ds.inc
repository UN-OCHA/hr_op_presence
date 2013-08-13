<?php
/**
 * @file
 * hr_op_presence.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hr_op_presence_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|main|search';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'main';
  $ds_fieldsetting->view_mode = 'search';
  $ds_fieldsetting->settings = array(
    'profile_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['profile2|main|search'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hr_op_presence_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_name';
  $ds_field->label = 'Profile name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'profile2' => 'profile2',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2>[profile2:field_first_name] [profile2:field_last_name]</h2>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['profile_name'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hr_op_presence_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|main|search';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'main';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_first_name',
        1 => 'field_last_name',
        2 => 'field_email',
        3 => 'field_phones',
        4 => 'field_clusters',
        5 => 'field_organizations',
        6 => 'field_job_title',
        7 => 'field_locations',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'ds_content',
      'field_last_name' => 'ds_content',
      'field_email' => 'ds_content',
      'field_phones' => 'ds_content',
      'field_clusters' => 'ds_content',
      'field_organizations' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_locations' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['profile2|main|search'] = $ds_layout;

  return $export;
}
