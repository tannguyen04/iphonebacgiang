<?php
/**
 * @file
 * ipgb_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ipgb_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => 'Footer menu',
  );
  // Exported menu: menu-social-menu.
  $menus['menu-social-menu'] = array(
    'menu_name' => 'menu-social-menu',
    'title' => 'Social menu',
    'description' => 'Facebook, Twitter ...',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook, Twitter ...');
  t('Footer menu');
  t('Social menu');


  return $menus;
}
