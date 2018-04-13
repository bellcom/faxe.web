<?php $entity = $variables['borgerdk_article']; ?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
    $node = menu_get_object();

    if (trim(strip_tags($node->field_borger_dk_header['und'][0]['value']))) {
      print $node->field_borger_dk_header['und'][0]['value'];
    } else {
      $content['header']['#label_display'] = 'hidden';
      print render($content['header']);
    }

    $content['microarticles']['#label_display'] = 'hidden';
    print render($content['microarticles']);

    ?>

  </div>
</div>