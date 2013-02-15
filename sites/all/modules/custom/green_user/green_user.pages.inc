<?php
/**
 * Page callback for user edit page.
 */
function green_user_page() {
  global $user; 

  // Return the user form.
  module_load_include('inc', 'user', 'user.pages');
  return  $build['form']= drupal_get_form('user_profile_form', $user);
}

/**
 * Page callback for user view page.
 */
function green_user_page_view($user_name) {
  // Replacement of underscors
  $user_name = str_replace('_',' ',$user_name);

  // Search the user with the username
  $user = user_load_by_name($user_name);
  
  // If the username does not exist
  if(!$user) {
    return t('Aucun utilisateur ne correspond à ce nom');
  }

  drupal_set_title('Profil');
  
  return user_view($user);
  
}
