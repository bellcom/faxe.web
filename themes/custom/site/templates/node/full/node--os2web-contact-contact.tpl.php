<div id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (isset($content['field_os2web_contact_field_dept'])): ?>
    <!-- Begin - heading -->
    <div>
      <?php print render($content['field_os2web_contact_field_dept']); ?>
    </div>
    <!-- End - heading -->
  <?php endif; ?>

  <?php if (isset($content['field_os2web_contact_field_info'])): ?>
    <!-- Begin - body -->
    <div>
      <?php print render($content['field_os2web_contact_field_info']); ?>
    </div>
    <!-- End - body -->
  <?php endif; ?>

</div>
