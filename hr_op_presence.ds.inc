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
  $ds_fieldsetting->id = 'user|user|search';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'search';
  $ds_fieldsetting->settings = array(
    'user_email' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
    ),
    'name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['user|user|search'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hr_op_presence_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_email';
  $ds_field->label = 'Email';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="mailto:[user:mail]">[user:mail]</a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['user_email'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hr_op_presence_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|search';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'name',
      ),
      'right' => array(
        1 => 'user_email',
        3 => 'field_phones',
        4 => 'field_clusters',
        5 => 'field_job_title',
        6 => 'field_organizations',
        7 => 'field_locations',
      ),
      'left' => array(
        2 => 'ds_user_picture',
      ),
    ),
    'fields' => array(
      'name' => 'header',
      'user_email' => 'right',
      'ds_user_picture' => 'left',
      'field_phones' => 'right',
      'field_clusters' => 'right',
      'field_job_title' => 'right',
      'field_organizations' => 'right',
      'field_locations' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['user|user|search'] = $ds_layout;

  return $export;
}
