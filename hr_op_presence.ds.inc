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
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_square_thumbnail',
    ),
  );
  $export['user|user|search'] = $ds_fieldsetting;

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
      'left' => array(
        0 => 'ds_user_picture',
      ),
      'header' => array(
        1 => 'name',
      ),
      'right' => array(
        2 => 'field_phones',
        3 => 'field_organizations',
        4 => 'field_job_title',
        5 => 'field_clusters',
        6 => 'field_locations',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'left',
      'name' => 'header',
      'field_phones' => 'right',
      'field_organizations' => 'right',
      'field_job_title' => 'right',
      'field_clusters' => 'right',
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
