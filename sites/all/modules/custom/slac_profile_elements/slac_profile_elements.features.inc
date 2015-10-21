<?php
/**
 * @file
 * slac_profile_elements.features.inc
 */

/**
 * Implements hook_views_api().
 */
function slac_profile_elements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slac_profile_elements_image_default_styles() {
  $styles = array();

  // Exported image style: profile_home_blog_image.
  $styles['profile_home_blog_image'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 150,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'profile_home_blog_image',
  );

  // Exported image style: profile_home_user_image.
  $styles['profile_home_user_image'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 220,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'profile_home_user_image',
  );

  return $styles;
}
