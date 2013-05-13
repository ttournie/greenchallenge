<?php
/**
 * @file
 * green_travel.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function green_travel_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-travel-field_type_de_vehicule'
  $field_instances['node-travel-field_type_de_vehicule'] = array(
    'bundle' => 'travel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_de_vehicule',
    'label' => 'Type de véhicule',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Type de véhicule');

  return $field_instances;
}
