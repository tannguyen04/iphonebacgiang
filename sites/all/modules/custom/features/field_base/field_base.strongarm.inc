<?php
/**
 * @file
 * field_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function field_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'anchor_link' => array(
        'label' => 'Anchor Link',
        'custom settings' => 1,
      ),
      'featured' => array(
        'label' => 'Featured',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_accessories_pattern';
  $strongarm->value = 'phu-kien/[term:name]';
  $export['pathauto_taxonomy_term_accessories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_color_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_color_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_manufacturer_pattern';
  $strongarm->value = 'hang-san-xuat/[term:name]';
  $export['pathauto_taxonomy_term_manufacturer_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_os_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_os_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_series_pattern';
  $strongarm->value = 'dong-san-pham/[term:name]';
  $export['pathauto_taxonomy_term_series_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_services_pattern';
  $strongarm->value = 'dich-vu/[term:name]';
  $export['pathauto_taxonomy_term_services_pattern'] = $strongarm;

  return $export;
}
