<?php
/**
 * @file
 * slac_event.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function slac_event_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'calendar_importer';
  $feeds_importer->config = array(
    'name' => 'calendar_importer',
    'description' => 'Ursus Cal Importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateIcalIcalcreatorParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'summary',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'dtstart',
            'target' => 'field_slac_event_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'dtend',
            'target' => 'field_slac_event_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'rrule',
            'target' => 'date_repeat_entity_clone_state',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['calendar_importer'] = $feeds_importer;

  return $export;
}