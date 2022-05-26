<?php

/**
 * @file
 * faxe_sitemap.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function faxe_sitemap_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_base_group_content|node|os2web_base_contentpage|form';
  $field_group->group_name = 'group_os2web_base_group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_afsnit',
      1 => 'group_os2web_base_group_3',
      2 => 'group_os2web_base_group_extras',
      3 => 'group_os2web_base_group_general',
      4 => 'group_os2web_base_group_images',
      5 => 'group_relationer',
      6 => 'group_spotbokse',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
    'format_type' => 'htabs',
    'label' => 'Indholdsside',
    'weight' => '1',
  );
  $field_groups['group_os2web_base_group_content|node|os2web_base_contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationer|node|os2web_base_contentpage|form';
  $field_group->group_name = 'group_relationer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_base_contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_base_group_content';
  $field_group->data = array(
    'children' => array(
      0 => 'field_os2web_base_field_ext_link',
      1 => 'field_os2web_base_field_related',
      2 => 'field_os2web_base_field_selfserv',
      3 => 'field_faxe_sitemap_categori',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-relationer field-group-htab',
        'description' => '',
        'id' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'htab',
    'label' => 'Relationer',
    'weight' => '8',
  );
  $field_groups['group_relationer|node|os2web_base_contentpage|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Indholdsside');
  t('Relationer');

  return $field_groups;
}
