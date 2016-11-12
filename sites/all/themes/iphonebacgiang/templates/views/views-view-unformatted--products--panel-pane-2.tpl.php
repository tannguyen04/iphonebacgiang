<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
$i = 1;
$items_count = count($rows);
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    if ($i == 1) {
      print '<div class="row no-gutter">';
    }
  ?>
  <div<?php if ($classes_array[$id]) { print ' class="col-xs-12 col-sm-4 ' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
  <?php
    if ($i % 3 == 0) {
      print '</div><div class="row no-gutter">';
    }elseif ($i == $items_count) {
      print '</div>';
    }
    $i++;
  ?>
<?php endforeach; ?>