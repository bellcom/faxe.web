<?php

/**
 * @file
 * Search API data alteration callback.
 */
class SearchApiSitemapCategoryFilter extends SearchApiAbstractAlterCallback {

  /**
   * {@inheritdoc}
   */
  public function alterItems(array &$items) {
    foreach ($items as $id => $item) {
      //adding check for multi-type index
      if ($item->node) {
        $node = &$item->node;
      }
      else {
        $node = &$item;
      }

      //if the that is not node or node is malformed
      if (!$node->nid) {
        continue;
      }

      $exclude = FALSE;

      // Checking if node has sitemap category.
      if ($node->type == 'os2web_base_contentpage' || $node->type == 'borger_dk_article' || $node->type == 'os2web_base_selfservice_link') {
        if (!$node->field_faxe_sitemap_categori) {
          $exclude = TRUE;
        }
      }
      else {
        $exclude = TRUE;
      }

      // Excluding node.
      if ($exclude) {
        unset($items[$id]);
      }
    }
  }

}
