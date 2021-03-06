<?php

/**
 * Process variables for user-profile-category.tpl.php.
 *
 * The $variables array contains the following arguments:
 * - $element
 *
 * @see user-profile-category.tpl.php
 */
function green_challenge_preprocess_user_profile_category(&$variables) {
  // Hide title in certain case
  if($variables['element']['#title'] == 'Main profile') {
     $variables['title'] = null;  
  } else 
    $variables['title'] = check_plain($variables['element']['#title']);
  $variables['profile_items'] = $variables['element']['#children'];
  $variables['attributes'] = '';
  if (isset($variables['element']['#attributes'])) {
    $variables['attributes'] = drupal_attributes($variables['element']['#attributes']);
  }
}

/**
 * Override or insert variables into the block template.
 */
function green_challenge_preprocess_block(&$variables) {
  // In the header region visually hide block titles.
  if ($variables['block']->region == 'header') {
    $variables['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Theming function for account block.
 */
function green_challenge_account_block($variables) {

    
  $build = array(
    'ul' => array(
      '#markup' => '<ul class="profil">',
    ),
    'link' => array(
      '#theme' => 'link',
      '#text' => t('Mon profil'),
      '#path' => 'profil/'.$variables['username'],
      '#prefix' => '<li>',
      '#sufix' => '</li>',
      '#options' => array(
        'attributes' => array(),
        'html' => true,
      ),
    ),
    'link2' => array(
      '#theme' => 'link',
      '#text' => t('Déconnexion'),
      '#path' => 'user/logout',
      '#prefix' => '<li>',
      '#sufix' => '</li>',
      '#options' => array(
        'attributes' => array(),
        'html' => true,
      ),
    ),
    'endul' => array(
      '#markup' => '</ul>',
    ),
  );
  return $build;
}
