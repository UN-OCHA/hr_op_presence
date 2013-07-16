<?php
/**
 * @file
 * hr_op_presence.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_op_presence_user_default_permissions() {
  $permissions = array();

  // Exported permission: use search_api_autocomplete for search_api_views_user_profiles.
  $permissions['use search_api_autocomplete for search_api_views_user_profiles'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_user_profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
