<?php
/**
 * @file
 * product_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function product_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_commerce_product__mobile';
  $strongarm->value = array(
    'view_modes' => array(
      'line_item' => array(
        'custom_settings' => TRUE,
      ),
      'node_full' => array(
        'custom_settings' => TRUE,
      ),
      'node_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_display' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'commerce_line_item_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_rss' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_index' => array(
        'custom_settings' => FALSE,
      ),
      'node_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_token' => array(
        'custom_settings' => FALSE,
      ),
      'node_revision' => array(
        'custom_settings' => FALSE,
      ),
      'node_anchor_link' => array(
        'custom_settings' => TRUE,
      ),
      'node_featured' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'sku' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'status' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_anchor_link' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_anchor_link' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
        ),
        'status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'node_full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'node_anchor_link' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'node_teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'node_featured' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_commerce_product__mobile'] = $strongarm;

  return $export;
}
