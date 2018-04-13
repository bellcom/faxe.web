<?php
$content['title']['#label_display'] = 'hidden';
$content['content']['#label_display'] = 'hidden';
?>

<div class="accordion <?php print $classes; ?>"<?php print $attributes; ?>>

  <?php if ( isset( $content['title'] ) ): ?>
    <!-- Begin - heading -->
    <h2 class="accordion__heading heading-h6">
      <?php print render( $content['title'] ); ?>
    </h2>
    <!-- End - heading -->
  <?php endif; ?>

  <!-- Begin - body -->
  <div class="accordion__body"<?php print $content_attributes; ?>>
    <?php
    print render($content['content']);
    ?>
  </div>
  <!-- End - body -->

</div>
