<?php

/**
 * @file
 * faxe_sitemap.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function faxe_sitemap_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sitemap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sitemap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faxe_sitemap_categori',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Sitemap kategori */
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['id'] = 'field_faxe_sitemap_categori';
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['table'] = 'field_data_field_faxe_sitemap_categori';
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['field'] = 'field_faxe_sitemap_categori';
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['label'] = '';
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faxe_sitemap_categori']['type'] = 'taxonomy_term_reference_plain';
  /* Sorteringskriterie: Indhold: Sitemap kategori (field_faxe_sitemap_categori) */
  $handler->display->display_options['sorts']['field_faxe_sitemap_categori_tid']['id'] = 'field_faxe_sitemap_categori_tid';
  $handler->display->display_options['sorts']['field_faxe_sitemap_categori_tid']['table'] = 'field_data_field_faxe_sitemap_categori';
  $handler->display->display_options['sorts']['field_faxe_sitemap_categori_tid']['field'] = 'field_faxe_sitemap_categori_tid';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Publiceringsstatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Sitemap kategori (field_faxe_sitemap_categori) */
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['id'] = 'field_faxe_sitemap_categori_tid';
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['table'] = 'field_data_field_faxe_sitemap_categori';
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['field'] = 'field_faxe_sitemap_categori_tid';
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['value'] = '';
  $handler->display->display_options['filters']['field_faxe_sitemap_categori_tid']['vocabulary'] = 'faxe_sitemap_categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sog-selvbetjening';
  $translatables['sitemap'] = array(
    t('Master'),
    t('Selvbetjening'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Page'),
  );
  $export['sitemap'] = $view;

  return $export;
}
