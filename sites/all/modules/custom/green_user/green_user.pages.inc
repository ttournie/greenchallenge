<?php
/**
 * Page callback for user edit page.
 */
function green_user_page() {
  global $user;

  // Return the user form.
  module_load_include('inc', 'user', 'user.pages');
  return $build['form'] = drupal_get_form('user_profile_form', $user);
}

/**
 * Page callback for user view page.
 */
function green_user_page_view($user) {
  drupal_set_title($user->name);
  return user_view($user, 'full');
}
