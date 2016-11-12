<?php
/**
 * @file
 * ipgb_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ipgb_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__accessory';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Accessory',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'hide-page-title page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'accessory',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'accessory' => 'accessory',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__accessory'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__app';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'App',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'hide-page-title page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'app',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'app_mobile' => 'app_mobile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__app'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'News',
    'panels_breadcrumbs_paths' => 'news
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'spectre';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
      'sidebar_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle_content'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane = new stdClass();
    $pane->pid = 'new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $pane->panel = 'sidebar_content';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'global',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => 'Share',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $display->content['new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5'] = $pane;
    $display->panels['sidebar_content'][0] = 'new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $pane = new stdClass();
    $pane->pid = 'new-e54b51bc-1864-42cd-9063-a36a5726f4d4';
    $pane->panel = 'sidebar_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Bài viết khác',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e54b51bc-1864-42cd-9063-a36a5726f4d4';
    $display->content['new-e54b51bc-1864-42cd-9063-a36a5726f4d4'] = $pane;
    $display->panels['sidebar_content'][1] = 'new-e54b51bc-1864-42cd-9063-a36a5726f4d4';
    $pane = new stdClass();
    $pane->pid = 'new-4a4ae5a1-1c54-4be5-8570-57008745e350';
    $pane->panel = 'top_content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page title',
      'title' => '',
      'body' => '<h1 class="page-title">Tin tức</h1>
<p>Tin tức công nghệ mới nhất về smartphone</p>',
      'format' => 'full_html',
      'substitute' => 1,
      'name' => 'page_title_news_page',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a4ae5a1-1c54-4be5-8570-57008745e350';
    $display->content['new-4a4ae5a1-1c54-4be5-8570-57008745e350'] = $pane;
    $display->panels['top_content'][0] = 'new-4a4ae5a1-1c54-4be5-8570-57008745e350';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__blog'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mobile';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Mobile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'hide-page-title page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mobile',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'mobile' => 'mobile',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'top_content_left' => NULL,
      'top_content_right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'kaka',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $display->content['new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f'] = $pane;
    $display->panels['middle'][0] = 'new-3926ee35-21eb-4c0a-a11c-2b0a7117d33f';
    $pane = new stdClass();
    $pane->pid = 'new-c57a836e-ae0f-41a5-b974-56368ff8e993';
    $pane->panel = 'middle';
    $pane->type = 'anchor_link_product_display';
    $pane->subtype = 'anchor_link_product_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'anchor-links-product',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c57a836e-ae0f-41a5-b974-56368ff8e993';
    $display->content['new-c57a836e-ae0f-41a5-b974-56368ff8e993'] = $pane;
    $display->panels['middle'][1] = 'new-c57a836e-ae0f-41a5-b974-56368ff8e993';
    $pane = new stdClass();
    $pane->pid = 'new-e6811c19-7e63-4141-8b1a-0113dda4a949';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_features_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tổng quan sản phẩm',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'overview',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e6811c19-7e63-4141-8b1a-0113dda4a949';
    $display->content['new-e6811c19-7e63-4141-8b1a-0113dda4a949'] = $pane;
    $display->panels['middle'][2] = 'new-e6811c19-7e63-4141-8b1a-0113dda4a949';
    $pane = new stdClass();
    $pane->pid = 'new-39798b2e-4c95-4017-a310-2971275c8266';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_features_full';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tính năng',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '39798b2e-4c95-4017-a310-2971275c8266';
    $display->content['new-39798b2e-4c95-4017-a310-2971275c8266'] = $pane;
    $display->panels['middle'][3] = 'new-39798b2e-4c95-4017-a310-2971275c8266';
    $pane = new stdClass();
    $pane->pid = 'new-2875af7d-6866-4987-828f-1e2b73b060ea';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '10',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Reviews',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'review',
      'css_class' => 'border-title container',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2875af7d-6866-4987-828f-1e2b73b060ea';
    $display->content['new-2875af7d-6866-4987-828f-1e2b73b060ea'] = $pane;
    $display->panels['middle'][4] = 'new-2875af7d-6866-4987-828f-1e2b73b060ea';
    $pane = new stdClass();
    $pane->pid = 'new-6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_technical_overview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'technical',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $display->content['new-6490dea7-5f4a-4c69-98e2-92b13d230bd3'] = $pane;
    $display->panels['middle'][5] = 'new-6490dea7-5f4a-4c69-98e2-92b13d230bd3';
    $pane = new stdClass();
    $pane->pid = 'new-b6b84709-b373-4b75-b417-5ccfd844875c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Thông số kĩ thuật chi tiết',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container border-title',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'b6b84709-b373-4b75-b417-5ccfd844875c';
    $display->content['new-b6b84709-b373-4b75-b417-5ccfd844875c'] = $pane;
    $display->panels['middle'][6] = 'new-b6b84709-b373-4b75-b417-5ccfd844875c';
    $pane = new stdClass();
    $pane->pid = 'new-38b8b64b-287d-4e3d-88a7-383221d11b29';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'products';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'related',
      'css_class' => 'border-title container',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '38b8b64b-287d-4e3d-88a7-383221d11b29';
    $display->content['new-38b8b64b-287d-4e3d-88a7-383221d11b29'] = $pane;
    $display->panels['middle'][7] = 'new-38b8b64b-287d-4e3d-88a7-383221d11b29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__mobile'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_2c9737d5-e9ec-49c6-b944-251c741526ec';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Service',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'service',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'service' => 'service',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'News',
    'panels_breadcrumbs_paths' => 'news
',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'spectre';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
      'sidebar_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle_content'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane = new stdClass();
    $pane->pid = 'new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $pane->panel = 'sidebar_content';
    $pane->type = 'sharethis';
    $pane->subtype = 'sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'global',
      'path-external' => '',
      'override_title' => 1,
      'override_title_text' => 'Share',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $display->content['new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5'] = $pane;
    $display->panels['sidebar_content'][0] = 'new-1b87dcaa-e5bb-47b5-8527-34bb7e0140c5';
    $pane = new stdClass();
    $pane->pid = 'new-e9dff17d-9387-45ff-ab1f-3bd79cc73292';
    $pane->panel = 'sidebar_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'services-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Dịch vụ khác',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e9dff17d-9387-45ff-ab1f-3bd79cc73292';
    $display->content['new-e9dff17d-9387-45ff-ab1f-3bd79cc73292'] = $pane;
    $display->panels['sidebar_content'][1] = 'new-e9dff17d-9387-45ff-ab1f-3bd79cc73292';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_2c9737d5-e9ec-49c6-b944-251c741526ec'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_938b17c4-6dd6-4377-8309-877e88805f43';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_938b17c4-6dd6-4377-8309-877e88805f43'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__service';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Service',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'service',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'services' => 'services',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'spectre';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'left_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
      'sidebar_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a17d8a9-b733-4b52-aa16-988b450f0f4d';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane->panel = 'middle_content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $display->content['new-270e64f2-89a6-4fa0-9d2d-8611551afdc1'] = $pane;
    $display->panels['middle_content'][0] = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
    $pane = new stdClass();
    $pane->pid = 'new-f5d7cfa5-d727-44f1-b117-b2fefef5a95c';
    $pane->panel = 'sidebar_content';
    $pane->type = 'views';
    $pane->subtype = 'themetastic_services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5d7cfa5-d727-44f1-b117-b2fefef5a95c';
    $display->content['new-f5d7cfa5-d727-44f1-b117-b2fefef5a95c'] = $pane;
    $display->panels['sidebar_content'][0] = 'new-f5d7cfa5-d727-44f1-b117-b2fefef5a95c';
    $pane = new stdClass();
    $pane->pid = 'new-b1fe3557-826e-49a7-a90b-1f2c96be6913';
    $pane->panel = 'sidebar_content';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-menu-services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b1fe3557-826e-49a7-a90b-1f2c96be6913';
    $display->content['new-b1fe3557-826e-49a7-a90b-1f2c96be6913'] = $pane;
    $display->panels['sidebar_content'][1] = 'new-b1fe3557-826e-49a7-a90b-1f2c96be6913';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-270e64f2-89a6-4fa0-9d2d-8611551afdc1';
  $handler->conf['display'] = $display;
  $export['node_view__service'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__product';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Site template: Node product',
    'no_blocks' => 1,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Commerce Order from User (on commerce_order.owner)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-user-commerce_order',
        'context' => 'logged-in-user',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'accessory' => 'accessory',
              'app_mobile' => 'app_mobile',
              'mobile' => 'mobile',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'name' => 'product',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'site_wide_full';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_top' => NULL,
      'navigation' => NULL,
      'feature' => NULL,
      'breadcrumb' => NULL,
      'content_top' => NULL,
      'content_bottom' => NULL,
      'footer_panel_1' => NULL,
      'footer_panel_2' => NULL,
      'footer_panel_3' => NULL,
      'footer_panel_4' => NULL,
      'footer_top' => NULL,
      'footer' => NULL,
      'navigation_bottom' => NULL,
      'page_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfb2e51f-f223-4e07-ac76-26a24cf43376';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $display->content['new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane = new stdClass();
    $pane->pid = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '5b896e5a-9e67-4399-833d-665e524f310d';
    $display->content['new-5b896e5a-9e67-4399-833d-665e524f310d'] = $pane;
    $display->panels['content'][0] = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane = new stdClass();
    $pane->pid = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '9498668c-5b13-42e7-a229-95f00a12f204';
    $display->content['new-9498668c-5b13-42e7-a229-95f00a12f204'] = $pane;
    $display->panels['content'][1] = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane = new stdClass();
    $pane->pid = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '163f28a5-6adb-4748-82e9-0e8c82823139';
    $display->content['new-163f28a5-6adb-4748-82e9-0e8c82823139'] = $pane;
    $display->panels['footer'][0] = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane = new stdClass();
    $pane->pid = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78eafead-b3be-46c3-909f-52c356ed598e';
    $display->content['new-78eafead-b3be-46c3-909f-52c356ed598e'] = $pane;
    $display->panels['footer'][1] = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane = new stdClass();
    $pane->pid = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane->panel = 'footer_panel_1';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'About store',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $display->content['new-125ef5c4-bc69-48f3-a506-8d9300a2c658'] = $pane;
    $display->panels['footer_panel_1'][0] = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane = new stdClass();
    $pane->pid = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane->panel = 'footer_panel_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Menu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc4d79dd-d297-4d70-839b-65111d1fe027';
    $display->content['new-cc4d79dd-d297-4d70-839b-65111d1fe027'] = $pane;
    $display->panels['footer_panel_2'][0] = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane = new stdClass();
    $pane->pid = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane->panel = 'footer_panel_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $display->content['new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a'] = $pane;
    $display->panels['footer_panel_3'][0] = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane = new stdClass();
    $pane->pid = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane->panel = 'footer_panel_4';
    $pane->type = 'block';
    $pane->subtype = 'block-14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bạn có thắc mắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $display->content['new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada'] = $pane;
    $display->panels['footer_panel_4'][0] = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane = new stdClass();
    $pane->pid = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $display->content['new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9'] = $pane;
    $display->panels['header'][0] = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane = new stdClass();
    $pane->pid = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $display->content['new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4'] = $pane;
    $display->panels['header'][1] = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane = new stdClass();
    $pane->pid = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane->panel = 'header_top';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $display->content['new-c4360e5c-efae-4e3a-9593-bd9a8a360850'] = $pane;
    $display->panels['header_top'][0] = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane = new stdClass();
    $pane->pid = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane->panel = 'navigation';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04127c43-e897-423f-bf7a-02356ef96bc7';
    $display->content['new-04127c43-e897-423f-bf7a-02356ef96bc7'] = $pane;
    $display->panels['navigation'][0] = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane = new stdClass();
    $pane->pid = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $display->content['new-8f958ef7-c3a2-4517-b903-6ca1772c34f3'] = $pane;
    $display->panels['navigation'][1] = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane = new stdClass();
    $pane->pid = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane->panel = 'navigation_bottom';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $display->content['new-e4082998-8c7f-4d62-acfe-9a187a2b8031'] = $pane;
    $display->panels['navigation_bottom'][0] = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane = new stdClass();
    $pane->pid = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
    $pane->panel = 'page_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '240a854f-1e81-4f3a-98be-691741a75b8f';
    $display->content['new-240a854f-1e81-4f3a-98be-691741a75b8f'] = $pane;
    $display->panels['page_title'][0] = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
  $handler->conf['display'] = $display;
  $export['site_template__product'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__site-wide';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Site wide',
    'no_blocks' => 1,
    'css_id' => 'page-wrapper',
    'css' => '/* set a fixed overall width */
  #page-wrapper > .panel-flexible-inside {
    width: 1020px;
    margin-left: auto;
    margin-right: auto;
  }

  /* Add some margin to the main content row. This class was set in the layout designer. */
  #page-wrapper .main-content {
    padding: 0 10px;
  }',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Commerce Order from User (on commerce_order.owner)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-user-commerce_order',
        'context' => 'logged-in-user',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'pipeline' => 'standard',
    'name' => 'site-wide',
  );
  $display = new panels_display();
  $display->layout = 'site_wide';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
          1 => 'sidebar',
        ),
        'parent' => 'main',
        'class' => 'main-content',
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '100',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '200',
        'width_type' => 'px',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'header',
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'header' => NULL,
      'header_top' => NULL,
      'navigation' => NULL,
      'feature' => NULL,
      'breadcrumb' => NULL,
      'content_top' => NULL,
      'content_bottom' => NULL,
      'footer_panel_1' => NULL,
      'footer_panel_2' => NULL,
      'footer_panel_3' => NULL,
      'footer_panel_4' => NULL,
      'footer_top' => NULL,
      'footer' => NULL,
      'navigation_bottom' => NULL,
      'page_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bfb2e51f-f223-4e07-ac76-26a24cf43376';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane->panel = 'breadcrumb';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $display->content['new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c'] = $pane;
    $display->panels['breadcrumb'][0] = 'new-774b1b1e-9a6f-490a-a07f-023a5b7e7b1c';
    $pane = new stdClass();
    $pane->pid = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane->panel = 'content';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'pane-message-tab-help',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '5b896e5a-9e67-4399-833d-665e524f310d';
    $display->content['new-5b896e5a-9e67-4399-833d-665e524f310d'] = $pane;
    $display->panels['content'][0] = 'new-5b896e5a-9e67-4399-833d-665e524f310d';
    $pane = new stdClass();
    $pane->pid = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '9498668c-5b13-42e7-a229-95f00a12f204';
    $display->content['new-9498668c-5b13-42e7-a229-95f00a12f204'] = $pane;
    $display->panels['content'][1] = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
    $pane = new stdClass();
    $pane->pid = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '163f28a5-6adb-4748-82e9-0e8c82823139';
    $display->content['new-163f28a5-6adb-4748-82e9-0e8c82823139'] = $pane;
    $display->panels['footer'][0] = 'new-163f28a5-6adb-4748-82e9-0e8c82823139';
    $pane = new stdClass();
    $pane->pid = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78eafead-b3be-46c3-909f-52c356ed598e';
    $display->content['new-78eafead-b3be-46c3-909f-52c356ed598e'] = $pane;
    $display->panels['footer'][1] = 'new-78eafead-b3be-46c3-909f-52c356ed598e';
    $pane = new stdClass();
    $pane->pid = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane->panel = 'footer_panel_1';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'About store',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $display->content['new-125ef5c4-bc69-48f3-a506-8d9300a2c658'] = $pane;
    $display->panels['footer_panel_1'][0] = 'new-125ef5c4-bc69-48f3-a506-8d9300a2c658';
    $pane = new stdClass();
    $pane->pid = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane->panel = 'footer_panel_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Menu',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc4d79dd-d297-4d70-839b-65111d1fe027';
    $display->content['new-cc4d79dd-d297-4d70-839b-65111d1fe027'] = $pane;
    $display->panels['footer_panel_2'][0] = 'new-cc4d79dd-d297-4d70-839b-65111d1fe027';
    $pane = new stdClass();
    $pane->pid = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane->panel = 'footer_panel_3';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $display->content['new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a'] = $pane;
    $display->panels['footer_panel_3'][0] = 'new-a4456ba3-df16-49c9-a38f-18ca2b2ade5a';
    $pane = new stdClass();
    $pane->pid = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane->panel = 'footer_panel_4';
    $pane->type = 'block';
    $pane->subtype = 'block-14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bạn có thắc mắc',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $display->content['new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada'] = $pane;
    $display->panels['footer_panel_4'][0] = 'new-d02cb3ee-b5b7-4d5b-b81d-f6407b45eada';
    $pane = new stdClass();
    $pane->pid = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $display->content['new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9'] = $pane;
    $display->panels['header'][0] = 'new-5ae3cb12-2c78-45ad-ba9c-935bd39955f9';
    $pane = new stdClass();
    $pane->pid = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $display->content['new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4'] = $pane;
    $display->panels['header'][1] = 'new-6deb6153-747b-4f5e-ae50-c1cd19f14fc4';
    $pane = new stdClass();
    $pane->pid = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane->panel = 'header_top';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $display->content['new-c4360e5c-efae-4e3a-9593-bd9a8a360850'] = $pane;
    $display->panels['header_top'][0] = 'new-c4360e5c-efae-4e3a-9593-bd9a8a360850';
    $pane = new stdClass();
    $pane->pid = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane->panel = 'navigation';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04127c43-e897-423f-bf7a-02356ef96bc7';
    $display->content['new-04127c43-e897-423f-bf7a-02356ef96bc7'] = $pane;
    $display->panels['navigation'][0] = 'new-04127c43-e897-423f-bf7a-02356ef96bc7';
    $pane = new stdClass();
    $pane->pid = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $display->content['new-8f958ef7-c3a2-4517-b903-6ca1772c34f3'] = $pane;
    $display->panels['navigation'][1] = 'new-8f958ef7-c3a2-4517-b903-6ca1772c34f3';
    $pane = new stdClass();
    $pane->pid = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane->panel = 'navigation_bottom';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $display->content['new-e4082998-8c7f-4d62-acfe-9a187a2b8031'] = $pane;
    $display->panels['navigation_bottom'][0] = 'new-e4082998-8c7f-4d62-acfe-9a187a2b8031';
    $pane = new stdClass();
    $pane->pid = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
    $pane->panel = 'page_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '240a854f-1e81-4f3a-98be-691741a75b8f';
    $display->content['new-240a854f-1e81-4f3a-98be-691741a75b8f'] = $pane;
    $display->panels['page_title'][0] = 'new-240a854f-1e81-4f3a-98be-691741a75b8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9498668c-5b13-42e7-a229-95f00a12f204';
  $handler->conf['display'] = $display;
  $export['site_template__site-wide'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_0ce8c5bb-0bf8-4a36-a393-b16ebce32d3f';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7b84b7d-fc43-4f64-946a-2d620cbdd88f';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30bb90a6-8a96-40eb-9faf-d31fcde7c7d3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_term_bg-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30bb90a6-8a96-40eb-9faf-d31fcde7c7d3';
    $display->content['new-30bb90a6-8a96-40eb-9faf-d31fcde7c7d3'] = $pane;
    $display->panels['middle'][0] = 'new-30bb90a6-8a96-40eb-9faf-d31fcde7c7d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-30bb90a6-8a96-40eb-9faf-d31fcde7c7d3';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_0ce8c5bb-0bf8-4a36-a393-b16ebce32d3f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_88d1f61f-cc93-436d-be09-7b8f1cbb3d71';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Service',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'services' => 'services',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'sidebar_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e349e13a-ba83-4cad-ad9e-7306c2a86e74';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bc788e35-0918-4efa-aed8-21b10391797e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'services-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bc788e35-0918-4efa-aed8-21b10391797e';
    $display->content['new-bc788e35-0918-4efa-aed8-21b10391797e'] = $pane;
    $display->panels['middle'][0] = 'new-bc788e35-0918-4efa-aed8-21b10391797e';
    $pane = new stdClass();
    $pane->pid = 'new-56be528a-d085-4238-9ecd-398dfc7cf06e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_service_index-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '56be528a-d085-4238-9ecd-398dfc7cf06e';
    $display->content['new-56be528a-d085-4238-9ecd-398dfc7cf06e'] = $pane;
    $display->panels['middle'][1] = 'new-56be528a-d085-4238-9ecd-398dfc7cf06e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_88d1f61f-cc93-436d-be09-7b8f1cbb3d71'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_c40c01c0-95d3-4f57-a1e4-c1d3e5491015';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Accessory',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'accessories' => 'accessories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd4d70d5b-4610-4311-9851-8f7d1f951b64';
  $display->subtitle = 'Nơi tìm kiếm phụ kiện';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dce25aa0-ca3e-40c7-891b-86ec7d46fcd3';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dce25aa0-ca3e-40c7-891b-86ec7d46fcd3';
    $display->content['new-dce25aa0-ca3e-40c7-891b-86ec7d46fcd3'] = $pane;
    $display->panels['middle'][0] = 'new-dce25aa0-ca3e-40c7-891b-86ec7d46fcd3';
    $pane = new stdClass();
    $pane->pid = 'new-c7def181-e43c-425d-862e-e4d4ff6921f7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-slideshow',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c7def181-e43c-425d-862e-e4d4ff6921f7';
    $display->content['new-c7def181-e43c-425d-862e-e4d4ff6921f7'] = $pane;
    $display->panels['middle'][1] = 'new-c7def181-e43c-425d-862e-e4d4ff6921f7';
    $pane = new stdClass();
    $pane->pid = 'new-f3d9b3cb-2404-495d-8d34-29539445c7a6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-list container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f3d9b3cb-2404-495d-8d34-29539445c7a6';
    $display->content['new-f3d9b3cb-2404-495d-8d34-29539445c7a6'] = $pane;
    $display->panels['middle'][2] = 'new-f3d9b3cb-2404-495d-8d34-29539445c7a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_c40c01c0-95d3-4f57-a1e4-c1d3e5491015'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ipgb_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'accessories';
  $page->task = 'page';
  $page->admin_title = 'Accessories';
  $page->admin_description = '';
  $page->path = 'phu-kien/!type';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_accessories__panel';
  $handler->task = 'page';
  $handler->subtask = 'accessories';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Phụ kiện';
  $display->uuid = 'b453b55f-ad9d-4a49-9319-0ff016ef70d6';
  $display->subtitle = 'Nơi tìm kiếm phụ kiện';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f5bb4e5a-01f0-49c6-9b96-e51b8c9fe7fc';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5bb4e5a-01f0-49c6-9b96-e51b8c9fe7fc';
    $display->content['new-f5bb4e5a-01f0-49c6-9b96-e51b8c9fe7fc'] = $pane;
    $display->panels['middle'][0] = 'new-f5bb4e5a-01f0-49c6-9b96-e51b8c9fe7fc';
    $pane = new stdClass();
    $pane->pid = 'new-dced3760-3a26-4b8f-b6f7-3cb0a01ef244';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-slideshow',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dced3760-3a26-4b8f-b6f7-3cb0a01ef244';
    $display->content['new-dced3760-3a26-4b8f-b6f7-3cb0a01ef244'] = $pane;
    $display->panels['middle'][1] = 'new-dced3760-3a26-4b8f-b6f7-3cb0a01ef244';
    $pane = new stdClass();
    $pane->pid = 'new-0965b917-8c3e-471e-9947-4176de2610a5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%type:raw',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'context' => array(
        0 => 'empty',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-list container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0965b917-8c3e-471e-9947-4176de2610a5';
    $display->content['new-0965b917-8c3e-471e-9947-4176de2610a5'] = $pane;
    $display->panels['middle'][2] = 'new-0965b917-8c3e-471e-9947-4176de2610a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0965b917-8c3e-471e-9947-4176de2610a5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['accessories'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'apps';
  $page->task = 'page';
  $page->admin_title = 'Apps';
  $page->admin_description = '';
  $page->path = 'ung-dung';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_apps__panel';
  $handler->task = 'page';
  $handler->subtask = 'apps';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Apps';
  $display->uuid = '357d00aa-14eb-4457-ab6c-4bc44e9ffc25';
  $display->subtitle = 'Fill your smartphone with our smart apps';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $display->content['new-883ba39d-4ac1-4cd8-a914-761d983f59d0'] = $pane;
    $display->panels['middle'][0] = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane = new stdClass();
    $pane->pid = 'new-c52169f9-14d5-4e0a-af70-e278b8b97e93';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'name' => 'app_slideshow',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c52169f9-14d5-4e0a-af70-e278b8b97e93';
    $display->content['new-c52169f9-14d5-4e0a-af70-e278b8b97e93'] = $pane;
    $display->panels['middle'][1] = 'new-c52169f9-14d5-4e0a-af70-e278b8b97e93';
    $pane = new stdClass();
    $pane->pid = 'new-fbbfc248-41ac-43df-8c44-2bbc96664e42';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-products-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-filter-app container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fbbfc248-41ac-43df-8c44-2bbc96664e42';
    $display->content['new-fbbfc248-41ac-43df-8c44-2bbc96664e42'] = $pane;
    $display->panels['middle'][2] = 'new-fbbfc248-41ac-43df-8c44-2bbc96664e42';
    $pane = new stdClass();
    $pane->pid = 'new-74fe303a-5759-4241-8961-ff59f4f3aa62';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'list-apps container',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '74fe303a-5759-4241-8961-ff59f4f3aa62';
    $display->content['new-74fe303a-5759-4241-8961-ff59f4f3aa62'] = $pane;
    $display->panels['middle'][3] = 'new-74fe303a-5759-4241-8961-ff59f4f3aa62';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['apps'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'apps_game';
  $page->task = 'page';
  $page->admin_title = 'Apps Game';
  $page->admin_description = '';
  $page->path = 'ung-dung/game';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_apps_game__panel_context_9445c80a-d2b0-4bf8-9014-a79d06036a99';
  $handler->task = 'page';
  $handler->subtask = 'apps_game';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Apps Game';
  $display->uuid = '357d00aa-14eb-4457-ab6c-4bc44e9ffc25';
  $display->subtitle = 'Rat nhieu game hay';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $display->content['new-883ba39d-4ac1-4cd8-a914-761d983f59d0'] = $pane;
    $display->panels['middle'][0] = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane = new stdClass();
    $pane->pid = 'new-e1c52860-6ac9-40f4-9a94-4afd9ffb8dca';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-products-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-filter-app container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e1c52860-6ac9-40f4-9a94-4afd9ffb8dca';
    $display->content['new-e1c52860-6ac9-40f4-9a94-4afd9ffb8dca'] = $pane;
    $display->panels['middle'][1] = 'new-e1c52860-6ac9-40f4-9a94-4afd9ffb8dca';
    $pane = new stdClass();
    $pane->pid = 'new-1554a8f4-226d-495e-b630-43613c626f94';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'list-apps container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1554a8f4-226d-495e-b630-43613c626f94';
    $display->content['new-1554a8f4-226d-495e-b630-43613c626f94'] = $pane;
    $display->panels['middle'][2] = 'new-1554a8f4-226d-495e-b630-43613c626f94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['apps_game'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'apps_tien_ich';
  $page->task = 'page';
  $page->admin_title = 'Apps tien ich';
  $page->admin_description = '';
  $page->path = 'ung-dung/tien-ich';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_apps_tien_ich__panel_context_8255fbd3-0505-45c2-ba4f-82a9461b4421';
  $handler->task = 'page';
  $handler->subtask = 'apps_tien_ich';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'bottom_content' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Apps Game';
  $display->uuid = '357d00aa-14eb-4457-ab6c-4bc44e9ffc25';
  $display->subtitle = 'Rat nhieu game hay';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $display->content['new-883ba39d-4ac1-4cd8-a914-761d983f59d0'] = $pane;
    $display->panels['middle'][0] = 'new-883ba39d-4ac1-4cd8-a914-761d983f59d0';
    $pane = new stdClass();
    $pane->pid = 'new-494cb0b4-2619-4c6a-a5ed-28b4a38c370a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-products-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-filter-app container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '494cb0b4-2619-4c6a-a5ed-28b4a38c370a';
    $display->content['new-494cb0b4-2619-4c6a-a5ed-28b4a38c370a'] = $pane;
    $display->panels['middle'][1] = 'new-494cb0b4-2619-4c6a-a5ed-28b4a38c370a';
    $pane = new stdClass();
    $pane->pid = 'new-e61ce062-bc4f-4bfe-8276-109d7cdedf7e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'list-apps container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e61ce062-bc4f-4bfe-8276-109d7cdedf7e';
    $display->content['new-e61ce062-bc4f-4bfe-8276-109d7cdedf7e'] = $pane;
    $display->panels['middle'][2] = 'new-e61ce062-bc4f-4bfe-8276-109d7cdedf7e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['apps_tien_ich'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'lien-he';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Liên hệ';
  $display->uuid = 'bcca0dc6-45bc-4314-b023-5bd6c4622a7c';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-08e46684-0592-474f-91a6-23ab0eb0af3f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Map',
      'title' => '',
      'body' => '<p><iframe allowfullscreen="" frameborder="0" height="500" src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3717.6998454043223!2d106.19468781475855!3d21.28334568441456!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x31356d0ef9c3a1c5%3A0x9d0ccf96c4fe5767!2zTmfDtSA2LCB0cC4gQuG6r2MgR2lhbmcsIELhuq9jIEdpYW5nLCBWaWV0bmFt!5e0!3m2!1sen!2s!4v1464406164806" style="border:0" width="1140"></iframe></p>

<ul class="contact-info">
	<li><strong>Địa chỉ:</strong>Kiot số 10 - Khách sạn Bắc Giang - Nguyễn Văn Cừ - TP.BG</li>
	<li><strong>Số điện thoại:</strong>0975.236.632</li>
	<li><strong>Yahoo:</strong>dienthoaicuvn</li>
	<li><strong>Facebook:</strong><a href="mailto:iphonebacgiang.com@gmail.com">iphonebacgiang.com@gmail.com</a></li>
<li><strong>IMessage/Zalo/Viber:</strong>0975.236.632</li>

</ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '08e46684-0592-474f-91a6-23ab0eb0af3f';
    $display->content['new-08e46684-0592-474f-91a6-23ab0eb0af3f'] = $pane;
    $display->panels['middle'][0] = 'new-08e46684-0592-474f-91a6-23ab0eb0af3f';
    $pane = new stdClass();
    $pane->pid = 'new-bb2e7628-9d3f-4ce0-bae8-f23d5c621605';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-146';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb2e7628-9d3f-4ce0-bae8-f23d5c621605';
    $display->content['new-bb2e7628-9d3f-4ce0-bae8-f23d5c621605'] = $pane;
    $display->panels['middle'][1] = 'new-bb2e7628-9d3f-4ce0-bae8-f23d5c621605';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb2e7628-9d3f-4ce0-bae8-f23d5c621605';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Iphonebacgiang';
  $display->uuid = '74f4b26a-4fe6-4abd-a753-2f1e880758e9';
  $display->subtitle = 'Nơi tìm kiếm cho bạn một chiếc smart phone hoàn hảo';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3f8bead-cec5-462a-82a6-43646aa242ee';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page title',
      'title' => '',
      'body' => '<h2 class="page-title">Iphonebacgiang</h2>

<p>Nơi tìm kiếm cho bạn một chiếc smartphone như ý</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3f8bead-cec5-462a-82a6-43646aa242ee';
    $display->content['new-c3f8bead-cec5-462a-82a6-43646aa242ee'] = $pane;
    $display->panels['middle'][0] = 'new-c3f8bead-cec5-462a-82a6-43646aa242ee';
    $pane = new stdClass();
    $pane->pid = 'new-d6ad81f3-8a94-4e81-8b55-ee07d87db0e0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd6ad81f3-8a94-4e81-8b55-ee07d87db0e0';
    $display->content['new-d6ad81f3-8a94-4e81-8b55-ee07d87db0e0'] = $pane;
    $display->panels['middle'][1] = 'new-d6ad81f3-8a94-4e81-8b55-ee07d87db0e0';
    $pane = new stdClass();
    $pane->pid = 'new-ec56a1c2-558f-453c-b32f-903921b63f14';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '542',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ec56a1c2-558f-453c-b32f-903921b63f14';
    $display->content['new-ec56a1c2-558f-453c-b32f-903921b63f14'] = $pane;
    $display->panels['middle'][2] = 'new-ec56a1c2-558f-453c-b32f-903921b63f14';
    $pane = new stdClass();
    $pane->pid = 'new-df088602-f0af-4952-973c-bac4feefc7a6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container pane-hot-products',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'df088602-f0af-4952-973c-bac4feefc7a6';
    $display->content['new-df088602-f0af-4952-973c-bac4feefc7a6'] = $pane;
    $display->panels['middle'][3] = 'new-df088602-f0af-4952-973c-bac4feefc7a6';
    $pane = new stdClass();
    $pane->pid = 'new-3789a282-3fbc-42da-b2d4-2cae83d2ec04';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'nodequeue_1-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container pane-best-sale',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3789a282-3fbc-42da-b2d4-2cae83d2ec04';
    $display->content['new-3789a282-3fbc-42da-b2d4-2cae83d2ec04'] = $pane;
    $display->panels['middle'][4] = 'new-3789a282-3fbc-42da-b2d4-2cae83d2ec04';
    $pane = new stdClass();
    $pane->pid = 'new-ed47c7fc-ed6d-447e-b049-48c7176e586a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Thương hiệu nổi tiếng',
      'body' => '<div class="row no-gutter">
<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/1-apple.jpg" /></div>

<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/2-samsung.jpg" /></div>

<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/3-lg.jpg" /></div>

<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/4-sony.jpg" /></div>

<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/5-htc.jpg" /></div>

<div class="col-md-2 col-sm-4 col-xs-6"><img src="/sites/default/files/brands/6_xiaomi.jpg" /></div>
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container pane-brands',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ed47c7fc-ed6d-447e-b049-48c7176e586a';
    $display->content['new-ed47c7fc-ed6d-447e-b049-48c7176e586a'] = $pane;
    $display->panels['middle'][5] = 'new-ed47c7fc-ed6d-447e-b049-48c7176e586a';
    $pane = new stdClass();
    $pane->pid = 'new-586adb09-d0cd-4d6c-a6ec-8232b11a216d';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '543',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '586adb09-d0cd-4d6c-a6ec-8232b11a216d';
    $display->content['new-586adb09-d0cd-4d6c-a6ec-8232b11a216d'] = $pane;
    $display->panels['middle'][6] = 'new-586adb09-d0cd-4d6c-a6ec-8232b11a216d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d6ad81f3-8a94-4e81-8b55-ee07d87db0e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'tin-cong-nghe';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = ' Tin công nghệ';
  $display->uuid = 'de2b3e8e-d247-4eb8-96cc-77ab880278c3';
  $display->subtitle = 'Find news by your way';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-638c37c3-fb78-4229-a5dd-fe87bcdff440';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'page_title_news_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '638c37c3-fb78-4229-a5dd-fe87bcdff440';
    $display->content['new-638c37c3-fb78-4229-a5dd-fe87bcdff440'] = $pane;
    $display->panels['middle'][0] = 'new-638c37c3-fb78-4229-a5dd-fe87bcdff440';
    $pane = new stdClass();
    $pane->pid = 'new-661841b6-b9da-4751-8b0e-8292c404d528';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '661841b6-b9da-4751-8b0e-8292c404d528';
    $display->content['new-661841b6-b9da-4751-8b0e-8292c404d528'] = $pane;
    $display->panels['middle'][1] = 'new-661841b6-b9da-4751-8b0e-8292c404d528';
    $pane = new stdClass();
    $pane->pid = 'new-11457125-624b-4d4e-869f-e71e2576185d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container pane-blog-list',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11457125-624b-4d4e-869f-e71e2576185d';
    $display->content['new-11457125-624b-4d4e-869f-e71e2576185d'] = $pane;
    $display->panels['middle'][2] = 'new-11457125-624b-4d4e-869f-e71e2576185d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products';
  $page->task = 'page';
  $page->admin_title = 'Products';
  $page->admin_description = '';
  $page->path = 'san-pham';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products__panel';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sản phẩm';
  $display->uuid = 'ea05c0b8-2d68-471e-a1fc-469231cf39ff';
  $display->subtitle = 'Hãy tìm kiếm chiếc smartphone, ipad cho bạn';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $display->content['new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715'] = $pane;
    $display->panels['middle'][0] = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane = new stdClass();
    $pane->pid = 'new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'product_facets_filter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet-filter container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $display->content['new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356'] = $pane;
    $display->panels['middle'][1] = 'new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $pane = new stdClass();
    $pane->pid = 'new-725750e4-d186-41c5-a287-7d84a9e439bc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_product_search_api-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-list container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '725750e4-d186-41c5-a287-7d84a9e439bc';
    $display->content['new-725750e4-d186-41c5-a287-7d84a9e439bc'] = $pane;
    $display->panels['middle'][2] = 'new-725750e4-d186-41c5-a287-7d84a9e439bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products_by_series';
  $page->task = 'page';
  $page->admin_title = 'Products by series';
  $page->admin_description = '';
  $page->path = 'san-pham/dien-thoai/%tid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_by_series__panel_context_0239a285-988f-4743-a589-214bf9bf1584';
  $handler->task = 'page';
  $handler->subtask = 'products_by_series';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Điện thoại %tid:html_safe';
  $display->uuid = 'ea05c0b8-2d68-471e-a1fc-469231cf39ff';
  $display->subtitle = 'Hãy tìm kiếm chiếc smartphone ưng ý cho bạn';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $display->content['new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715'] = $pane;
    $display->panels['middle'][0] = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane = new stdClass();
    $pane->pid = 'new-43255674-003e-4ae5-8484-0f0497118804';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ipad',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'name' => 'ipad_slide',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43255674-003e-4ae5-8484-0f0497118804';
    $display->content['new-43255674-003e-4ae5-8484-0f0497118804'] = $pane;
    $display->panels['middle'][1] = 'new-43255674-003e-4ae5-8484-0f0497118804';
    $pane = new stdClass();
    $pane->pid = 'new-81e46c81-5f5b-442b-950f-01eb2ae5ec10';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'iphone',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'name' => 'iphone_slideshow',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '81e46c81-5f5b-442b-950f-01eb2ae5ec10';
    $display->content['new-81e46c81-5f5b-442b-950f-01eb2ae5ec10'] = $pane;
    $display->panels['middle'][2] = 'new-81e46c81-5f5b-442b-950f-01eb2ae5ec10';
    $pane = new stdClass();
    $pane->pid = 'new-7fec972d-8e5e-4bb4-b012-ed0568c77315';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'samsung',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'name' => 'samsung_slide',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7fec972d-8e5e-4bb4-b012-ed0568c77315';
    $display->content['new-7fec972d-8e5e-4bb4-b012-ed0568c77315'] = $pane;
    $display->panels['middle'][3] = 'new-7fec972d-8e5e-4bb4-b012-ed0568c77315';
    $pane = new stdClass();
    $pane->pid = 'new-3a7c7b79-492d-4e22-b2f7-0a90ef909e55';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'sony',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'name' => 'sony_slideshow',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3a7c7b79-492d-4e22-b2f7-0a90ef909e55';
    $display->content['new-3a7c7b79-492d-4e22-b2f7-0a90ef909e55'] = $pane;
    $display->panels['middle'][4] = 'new-3a7c7b79-492d-4e22-b2f7-0a90ef909e55';
    $pane = new stdClass();
    $pane->pid = 'new-380474bc-6bac-4041-9db2-1f11c4a98569';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'products-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'term_node_tid_depth' => '%tid:raw',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container product-list',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '380474bc-6bac-4041-9db2-1f11c4a98569';
    $display->content['new-380474bc-6bac-4041-9db2-1f11c4a98569'] = $pane;
    $display->panels['middle'][5] = 'new-380474bc-6bac-4041-9db2-1f11c4a98569';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-380474bc-6bac-4041-9db2-1f11c4a98569';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products_by_series'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products_phone';
  $page->task = 'page';
  $page->admin_title = 'Products Phone';
  $page->admin_description = '';
  $page->path = 'san-pham/dien-thoai';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_phone__panel_context_019dcf59-7ee2-4909-a246-7f3f9321915c';
  $handler->task = 'page';
  $handler->subtask = 'products_phone';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full hide-page-title',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Điện thoại';
  $display->uuid = 'ea05c0b8-2d68-471e-a1fc-469231cf39ff';
  $display->subtitle = 'Hãy tìm kiếm chiếc smartphone cho bạn';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => 'page-title',
      'id' => '',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $display->content['new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715'] = $pane;
    $display->panels['middle'][0] = 'new-8cd3a0a6-cd35-44e1-8b1f-5002dc0a9715';
    $pane = new stdClass();
    $pane->pid = 'new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'product_facets_filter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet-filter container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $display->content['new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356'] = $pane;
    $display->panels['middle'][1] = 'new-fe5351fb-c7ec-429b-bf1c-4ae02ea00356';
    $pane = new stdClass();
    $pane->pid = 'new-725750e4-d186-41c5-a287-7d84a9e439bc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'node_product_search_api-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-list container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '725750e4-d186-41c5-a287-7d84a9e439bc';
    $display->content['new-725750e4-d186-41c5-a287-7d84a9e439bc'] = $pane;
    $display->panels['middle'][2] = 'new-725750e4-d186-41c5-a287-7d84a9e439bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products_phone'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'dich-vu';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_services__panel';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'spectre';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_content' => NULL,
      'middle_content' => NULL,
      'sidebar_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Dịch vụ';
  $display->uuid = '62181866-cab9-4a28-b448-6af19cc9aae8';
  $display->subtitle = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0860d100-8da5-4c5e-bebe-9878a558956a';
    $pane->panel = 'top_content';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0860d100-8da5-4c5e-bebe-9878a558956a';
    $display->content['new-0860d100-8da5-4c5e-bebe-9878a558956a'] = $pane;
    $display->panels['top_content'][0] = 'new-0860d100-8da5-4c5e-bebe-9878a558956a';
    $pane = new stdClass();
    $pane->pid = 'new-722b3bd6-aa02-4d0b-8c88-4a0a2eeb7168';
    $pane->panel = 'top_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'services-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '722b3bd6-aa02-4d0b-8c88-4a0a2eeb7168';
    $display->content['new-722b3bd6-aa02-4d0b-8c88-4a0a2eeb7168'] = $pane;
    $display->panels['top_content'][1] = 'new-722b3bd6-aa02-4d0b-8c88-4a0a2eeb7168';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services'] = $page;

  return $pages;

}
