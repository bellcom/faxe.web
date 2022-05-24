<?php

/**
 * @file
 * Default theme implementation for displaying a search page.
 *
 * This template renders a page containing a search form and, possibly, search
 * results.
 *
 * Available variables:
 * - $results: The renderable search results.
 * - $form: The search form.
 *
 * @see template_preprocess_search_api_page()
 */

?>

<div class="search-results">

  <h1 class="sr-only"><?php print t('Search'); ?></h1>

  <!-- Begin - form -->
  <div class="search-results__form">
    <div class="boxy">
      <div class="boxy__body">

        <div class="form-inline">
          <?php print render($form); ?>
        </div>

      </div>
    </div>
  </div>
  <!-- End - form -->

  <!-- Begin - filtering -->
  <div class="search-filter-section">
  <p>
    Klik og tilpas søgningen præcis efter dit behov. Tryk på "Fuld søgning" for at komme tilbage.
  </p>

  <?php
  $q = $_GET['q'];
  $qParts = explode('/', $q);
  $searchPage = $qParts[0];
  $searchTerm = $qParts[1];
  ?>
  <div class="row">
    <div class="col-12 col-sm-4">
    <a href="/sog/<?php print $searchTerm?>" class="btn <?php if ($searchPage == 'sog') print 'active' ?>">
      Fuld søgning
    </a>
    </div>
    <div class="col-12 col-sm-4">
    <a href="/sog-dagsorden/<?php print $searchTerm?>" class="btn <?php if ($searchPage == 'sog-dagsorden') print 'active' ?>">
      Dagsordener og referater
    </a>
    </div>
    <div class="col-12 col-sm-4">
    <a href="/sog-selvbetjening/<?php print $searchTerm?>" class="btn <?php if ($searchPage == 'sog-selvbetjening') print 'active' ?>">
      Selvbetjening
    </a>
    </div>
  </div>
  </div>
  <!-- End - filtering -->

  <!-- Begin - list -->
  <div class="search-results__list">
    <?php print render($results); ?>
  </div>
  <!-- End - list -->



</div>
