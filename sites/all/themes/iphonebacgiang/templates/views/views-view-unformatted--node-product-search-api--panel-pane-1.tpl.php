<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php
  $count_row = count($rows);
?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    $current_page = $view->query->pager->current_page;
    if ($id == 0) {
      $grid = 'col-xs-12 col-sm-6';
    }elseif($id == 1 || $id == 2) {
      $grid = 'col-xs-12 col-sm-3';
    }else {
      $grid = 'col-xs-12 col-sm-3';
    }
  ?>



  <?php if($current_page): ?>
    <?php
      $grid = 'col-xs-12 col-sm-3';
      if ($id == 0) {
        print '<div class="row">';
      }elseif ($id%4 == 0) {
        print '</div><div class="row">';
      }
    ?>
    <div class="<?php print $grid; ?>">
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    </div>
    <?php
      if ($id == $count_row) {
        print '</div>';
      }
    ?>
  <?php else: ?>
    <?php
      if ($id == 0) {
        $grid = 'col-xs-12 col-sm-6';
      }elseif($id == 1 || $id == 2) {
        $grid = 'col-xs-12 col-sm-3';
      }else {
        $grid = 'col-xs-12 col-sm-3';
      }
      if ($id == 0) {
        print '<div class="row">';
      }elseif ($id == 3 || ($id+1)%4 == 0) {
        print '</div><div class="row">';
      }
    ?>
    <div class="<?php print $grid; ?>">
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    </div>
    <?php
      if ($id == $count_row) {
        print '</div>';
      }
    ?>
  <?php endif; ?>
<?php endforeach; ?>
