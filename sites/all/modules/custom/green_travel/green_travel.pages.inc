<?php
/**
 * Page callback for alimentation page.
 */
function green_travel_page($node_type) {
  global $user;

  // Search for an existing alimentation for the current user.
  $query = new EntityFieldQuery();
  $results = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $node_type)
      ->propertyCondition('status', TRUE)
      ->propertyCondition('uid', $user->uid)
      ->execute();


  if (empty($results['node'])) {
    // Create an empty node typed accordingly to user's role.
    $node = (object) array(
      'uid' => $user->uid,
      'name' => (isset($user->name) ? $user->name : ''),
      'type' => $node_type,
      'language' => LANGUAGE_NONE,
    );
  }
  else {
    // Load the user's alimentation node.
    $node = node_load(reset($results['node'])->nid);
  }

  // Return the node's form (which is basically the same for creating/editing).
  module_load_include('inc', 'node', 'node.pages');

  $build = array();
  $build['form'] = drupal_get_form($node->type . '_node_form', $node);
  return $build;
}
