<?php
/**
 * @file
 * green_alimentation.features.inc
 */

/**
 * Implements hook_node_info().
 */
function green_alimentation_node_info() {
  $items = array(
    'alimentation' => array(
      'name' => t('Alimentation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Alimentation'),
      'help' => '',
    ),
  );
  return $items;
}
