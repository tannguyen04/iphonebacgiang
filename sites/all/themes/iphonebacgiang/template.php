<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

function iphonebacgiang_preprocess_field(&$vars) {
  $element = $vars['element'];
  if ($element['#field_name'] == 'field_images') {
    //dpm($vars);
  }
}

/**
 * Field Collection-specific implementation of template_preprocess_entity().
 */
function iphonebacgiang_preprocess_node(&$vars) {
  $node = $vars['elements']['#node'];
  $wrapper = entity_metadata_wrapper('node', $node);
  if (isset($node->field_rating)) {
    $rating = field_get_items('node', $node, 'field_rating');
    if (!empty($rating)) {
      $vars['rating_count'] = format_plural($rating[0]['count'], '1 Review', '@count Reviews');;
    }
  }
 if (isset($node->field_os)) {
   $vars['content']['os'] = array();
   foreach ($wrapper->field_os->getIterator() as $delta => $term_wrapper) {
     $label = $term_wrapper->name->value();
     $items[] = array(
       'class' => array('icon-'.preg_replace('@[^a-z0-9-]+@','-', strtolower($label))),
       'data' => theme_image(array(
          'path' => drupal_get_path('theme', 'iphonebacgiang'). '/images/icon-'. preg_replace('@[^a-z0-9-]+@','-', strtolower($label)).'.png',
          'attributes' => array(
            'class' => array('img-responsive')
          ),
         )
       ),
     );
   }
   if (!empty($items)) {
     $vars['content']['os'] = array(
       '#theme' => 'item_list',
       '#items' => $items,
       '#attributes' => array(
         'class' => array('os-icons')
       ),
     );
   }
 }

 if (isset($node->field_products_ref)) {
   $color_product = array();
   $color_array = array();
   foreach ($wrapper->field_products_ref->value() as $key => $product) {
     $wrapper = entity_metadata_wrapper('commerce_product', $product->product_id);
     $color = $wrapper->field_color_ref->value();
     if (!empty($color) && !in_array($color->tid, $color_array)) {
       $color_product[] = render(taxonomy_term_view($color, 'add_to_cart_form'));
     }
     $color_array[] = $color->tid;
   }
   if (!empty($color_product)) {
     $vars['content']['color_product'] = array(
       '#theme' => 'item_list',
       '#items' => $color_product,
       '#attributes' => array(
         'class' => array('product-colors', 'clearfix')
       ),
     );
   }
 }
  if ($node->type == 'mobile') {
    //gallery image
    $wrapper = entity_metadata_wrapper('node', $node);
    $items = $wrapper->field_images->value();
    foreach ($items as $key => $item) {
      $image = array(
        'path' => $item['uri'],
        'width' => isset($item['width']) ? $item['width'] : '',
        'height' => isset($item['height']) ? $item['height'] : '',
        'alt' => $item['alt'],
        'title' => $item['title'],
        'style_name' => 'product_gallery',
      );
      $items_group[]['row'] = theme('image_style', $image);
    }
    if (!empty($items_group)) {
      $settings_group = array(
        'instance' => 'owlcarousel_settings_gallery-product',
        'id' => 'owlcarousel-mobile',
      );
      $vars['content']['mobile_gallery'] = array(
        '#theme' => 'owlcarousel',
        '#items' => $items_group,
        '#settings' => $settings_group,
        '#prefix' => '<div class="wrap-owlcarousel modal fade" role="dialog"><div class="modal-dialog"><div class="modal-content"><div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">&times;</button>
          
        </div><div class="modal-body">',
        '#suffix' => '</div>
        <div class="modal-footer">
          <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        </div>
      </div>
    </div></div>',
      );
    }
  }

}
/*
 * Implements theme_menu_tree()
 */
function iphonebacgiang_menu_tree(&$variables) {
  return '<ul class="menu nav">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_menu_link().
 */
function iphonebacgiang_menu_link(&$variables) {
  $mega_menu_mlids = array();
  $ipbg_mega_menu = variable_get('ipbg_mega_menu', array());
  foreach ($ipbg_mega_menu as $menu_name => $mlids) {
    foreach ($mlids as $mlid => $nid) {
      if (!empty($nid)) {
        $mega_menu_mlids[] = $mlid;
      }
    }
  }
  $element = $variables['element'];
  $sub_menu = '';

  $mlid = $element['#original_link']['mlid'];
  $menu_name = $element['#original_link']['menu_name'];
  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ($element['#original_link']['menu_name'] == 'main-menu'
      && in_array($element['#original_link']['mlid'], $mega_menu_mlids)
      && isset($ipbg_mega_menu[$menu_name][$mlid])
      && !empty($ipbg_mega_menu[$menu_name][$mlid])) {
      $node = node_load($ipbg_mega_menu[$menu_name][$mlid]);
      if (!empty($node)) {
        $node_render = node_view($node);
        $sub_menu = '<div class="dropdown-menu mega-menu">' . drupal_render($node_render) . '</div>';
        $element['#title'] .= ' <span class="caret"></span>';
        $element['#attributes']['class'][] = 'dropdown-mega-menu';
        $element['#localized_options']['html'] = TRUE;
      }
    }else {
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;
    }
  }
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Override theme_item_list().
 */
function iphonebacgiang_item_list($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $list_attributes = $variables['attributes'];
  $i = 0;
  // Drupal core only supports #title as a string. This implementation supports
  // heading level, and attributes as well.
  $heading = '';
  if (!empty($title)) {
    // If it's a string, normalize into an array.
    if (is_string($title)) {
      $title = array(
        'text' => $title,
      );
    }
    // Set defaults.
    $title += array(
      'level' => 'h3',
      'attributes' => array(),
    );
    // Heading outputs only when it has text.
    if (!empty($title['text'])) {
      $heading .= '<' . $title['level'] . drupal_attributes($title['attributes']) . '>';
      $heading .= empty($title['html']) ? check_plain($title['text']) : $title['text'];
      $heading .= '</' . $title['level'] . '>';
    }
  }

  $output = '';
  if ($items) {
    $num_items = count($items);
    $output .= '<' . $type . drupal_attributes($list_attributes) . '>';
    foreach ($items as $key => $item) {
      $attributes = array();
      $i++;
      if (is_array($item)) {
        $value = '';
        if (isset($item['data'])) {
          // Allow data to be renderable.
          if (is_array($item['data']) && (!empty($item['data']['#type']) || !empty($item['data']['#theme']))) {
            $value .= drupal_render($item['data']);
          }
          else {
            $value .= $item['data'];
          }
        }
        $attributes = array_diff_key($item, array('data' => 0, 'children' => 0));

        // Append nested child list, if any.
        if (isset($item['children'])) {
          // HTML attributes for the outer list are defined in the 'attributes'
          // theme variable, but not inherited by children. For nested lists,
          // all non-numeric keys in 'children' are used as list attributes.
          $child_list_attributes = array();
          foreach ($item['children'] as $child_key => $child_item) {
            if (is_string($child_key)) {
              $child_list_attributes[$child_key] = $child_item;
              unset($item['children'][$child_key]);
            }
          }
          $value .= theme('item_list', array(
            'items' => $item['children'],
            'type' => $type,
            'attributes' => $child_list_attributes,
          ));
        }
      }
      else {
        $value = $item;
      }
      if ($i == 1) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items) {
        $attributes['class'][] = 'last';
      }

      $output .= '<li' . drupal_attributes($attributes) . '>' . $value . "</li>\n";
    }
    $output .= "</$type>";
  }

  // Output the list and title only if there are any list items.
  if (!empty($output)) {
    $output = $heading . $output;
  }

  return $output;
}

/**
 * Override theme_breadcrumb()
 */

function iphonebacgiang_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    foreach ($breadcrumb as $key => $value) {
      if (isset($value['data'])) {
        $breadcrumb[$key]['data'] = l($value['data'], '#', array('external' => TRUE));
      }
    }
    if (isset($breadcrumb[1])) {
      if (!is_array($breadcrumb[1])) {
        $breadcrumb[1] = array(
          'data' => $breadcrumb[1],
        );
      }
      $breadcrumb[1]['class'][] = 'has-shadow';
    }
    $output = theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => $breadcrumb,
      'type' => 'ol',
    ));
  }

  return $output;
}

/**
 * Implements hook_preprocess_HOOK().
 */
function iphonebacgiang_preprocess_image(&$variables) {
  $variables['attributes']['class'][] = 'img-responsive';
}
