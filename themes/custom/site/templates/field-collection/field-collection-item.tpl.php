<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

    <?php if (isset($content['field_bc_hero_slide_header'])): ?>
      <!-- Begin - heading -->
      <div class="node__slides__heading">
        <a href="<?php print $content['raw_url']; ?>">
          <?php print render($content['field_bc_hero_slide_header']); ?>
        </a>
      </div>
      <!-- End - heading -->
    <?php endif; ?>

    <?php if (isset($content['field_bc_hero_slide_text'])): ?>
      <!-- Begin - text -->
      <div class="node__slides__text">
        <?php print render($content['field_bc_hero_slide_text']); ?>
      </div>
      <!-- End - text -->
    <?php endif; ?>

  </div>
</div>
