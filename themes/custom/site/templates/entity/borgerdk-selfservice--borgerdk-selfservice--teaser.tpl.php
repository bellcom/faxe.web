<?php
$content['title']['#label_display'] = 'hidden';
$content['content']['#label_display'] = 'hidden';
$content['label']['#label_display'] = 'hidden';
$content['url']['#label_display'] = 'hidden';
?>

<div class="accordion accordion--not-toggleable <?php print $classes; ?>"<?php print $attributes; ?>>

  <?php if (isset($content['title'])): ?>
    <!-- Begin - heading -->
    <h2 class="accordion__heading heading-h6">
      <?php print render($content['title']); ?>
    </h2>
    <!-- End - heading -->
  <?php endif; ?>

  <!-- Begin - body -->
  <div class="accordion__body"<?php print $content_attributes; ?>>
    <ul>
      <li>
        <a href="<?php print ($content['url']['#items'][0]['value']); ?>" target="_blank"><?php print ($content['label'][0]['#markup']); ?></a>
      </li>
    </ul>
  </div>
  <!-- End - body -->

</div>