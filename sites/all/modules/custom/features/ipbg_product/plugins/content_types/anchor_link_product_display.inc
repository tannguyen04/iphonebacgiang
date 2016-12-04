<?php

$plugin = array(
  'title' => t('Anchor links product display'),
  'single' => TRUE,
  'description' => t('Render anchor link on product display.'),
  'render callback' => 'anchor_link_product_display_content_type_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => array(t('CTools IPBG'), -9),
);

function anchor_link_product_display_content_type_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }
  $anchor_links = array();
  $node = isset($context->data) ? clone($context->data) : NULL;
  if (!empty($node)) {
    $block = new stdClass();
    $block->module = 'ipbg_product';
    $block->content = theme('anchor_link_product_display', array('node' => $node));
    return $block;
  }
}
