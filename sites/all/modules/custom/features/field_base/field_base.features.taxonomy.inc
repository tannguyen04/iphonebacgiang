<?php
/**
 * @file
 * field_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function field_base_taxonomy_default_vocabularies() {
  return array(
    'accessories' => array(
      'name' => 'Accessories',
      'machine_name' => 'accessories',
      'description' => 'Phu kien',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'color' => array(
      'name' => 'Color',
      'machine_name' => 'color',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'manufacturer' => array(
      'name' => 'Manufacturer',
      'machine_name' => 'manufacturer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os' => array(
      'name' => 'OS',
      'machine_name' => 'os',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'series' => array(
      'name' => 'Series',
      'machine_name' => 'series',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'services' => array(
      'name' => 'Services',
      'machine_name' => 'services',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
