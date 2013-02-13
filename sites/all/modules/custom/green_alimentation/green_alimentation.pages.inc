<?php
/**
 * Page callback for travel page.
 */
function green_alimentation_page($node_type) {
  global $user;

  // Search for an existing travel for the current user.
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

/**
 * Page callback for travel page.
 */
function green_alimentation_page_view($user_name) {
    
  preg_replace('#+#', ' ', $user_name);
  dsm($user_name);
  global $user;

  // Search for an existing travel for the current user.
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
