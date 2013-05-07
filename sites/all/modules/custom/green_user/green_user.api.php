<?php
/**
 * @file
 * pec_user api reference.
 */

/**
 * Define module values for score for a username.
 *
 * Called when the module need to calculate the user score for a module.
 * @return integer
 */
function hook_green_user_score($user_name) {
  $score = 0;
  $user = user_load_by_name($user_name);
  $node_type = 'node_type';
  // Search for an existing module node for the current user.
  $query = new EntityFieldQuery();
  $results = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $node_type)
      ->propertyCondition('status', TRUE)
      ->propertyCondition('uid', $user->uid)
      ->execute();

  // If the user has no node node yet
  if (empty($results['node'])) {
     return false;
  }

  else {
    // Load the user's alimentation node.
    $node = node_load(reset($results['node'])->nid);
  }
  return $score;
}
