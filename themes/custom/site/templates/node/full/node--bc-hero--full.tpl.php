<nav role="navigation" aria-label="Forsidebanner" id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>

  <?php
  // Hide comments, tags, and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  print render($content);
  ?>
</nav>
