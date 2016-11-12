<?php
/**
 * @file
 * ipbg_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ipbg_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function ipbg_views_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: accessories_slideshow
  $nodequeues['accessories_slideshow'] = array(
    'name' => 'accessories_slideshow',
    'title' => 'Accessories slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: app_slideshow
  $nodequeues['app_slideshow'] = array(
    'name' => 'app_slideshow',
    'title' => 'App slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: best_sale
  $nodequeues['best_sale'] = array(
    'name' => 'best_sale',
    'title' => 'Home Page (Sản phẩm bán chạy)',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Thêm vào danh sách hàng bán chạy',
    'link_remove' => 'Xóa khỏi danh sách hàng bán chạy',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'accessory',
      1 => 'mobile',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: home_slideshow
  $nodequeues['home_slideshow'] = array(
    'name' => 'home_slideshow',
    'title' => 'Home slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: iphone_slideshow
  $nodequeues['iphone_slideshow'] = array(
    'name' => 'iphone_slideshow',
    'title' => 'Iphone slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: news_slideshoe
  $nodequeues['news_slideshoe'] = array(
    'name' => 'news_slideshoe',
    'title' => 'News slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slide',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: promoted_product
  $nodequeues['promoted_product'] = array(
    'name' => 'promoted_product',
    'title' => 'Home Page (Sản phẩm mới)',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'accessory',
      1 => 'mobile',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: services
  $nodequeues['services'] = array(
    'name' => 'services',
    'title' => 'Services',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'services',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
