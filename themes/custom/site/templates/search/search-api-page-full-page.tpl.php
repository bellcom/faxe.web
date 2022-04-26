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
  <h2>
    Præciser søgningen efter netop dit behov
  </h2>
  <p>
    Klik og tilpas søgnigen præcis efter dit formål med søgningen. Ønsker du at gå tilbage til den
    fulde søgning, så kan du blot trykke på dem igen, og indholdet går tilbage til det originale.
  </p>

  <?php
  $q = $_GET['q'];
  $qParts = explode('/', $q);
  $searchPage = $qParts[0];
  $searchTerm = $qParts[1];
  ?>
  <a href="/sog/<?php print $searchTerm?>" class="<?php if ($searchPage == 'sog') print 'active' ?>">
    Fuld søgning
  </a>
  <a href="/sog-dagsorden/<?php print $searchTerm?>" class="<?php if ($searchPage == 'sog-dagsorden') print 'active' ?>">
    Dagsordener og referater
  </a>
  <a href="/sog-selvbetjening/<?php print $searchTerm?>" class="<?php if ($searchPage == 'sog-selvbetjening') print 'active' ?>">
    Selvbetjening
  </a>
  <!-- End - filtering -->

  <!-- Begin - list -->
  <div class="search-results__list">
    <?php print render($results); ?>
  </div>
  <!-- End - list -->



</div>
