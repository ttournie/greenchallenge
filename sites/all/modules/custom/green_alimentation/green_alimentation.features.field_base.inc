<?php
/**
 * @file
 * green_alimentation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function green_alimentation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_achat_commerce_quitable'
  $field_bases['field_achat_commerce_quitable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_achat_commerce_quitable',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Jamais',
        1 => 'Parfois',
        2 => 'Souvent',
        3 => 'Tout le temps',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_achat_de_produit_frais'
  $field_bases['field_achat_de_produit_frais'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_achat_de_produit_frais',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Jamais',
        1 => 'Parfois',
        2 => 'Souvent',
        3 => 'Tout le temps',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_achat_produits_locaux'
  $field_bases['field_achat_produits_locaux'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_achat_produits_locaux',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Jamais',
        1 => 'Parfois',
        2 => 'Souvent',
        3 => 'Tout le temps',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_conso_poissons'
  $field_bases['field_conso_poissons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_conso_poissons',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
        11 => 11,
        12 => 12,
        13 => 13,
        14 => 14,
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_j_utilise_des_paniers_ou_d'
  $field_bases['field_j_utilise_des_paniers_ou_d'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_j_utilise_des_paniers_ou_d',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Jamais',
        1 => 'Parfois',
        2 => 'Souvent',
        3 => 'Tout le temps',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_je_bois_l_eau_du_robinet'
  $field_bases['field_je_bois_l_eau_du_robinet'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_je_bois_l_eau_du_robinet',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Jamais',
        1 => 'Parfois',
        2 => 'Souvent',
        3 => 'Tout le temps',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_type_de_regime'
  $field_bases['field_type_de_regime'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_type_de_regime',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Viandes/poissons' => 'Viandes/poissons',
        'Végétarien' => 'Végétarien',
        'Végétalien' => 'Végétalien',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
