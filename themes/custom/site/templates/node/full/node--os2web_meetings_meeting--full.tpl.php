<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
//    hide($content['field_os2web_meetings_bullets'])
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - meetings full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <div class="node__heading">
      <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?>><?php print $title; ?></h1>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="node__body">
        <?php print render($content); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - meetings full node -->

<?php endif; ?>
