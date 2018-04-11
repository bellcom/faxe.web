<?php if ($view_mode == 'teaser'): ?>
  <!-- Begin - teaser -->
  <a href="<?php print $node_url; ?>" id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> element-wrapper-link clearfix"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_news_date_start'])): ?>
      <!-- Begin - date -->
      <div class="entity-teaser__date">
        <?php print render($content['field_os2web_news_date_start']); ?>
      </div>
      <!-- End - date -->
    <?php endif; ?>

    <div class="entity-teaser__heading">
      <h2 class="entity-teaser__heading__title heading-h4">
        <?php print $title; ?>
      </h2>
    </div>

    <div class="entity-teaser__body">

      <?php if ( isset( $content['field_os2web_base_field_summary'] ) ): ?>
        <!-- Begin - description -->
        <div class="entity-teaser__description">
          <?php print render( $content['field_os2web_base_field_summary'] ); ?>
        </div>
        <!-- End - description -->
      <?php endif; ?>

    </div>

  </a>
  <!-- End - teaser -->
<?php endif; ?>
