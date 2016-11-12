<?php
/**
 * @file
 * ipgb_pages.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ipgb_pages_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_product_facets_filter';
  $mini->category = '';
  $mini->admin_title = 'Product mobile facets filter';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'lion';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c3c8fccf-5543-47ca-93ec-bc464901ff38';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Ou4WxYa0Xud64FCZd67L0T0s6vVbizW1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Thương hiệu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $display->content['new-b4fee5b5-e661-47a2-aba6-d84e9cadff71'] = $pane;
    $display->panels['top_content'][0] = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $pane = new stdClass();
    $pane->pid = 'new-6e07c5e2-b79d-478d-83f9-94986c8a5da0';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-u3OfGr00kxmJS9MYO0EOnECNdocmqfLx';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Dòng sản phẩm',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e07c5e2-b79d-478d-83f9-94986c8a5da0';
    $display->content['new-6e07c5e2-b79d-478d-83f9-94986c8a5da0'] = $pane;
    $display->panels['top_content'][1] = 'new-6e07c5e2-b79d-478d-83f9-94986c8a5da0';
    $pane = new stdClass();
    $pane->pid = 'new-48a1cd21-bfcc-4bc1-9435-f9966814e249';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-5UaUWdndVZU0QNGPsMGqcHsH4VXzIP3P';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Màu sắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '48a1cd21-bfcc-4bc1-9435-f9966814e249';
    $display->content['new-48a1cd21-bfcc-4bc1-9435-f9966814e249'] = $pane;
    $display->panels['top_content'][2] = 'new-48a1cd21-bfcc-4bc1-9435-f9966814e249';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
  $mini->display = $display;
  $export['clone_of_product_facets_filter'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'product_facets_filter';
  $mini->category = '';
  $mini->admin_title = 'Product facets filter';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'lion';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c3c8fccf-5543-47ca-93ec-bc464901ff38';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Ou4WxYa0Xud64FCZd67L0T0s6vVbizW1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Thương hiệu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $display->content['new-b4fee5b5-e661-47a2-aba6-d84e9cadff71'] = $pane;
    $display->panels['top_content'][0] = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
    $pane = new stdClass();
    $pane->pid = 'new-c0ee524b-1395-4070-9e3a-b28751f9b6bd';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-difKkEtDENYFaZ3jJcJQr0W4DcK8fN1M';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Hệ điều hành',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c0ee524b-1395-4070-9e3a-b28751f9b6bd';
    $display->content['new-c0ee524b-1395-4070-9e3a-b28751f9b6bd'] = $pane;
    $display->panels['top_content'][1] = 'new-c0ee524b-1395-4070-9e3a-b28751f9b6bd';
    $pane = new stdClass();
    $pane->pid = 'new-48a1cd21-bfcc-4bc1-9435-f9966814e249';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-5UaUWdndVZU0QNGPsMGqcHsH4VXzIP3P';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Màu sắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '48a1cd21-bfcc-4bc1-9435-f9966814e249';
    $display->content['new-48a1cd21-bfcc-4bc1-9435-f9966814e249'] = $pane;
    $display->panels['top_content'][2] = 'new-48a1cd21-bfcc-4bc1-9435-f9966814e249';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b4fee5b5-e661-47a2-aba6-d84e9cadff71';
  $mini->display = $display;
  $export['product_facets_filter'] = $mini;

  return $export;
}
