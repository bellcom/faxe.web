<?php
$title = (strlen($title) > 45) ? substr($title, 0, 45) . '...' : $title;
?>

<div class="search-results__list__item">
  <a href="<?php print url($url['path']); ?>" class="element-wrapper-link">
    <div class="entity-list-advanced entity-list-advanced--search-result">

      <div class="entity-list-advanced__body">

        <div class="entity-list-advanced__heading">
          <h3 class="entity-list-advanced__heading__title heading-h4"><?php print check_plain($title); ?></h3>
        </div>

        <?php if ($snippet OR $info) : ?>
          <div class="entity-list-advanced__search-snippet">

            <?php if ($snippet) : ?>
              <p><?php print $snippet; ?></p>
            <?php endif; ?>

            <?php if ($info) : ?>
              <p><?php print $info; ?></p>
            <?php endif; ?>

          </div>
        <?php endif; ?>

        <span class="entity-list-advanced__path">
          <?php print t('Located at: !path', array('!path' => drupal_get_path_alias($url['path']))); ?>
        </span>

      </div>

    </div>

  </a>
</div>
