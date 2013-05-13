<?php
/**
 * @file
 * green_travel.features.inc
 */

/**
 * Implements hook_node_info().
 */
function green_travel_node_info() {
  $items = array(
    'travel' => array(
      'name' => t('Déplacements'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
