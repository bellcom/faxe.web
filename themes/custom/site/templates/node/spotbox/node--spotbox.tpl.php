<?php if ($view_mode == 'spotbox'): ?>
  <!-- Begin - spotbox -->
  <a href="<?php print $node_url; ?>" id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> element-wrapper-link clearfix"<?php print $attributes; ?>>

    <div class="entity-spotbox__heading">
      <h2 class="entity-spotbox__heading__title heading-h3">
        <?php print $title; ?>
      </h2>
    </div>

    <div class="entity-spotbox__body">
      <?php print render($content); ?>
    </div>

  </a>
  <!-- End - spotbox -->
<?php endif; ?>
