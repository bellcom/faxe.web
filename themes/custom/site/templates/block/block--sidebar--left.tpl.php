<div id="<?php print $block_html_id; ?>" class="boxy boxy--facets <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
  <div class="boxy__heading">
    <h2 class="boxy__heading__title"<?php print $title_attributes; ?>><?php print $title; ?></h2>
  </div>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <div class="boxy__body">
    <?php print $content ?>
  </div>

</div>
