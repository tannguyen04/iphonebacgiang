<?php
/**
 * @file
 * Returns the HTML for a node.
 */
?>
<div class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
    if ($title_prefix || $title_suffix) {
       print render($title_prefix);
       print render($title_suffix);
    }
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content['field_collumns_navigation']);
  ?>
</div>
