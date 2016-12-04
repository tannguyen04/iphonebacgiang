<?php
/**
 * @file
 * field_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function field_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-color-field_color'
  $field_instances['taxonomy_term-color-field_color'] = array(
    'bundle' => 'color',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'add_to_cart_form' => array(
        'label' => 'hidden',
        'module' => 'commerce_fancy_attributes',
        'settings' => array(),
        'type' => 'commerce_fancy_attributes_color',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_color',
    'label' => 'Color',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Color');

  return $field_instances;
}
