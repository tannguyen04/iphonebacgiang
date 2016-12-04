<?php
/**
 * @file
 * content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar|node|app_mobile|form';
  $field_group->group_name = 'group_avatar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_images';
  $field_group->data = array(
    'label' => 'Avatar',
    'weight' => '15',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-avatar field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avatar|node|app_mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar|node|mobile|form';
  $field_group->group_name = 'group_avatar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Avatar',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-avatar field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avatar|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_full|node|mobile|form';
  $field_group->group_name = 'group_features_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Features full',
    'weight' => '28',
    'children' => array(
      0 => 'field_features_full',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_features_full|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_overview|node|mobile|form';
  $field_group->group_name = 'group_features_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Features Overview',
    'weight' => '27',
    'children' => array(
      0 => 'field_features_overview',
      1 => 'field_badge',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Features Overview',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_features_overview|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextholder|node|accessory|teaser';
  $field_group->group_name = 'group_foliotextholder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'foliotextholder',
    'weight' => '9',
    'children' => array(
      0 => 'group_foliotextwrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'foliotextholder',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextholder field-group-div foliotextholder',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_foliotextholder|node|accessory|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foliotextwrapper|node|accessory|teaser';
  $field_group->group_name = 'group_foliotextwrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accessory';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_foliotextholder';
  $field_group->data = array(
    'label' => 'foliotextwrapper',
    'weight' => '16',
    'children' => array(
      0 => 'field_mobile_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'foliotextwrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-foliotextwrapper field-group-div foliotextwrapper',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_foliotextwrapper|node|accessory|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery|node|mobile|form';
  $field_group->group_name = 'group_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '3',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gallery|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|app_mobile|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'group_avatar',
      1 => 'group_image',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-images field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_images|node|app_mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|app_mobile|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'app_mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_images';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '16',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_image|node|app_mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|mobile|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'group_avatar',
      1 => 'group_gallery',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-media field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_media|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|mobile|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '31',
    'children' => array(
      0 => 'field_node_related',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_full|node|mobile|form';
  $field_group->group_name = 'group_technical_full';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Technical Full',
    'weight' => '30',
    'children' => array(
      0 => 'field_body_box',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-technical-full field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technical_full|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical_overview|node|mobile|form';
  $field_group->group_name = 'group_technical_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_technical';
  $field_group->data = array(
    'label' => 'Technical Overview',
    'weight' => '29',
    'children' => array(
      0 => 'field_technical_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_technical_overview|node|mobile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|mobile|form';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mobile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical',
    'weight' => '12',
    'children' => array(
      0 => 'group_features_full',
      1 => 'group_features_overview',
      2 => 'group_related',
      3 => 'group_technical_full',
      4 => 'group_technical_overview',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-technical field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_technical|node|mobile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Avatar');
  t('Features Overview');
  t('Features full');
  t('Gallery');
  t('Images');
  t('Media');
  t('Related');
  t('Technical');
  t('Technical Full');
  t('Technical Overview');
  t('foliotextholder');
  t('foliotextwrapper');

  return $field_groups;
}
