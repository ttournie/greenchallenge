<?php
/**
 * @file
 * green_alimentation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function green_alimentation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-alimentation-field_conso_poissons'
  $field_instances['node-alimentation-field_conso_poissons'] = array(
    'bundle' => 'alimentation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Combien de fois consomez-vous du poisson dans la semaine ?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_conso_poissons',
    'label' => 'Fréquence de consommation de poissons par semaine',
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

  // Exported field_instance: 'node-alimentation-field_type_de_regime'
  $field_instances['node-alimentation-field_type_de_regime'] = array(
    'bundle' => 'alimentation',
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
    'field_name' => 'field_type_de_regime',
    'label' => 'Type de régime',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Combien de fois consomez-vous du poisson dans la semaine ?');
  t('Fréquence de consommation de poissons par semaine');
  t('Type de régime');

  return $field_instances;
}
