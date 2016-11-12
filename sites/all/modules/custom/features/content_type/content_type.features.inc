<?php
/**
 * @file
 * content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function content_type_image_default_styles() {
  $styles = array();

  // Exported image style: box_banner.
  $styles['box_banner'] = array(
    'name' => 'box_banner',
    'label' => 'Box banner',
    'effects' => array(
      24 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function content_type_node_info() {
  $items = array(
    'accessory' => array(
      'name' => t('Phụ kiện'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'app_mobile' => array(
      'name' => t('App Mobile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Use the <em>blog post</em> content type to manage blog nodes with the ThemeTastic theme.'),
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'box_banner' => array(
      'name' => t('Box banner'),
      'base' => 'node_content',
      'description' => t('Box banner'),
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'mobile' => array(
      'name' => t('Điện thoại'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'navigation' => array(
      'name' => t('Điều hướng'),
      'base' => 'node_content',
      'description' => t('Content build mega menu'),
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tiêu đề'),
      'help' => '',
    ),
  );
  return $items;
}
