<?php
$image_style = $content['field_bc_hero_image'][0]['#image_style'];
$image_url   = FALSE;

if (isset($node->field_bc_hero_image['und']['0']['uri']) && $uri = $node->field_bc_hero_image['und']['0']['uri']) {
  $image_url = file_create_url(image_style_url($image_style, $uri));
}
?>

<article id="node-<?php print $node->nid; ?>"
         class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (!empty($title)): ?>
    <!-- Begin - pre-heading -->
    <div class="node__preheading">
      <h3 class="node__preheading__title"><?php print $title; ?></h3>
    </div>
    <!-- End - pre-heading -->
  <?php endif; ?>

  <div class="node__inner" style="background-image: url('<?php print $image_url; ?>');">
    <div class="row row--equal-height-columns">
      <div class="col-xs-12 col-sm-7 col-md-8">

        <?php if (isset($content['field_bc_hero_slides'])): ?>
          <!-- Begin - slides -->
          <div class="node__slides" style="background-image: url('<?php print $image_url; ?>');">
            <?php print render($content['field_bc_hero_slides']); ?>
          </div>
          <!-- End - slides -->
        <?php endif; ?>

      </div>
      <div class="col-xs-12 col-sm-5 col-md-4">

        <?php if (isset($content['field_bc_hero_links'])): ?>
          <!-- Begin - links -->
          <div class="node__links">
            <?php print render($content['field_bc_hero_links']); ?>
          </div>
          <!-- End - links -->
        <?php endif; ?>

      </div>
    </div>
  </div>

</article>
