<!-- Begin - wrapper -->
<div class="layout__wrapper" id='font-resize-wrapper'>

  <!-- Begin - sidr source provider -->
  <div class="sidr-source-provider">

    <!-- Begin - navigation -->
    <div class="slinky-menu" aria-label="<?=t('Mobil navigation'); ?>">
      <?php print render($menu_slinky__main_menu); ?>
    </div>
    <!-- End - navigation -->

  </div>
  <!-- End - sidr source provider -->

  <!-- Begin - header static -->
  <div class="flexy-header flexy-header--static">
    <div class="flexy-header__row flexy-header__row--first">
      <div class="container">
        <div class="flexy-row">

          <!-- Begin - logo -->
          <a href="<?php print $front_page; ?>" class="flexy-header__logo">
            <img src="<?php print $logo; ?>"
                 alt="<?php print t('@site_name logo', array('@site_name' => $site_name)); ?>"/>
          </a>
          <!-- End - logo -->

          <div class="flexy-spacer"></div>

          <!-- Begin - navigation -->
          <div class="flexy-header__secondary-navigation hidden-xs hidden-sm" aria-label="<?=t('Statisk desktop navigation'); ?>">
            <?php print render($flexy_list__secondary); ?>
            <button class="js-decrease-font-size">A-</button>
            <button class="js-increase-font-size">A+</button>
          </div>
          <!-- End - navigation -->

          <button class="visible-sm js-decrease-font-size">A-</button>
          <button class="visible-sm js-increase-font-size">A+</button>

          <!-- Begin - link -->
          <a href="/sog"
            class="flexy-header__link visible-xs visible-sm">
            <span class="icon fa fa-search"></span>
          </a>
          <!-- End - link -->

          <!-- Begin - responsive toggle -->
          <button
            class="flexy-header__sidebar-toggle sidr-toggle--right visible-xs visible-sm">
            <span class="icon fa fa-bars"></span>
          </button>
          <!-- End - responsive toggle -->

        </div>
      </div>
    </div>
    <div class="flexy-header__row flexy-header__row--second hidden-xs hidden-sm" style="background-image: url(<?php print $header_background_image;?>)">
      <div class="container">

        <!-- Begin - search -->
        <div class="flexy-header__form hidden-xs hidden-sm">
          <div class="form-inline">
            <?php if (!empty($page['search'])): ?>
              <?php  print render($page['search']); ?>
            <?php elseif (isset($search_box)) : ?>
              <?php  print $search_box; ?>
            <?php endif; ?>
          </div>
        </div>
        <!-- End - search -->

      </div>
    </div>
    <div class="flexy-header__row flexy-header__row--third hidden-xs hidden-sm">
      <div class="container">
        <div class="flexy-row">

          <div class="flexy-spacer"></div>

          <!-- Begin - navigation -->
          <div class="flexy-header__navigation__wrapper" aria-label="<?=t('Statisk sektions navigation'); ?>">
            <?php print render($flexy_navigation__primary); ?>
          </div>
          <!-- End - navigation -->

        </div>
      </div>
    </div>
  </div>
  <!-- End - header static -->

  <!-- Begin - header sticky -->
  <div class="flexy-header flexy-header--sticky">
    <div class="flexy-header__row">
      <div class="container">
        <div class="flexy-row">

          <!-- Begin - logo -->
          <a href="<?php print $front_page; ?>" class="flexy-header__logo">
            <img src="<?php print $logo; ?>"
                 alt="<?php print t('@site_name logo', array('@site_name' => $site_name)); ?>"/>
          </a>
          <!-- End - logo -->

          <div class="flexy-spacer"></div>

          <!-- Begin - navigation -->
          <div class="flexy-header__navigation__wrapper hidden-xs hidden-sm" aria-label="<?=t('Fikseret desktop navigation'); ?>">
            <?php print render($flexy_navigation__primary); ?>
          </div>
          <!-- End - navigation -->

          <!-- Begin - link -->
          <a href="/sog"
             class="flexy-header__link visible-xs visible-sm">
            <span class="icon fa fa-search"></span>
          </a>
          <!-- End - link -->

          <!-- Begin - responsive toggle -->
          <button
            class="flexy-header__sidebar-toggle sidr-toggle--right visible-xs visible-sm">
            <span class="icon fa fa-bars"></span>
          </button>
          <!-- End - responsive toggle -->

        </div>
      </div>
    </div>
  </div>
  <!-- End - header sticky -->

  <!-- Begin - content -->
  <main>


  <div class="layout__content" id="content">

    <?php if (!empty($page['banner'])): ?>
      <?php print render($page['banner']); ?>
    <?php endif; ?>

    <div class="container">

      <!-- Begin - breadcrumb -->
      <div class="hidden-xs">
        <?php print $breadcrumb; ?>
      </div>
      <!-- End - breadcrumb -->

      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>

      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <?php if (!empty($messages)): ?>
        <!-- Begin - messages -->
        <?php print $messages; ?>
        <!-- End - messages -->
      <?php endif; ?>

      <?php if (!empty($tabs_primary)): ?>
        <!-- Begin - tabs primary -->
        <?php print render($tabs_primary); ?>
        <!-- End - tabs primary -->
      <?php endif; ?>

      <?php if (!empty($tabs_secondary)): ?>
        <!-- Begin - tabs secondary -->
        <?php print render($tabs_secondary); ?>
        <!-- End - tabs secondary -->
      <?php endif; ?>

    </div>

    <?php if (!panels_get_current_page_display()): ?>
      <div class="sectioned">
        <div class="sectioned__inner">
          <div class="container">

            <?php if (!empty($page['sidebar__left'])): ?>
              <div class="row">
                <div class="hidden-xs col-sm-4">
                  <?php print render($page['sidebar__left']); ?>
                </div>

                <div class="col-sm-8">

                  <div class="boxy">

                    <?php if (!empty($title)): ?>
                      <div class="boxy__heading">
                        <h1 class="boxy__heading__title">
                          <?php print $title; ?>
                        </h1>
                      </div>
                    <?php endif; ?>

                    <div class="boxy__body">
                      <?php print render($page['content']); ?>
                    </div>
                  </div>

                </div>
              </div>
              
            <?php elseif (!empty($page['sidebar__right'])): ?>
              <div class="row">
                <div class="col-sm-8">

                  <div class="boxy">

                    <?php if (!empty($title)): ?>
                      <div class="boxy__heading">
                        <h1 class="boxy__heading__title">
                          <?php print $title; ?>
                        </h1>
                      </div>
                    <?php endif; ?>

                    <div class="boxy__body">
                      <?php print render($page['content']); ?>
                    </div>
                  </div>

                </div>
                <div class="hidden-xs col-sm-4">
                  <?php print render($page['sidebar__right']); ?>
                </div>
              </div>

            <?php else: ?>

              <div class="boxy">

                <?php if (!empty($title)): ?>
                  <div class="boxy__heading">
                    <h1 class="boxy__heading__title">
                      <?php print $title; ?>
                    </h1>
                  </div>
                <?php endif; ?>

                <div class="boxy__body">
                  <?php print render($page['content']); ?>
                </div>
              </div>

            <?php endif; ?>

          </div>
        </div>
      </div>
    <?php else: ?>

      <?php if (!empty($page['sidebar__left'])): ?>
        <div class="row">
          <div class="hidden-xs col-sm-4">
            <?php print render($page['sidebar__left']); ?>
          </div>

          <div class="col-sm-8">
            <?php print render($page['content']); ?>
          </div>
        </div>
      <?php elseif (!empty($page['sidebar__right'])): ?>
        <div class="row">
          <div class="col-sm-8">
            <?php print render($page['content']); ?>
          </div>
          
          <div class="hidden-xs col-sm-4">
            <?php print render($page['sidebar__right']); ?>
          </div>
        </div>
      <?php else: ?>
        <?php print render($page['content']); ?>
      <?php endif; ?>

    <?php endif; ?>

  </div>
  </main>
  <!-- End - content -->

  <!-- Begin - footer -->
  <div class="layout__footer">
    <div class="layout__footer__inner">
      <div class="container">
        <div class="row">
          <div class="col-xs-12 col-sm-4">

            <!-- Begin - contact information -->
            <div class="layout__footer__contact-information">
              <?php print render($page['footer__contact_information']); ?>
            </div>
            <!-- End - contact information -->

          </div>
          <div class="col-xs-12 col-sm-4">

            <!-- Begin - menu -->
            <div class="layout__footer__menu">
              <?php print render($page['footer__menu']); ?>
            </div>
            <!-- End - menu -->

          </div>
          <div class="col-xs-12 col-sm-4">

            <!-- Begin - social icons -->
            <div class="layout__footer__social-icons">

              <div class="partial">
                <div class="partial__heading">
                  <h2 class="partial__heading__title"><?php print t('Sociale ikoner'); ?></h2>
                </div>
                <div class="partial__body">
                  <ul class="list-unstyled">

                    <?php if ($theme_settings['social_links']['facebook']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['facebook']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['facebook']['tooltip']; ?>">
                      <span class="social-icon social-icon--facebook">
                        <span class="icon fa fa-facebook-f"></span>
                      </span>
                          Facebook
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['twitter']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['twitter']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['twitter']['tooltip']; ?>">
                      <span class="social-icon social-icon--twitter">
                        <span class="icon fa fa-twitter"></span>
                      </span>
                          Twitter
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['googleplus']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['googleplus']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['googleplus']['tooltip']; ?>">
                      <span class="social-icon social-icon--google-plus">
                        <span class="icon fa fa-google-plus"></span>
                      </span>
                          Google+
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['linkedin']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['linkedin']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['linkedin']['tooltip']; ?>">
                      <span class="social-icon social-icon--linkedin">
                        <span class="icon fa fa-linkedin"></span>
                      </span>
                          LinkedIn
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['pinterest']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['pinterest']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['pinterest']['tooltip']; ?>">
                      <span class="social-icon social-icon--pinterest">
                        <span class="icon fa fa-pinterest"></span>
                      </span>
                          Pinterest
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['instagram']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['instagram']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['instagram']['tooltip']; ?>">
                      <span class="social-icon social-icon--instagram">
                        <span class="icon fa fa-instagram"></span>
                      </span>
                          Instagram
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['youtube']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['youtube']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['youtube']['tooltip']; ?>">
                      <span class="social-icon social-icon--youtube">
                        <span class="icon fa fa-youtube"></span>
                      </span>
                          Youtube
                        </a>
                      </li>
                    <?php endif; ?>

                    <?php if ($theme_settings['social_links']['vimeo']['active']): ?>
                      <li>
                        <a href="<?php print $theme_settings['social_links']['vimeo']['url']; ?>"
                           target="_blank"
                           data-toggle="tooltip"
                           data-placement="top"
                           title="<?php print $theme_settings['social_links']['vimeo']['tooltip']; ?>">
                      <span class="social-icon social-icon--vimeo">
                        <span class="icon fa fa-vimeo"></span>
                      </span>
                          Vimeo
                        </a>
                      </li>
                    <?php endif; ?>

                  </ul>
                </div>
              </div>

            </div>
            <!-- End - social icons -->

          </div>
        </div>

      </div>
    </div>
  </div>
  <!-- End - footer -->

</div>
<!-- End - wrapper -->
