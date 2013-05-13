<?php
/**
 * @file
 * green_travel.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function green_travel_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_type_de_vehicule'
  $field_bases['field_type_de_vehicule'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_type_de_vehicule',
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
        'Aucun/Vélo' => 'Aucun/Vélo',
        'Transports en commun' => 'Transports en commun',
        'Scooter' => 'Scooter',
        'Moto' => 'Moto',
        'Voiture' => 'Voiture',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
