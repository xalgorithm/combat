<?php
/**
 * @file
 * slac_news_feed_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_news_feed_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function slac_news_feed_importer_node_info() {
  $items = array(
    'news_feed' => array(
      'name' => t('News Feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
