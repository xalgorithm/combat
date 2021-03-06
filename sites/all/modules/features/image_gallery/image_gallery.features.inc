<?php
/**
 * @file
 * image_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function image_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Image Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
