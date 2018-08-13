<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
    hide($content['field_os2web_meetings_bul_closed']);
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - meetings full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> accordion entity-field-collection-item"<?php print $attributes; ?>>

    <div class="accordion__heading">
      <?php print render($title_prefix); ?>
      <div<?php print $title_attributes; ?> >
        <?php print $title; ?>
        
        
        
       <?php if ($node->field_os2web_meetings_bul_closed['und'][0]['value'] == '1') : 
        print t('(Lukket)'); 
        endif;
        ?>
        
      </div>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="accordion__body">
        <?php print render($content); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - meetings full node -->

<?php endif; ?>
