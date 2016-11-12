<?php
/**
 * @file
 * ipgb_pages.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ipgb_pages_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'page_title_news_page';
  $content->admin_title = 'Page title';
  $content->admin_description = '';
  $content->category = 'Custom Page Title';
  $content->settings = array(
    'admin_title' => 'Page title',
    'title' => '',
    'body' => '<h1 class="page-title">Tin tức</h1>

<p>Tin tức công nghệ mới nhất về smartphone</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['page_title_news_page'] = $content;

  return $export;
}
