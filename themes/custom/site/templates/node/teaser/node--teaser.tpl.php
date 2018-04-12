<?php if ($view_mode == 'teaser'): ?>
  <!-- Begin - teaser -->
  <a href="<?php print $node_url; ?>" id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> element-wrapper-link clearfix"<?php print $attributes; ?>>

    <div class="entity-teaser__heading">
      <h2 class="entity-teaser__heading__title heading-h3">
        <?php print $title; ?>
      </h2>
    </div>

    <div class="entity-teaser__body">
      <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      
      print render($content);
      ?>
    </div>

  </a>
  <!-- End - teaser -->
<?php endif; ?>
