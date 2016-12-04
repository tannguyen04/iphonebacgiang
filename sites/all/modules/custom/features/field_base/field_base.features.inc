<?php
/**
 * @file
 * field_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function field_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function field_base_image_default_styles() {
  $styles = array();

  // Exported image style: app.
  $styles['app'] = array(
    'name' => 'app',
    'label' => 'App',
    'effects' => array(
      8 => array(
        'label' => 'Co giãn và xén',
        'help' => 'Co giãn, giữ nguyên tỉ lệ của ảnh gốc sau đó xén bỏ các chiều về kích thước ảnh được chỉ định. Hiệu ứng này thường được dùng để tạo các ảnh thu nhỏ hình vuông mà không làm mất tỉ lệ ảnh ban đầu.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 652,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_list.
  $styles['blog_list'] = array(
    'name' => 'blog_list',
    'label' => 'Blog list',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 555,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: features_overview.
  $styles['features_overview'] = array(
    'name' => 'features_overview',
    'label' => 'Features overview',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product.
  $styles['product'] = array(
    'name' => 'product',
    'label' => 'Product',
    'effects' => array(
      21 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 430,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_gallery.
  $styles['product_gallery'] = array(
    'name' => 'product_gallery',
    'label' => 'Product gallery',
    'effects' => array(
      20 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 380,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: product_list.
  $styles['product_list'] = array(
    'name' => 'product_list',
    'label' => 'Product list',
    'effects' => array(
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 200,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: service_list.
  $styles['service_list'] = array(
    'name' => 'service_list',
    'label' => 'Service list',
    'effects' => array(
      11 => array(
        'label' => 'Co dãn',
        'help' => 'Co giãn sẽ giữ nguyên tỉ lệ của ảnh gốc. Nếu bạn chỉ nhập chiều rộng hoặc chiều dài, hệ thống sẽ tự động tính chiều còn lại.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 263,
          'height' => 263,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slide.
  $styles['slide'] = array(
    'name' => 'slide',
    'label' => 'Slide',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
