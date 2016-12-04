<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="box-banner"<?php print $content_attributes; ?>>
    <div class="box-banner--info">
      <?php
      if (isset($content['field_title_box'])) {
        print render($content['field_title_box']);
      }
      if (isset($content['field_body_box'])) {
        print render($content['field_body_box']);
      }
      if (isset($content['field_link_box'])) {
        print render($content['field_link_box']);
      }
      ?>
    </div>
    <div class="box-banner--media">
      <?php
      if (isset($content['field_image'])) {
        print render($content['field_image']);
      }
      ?>
    </div>
  </div>
</div>
