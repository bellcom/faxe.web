<?php

/**
 * @file
 * Search API data alteration callback.
 */
class SearchApiMeetingContentDecodedAlterSettings extends SearchApiAbstractAlterCallback {

  /**
   * {@inheritdoc}
   */
  public function alterItems(array &$items) {
    foreach ($items as &$item) {
      //adding check for multi-type index
      if ($item->node) {
        $node = & $item->node;
      }
      else {
        $node = & $item;
      }

      //if the that is not node or node is malformed
      if (!$node->nid) {
        continue;
      }

      $metaInformation = '';

      // Checking if node is actually a meeting.
      if ($node->type == 'os2web_meetings_meeting') {
        // Getting all BP.

        // Extracting data from bullet points.
        if (isset($node->field_os2web_meetings_bullets['und'])) {
          foreach ($node->field_os2web_meetings_bullets['und'] as $bullet_point_tid) {
            $bullet_point = node_load($bullet_point_tid['target_id']);

            $metaInformation .= ' ' . $bullet_point->title;

            // Extracting data from bullet points attachments.
            if (isset($bullet_point->field_os2web_meetings_attach['und'])) {
              foreach ($bullet_point->field_os2web_meetings_attach['und'] as $bpa_tid) {
                $bullet_point_attachment = node_load($bpa_tid['target_id']);

                $text = '';
                if (isset($bullet_point_attachment->field_os2web_meetings_bpa_body['und'])) {
                  $text = str_replace("\r\n", " ", strip_tags($bullet_point_attachment->field_os2web_meetings_bpa_body['und'][0]['value']));
                  $text = str_replace("\n\r", " ", $text);
                  $text = str_replace("\n", " ", $text);
                  $text = str_replace("\r", " ", $text);
                }
                // Decoding the content.
                $metaInformation .= ' ' . html_entity_decode($text);
              }
            }
          }
        }
      }

      $item->faxe_elasticsearch_meeting_content_decoded = $metaInformation;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function propertyInfo() {
    $ret = array();

    $ret['faxe_elasticsearch_meeting_content_decoded'] = array(
      'label' => 'Faxe elasticsearch meeting content (decoded)',
      'description' => 'BPA Body content is stored as htmlentities encoded, this help decoding it and make available for indexing',
      'type' => 'text',
    );

    return $ret;
  }
}
