<?php

$plugin = array(
  'title' => t('Product facets'),
  'single' => TRUE,
  'description' => t('Render anchor link on product display.'),
  'render callback' => 'product_facets_content_type_render',
  'category' => array(t('CTools IPBG'), -9),
);

function product_facets_content_type_render($subtype, $conf, $panel_args, $context) {
  //Filter by series
  $output = '';
  $facet_block_ids = array(
    'u3OfGr00kxmJS9MYO0EOnECNdocmqfLx',
    'Ou4WxYa0Xud64FCZd67L0T0s6vVbizW1',
    '5UaUWdndVZU0QNGPsMGqcHsH4VXzIP3P',
  );
  foreach ($facet_block_ids as $id) {
    $block = block_load('facetapi', $id);
    //dpm($block);
    $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
    //dpm($render_array);
    $output .= drupal_render($render_array);
  }

  $block = new stdClass();
  $block->module = 'ipbg_product';
  $block->content = $output;
  $block->title = t('Filter');
  return $block;
}
