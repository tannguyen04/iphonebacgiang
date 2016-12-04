<?php
/**
 * @file
 * product_types.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function product_types_commerce_product_default_types() {
  $items = array(
    'accessory' => array(
      'type' => 'accessory',
      'name' => 'Accessory',
      'description' => 'This is accessory',
      'help' => '',
      'revision' => 1,
    ),
    'app' => array(
      'type' => 'app',
      'name' => 'App',
      'description' => 'This is app',
      'help' => '',
      'revision' => 1,
    ),
    'mobile' => array(
      'type' => 'mobile',
      'name' => 'Mobile',
      'description' => 'This is mobile',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function product_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
