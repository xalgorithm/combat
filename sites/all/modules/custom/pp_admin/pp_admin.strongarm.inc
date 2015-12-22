<?php
/**
 * @file
 * pp_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pp_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pp_crop_wysiwyg_settings';
  $strongarm->value = array(
    'crop_landscape' => 'crop_landscape',
    'crop_portrait' => 'crop_portrait',
    'crop_square' => 'crop_square',
    'lightbox_text_bottom' => 'lightbox_text_bottom',
    'lightbox_text_left_right' => 'lightbox_text_left_right',
    'basic_page_large_image' => 'basic_page_large_image',
    'slac_blog_image' => 'slac_blog_image',
    'slac_blog_image_details' => 'slac_blog_image_details',
    'crop_news_landscape' => 'crop_news_landscape',
    'slac_news_image_details' => 'slac_news_image_details',
    'newsletter_large' => 'newsletter_large',
    'newsletter_small' => 'newsletter_small',
    'slideshow_image_description_bottom' => 'slideshow_image_description_bottom',
    'crop_slac_projects' => 'crop_slac_projects',
    'crop_slac_sidebar_block' => 'crop_slac_sidebar_block',
  );
  $export['pp_crop_wysiwyg_settings'] = $strongarm;

  return $export;
}
