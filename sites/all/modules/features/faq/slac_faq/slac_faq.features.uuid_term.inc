<?php
/**
 * @file
 * slac_faq.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function slac_faq_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Armor',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '92dd70f6-ac28-4707-a6b6-13b2a94d6028',
    'vocabulary_machine_name' => 'faq_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Top 10',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd3679f29-c528-4c4f-99ef-6aa7ca35a795',
    'vocabulary_machine_name' => 'faq_categories',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Getting Started',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'db22e661-78c9-4acd-80df-cb53faaf5717',
    'vocabulary_machine_name' => 'faq_categories',
    'metatags' => array(),
  );
  return $terms;
}
