<?php
/**
 * @file
 * hr_op_presence.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hr_op_presence_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:operational-presence
  $menu_links['main-menu:operational-presence'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'operational-presence',
    'router_path' => 'operational-presence',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => 'Operational Presence',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');


  return $menu_links;
}
