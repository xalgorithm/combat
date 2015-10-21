<?php
/**
 * @file
 * slac_basic_page_settings.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function slac_basic_page_settings_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'With left sidebar';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_col_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'right' => NULL,
      'social_media' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '72d7d1e5-2d5e-4098-992e-7a3a085bea17';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2f133576-5c90-4d6f-b8a1-667f4720c65d';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 1,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2f133576-5c90-4d6f-b8a1-667f4720c65d';
    $display->content['new-2f133576-5c90-4d6f-b8a1-667f4720c65d'] = $pane;
    $display->panels['left'][0] = 'new-2f133576-5c90-4d6f-b8a1-667f4720c65d';
    $pane = new stdClass();
    $pane->pid = 'new-d586fbc6-00f5-4fde-a757-c757c765b53d';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd586fbc6-00f5-4fde-a757-c757c765b53d';
    $display->content['new-d586fbc6-00f5-4fde-a757-c757c765b53d'] = $pane;
    $display->panels['left_title'][0] = 'new-d586fbc6-00f5-4fde-a757-c757c765b53d';
    $pane = new stdClass();
    $pane->pid = 'new-6397e3b1-a912-4ec6-bd01-ae74d1edb1ba';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bp_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'basic_page_large_image',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6397e3b1-a912-4ec6-bd01-ae74d1edb1ba';
    $display->content['new-6397e3b1-a912-4ec6-bd01-ae74d1edb1ba'] = $pane;
    $display->panels['right'][0] = 'new-6397e3b1-a912-4ec6-bd01-ae74d1edb1ba';
    $pane = new stdClass();
    $pane->pid = 'new-68fca85d-229d-4733-b89a-8339bca9df53';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '68fca85d-229d-4733-b89a-8339bca9df53';
    $display->content['new-68fca85d-229d-4733-b89a-8339bca9df53'] = $pane;
    $display->panels['right'][1] = 'new-68fca85d-229d-4733-b89a-8339bca9df53';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d586fbc6-00f5-4fde-a757-c757c765b53d';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:no_left_sidebar';
  $panelizer->title = 'No left sidebar';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_col_article';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '266b63c8-2769-404c-928b-dddf204df333';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-39524a7f-8422-4ca5-a4db-527e4d425658';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bp_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'basic_page_large_image',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39524a7f-8422-4ca5-a4db-527e4d425658';
    $display->content['new-39524a7f-8422-4ca5-a4db-527e4d425658'] = $pane;
    $display->panels['left'][0] = 'new-39524a7f-8422-4ca5-a4db-527e4d425658';
    $pane = new stdClass();
    $pane->pid = 'new-79237a88-00a5-4e7e-aac9-484155d81886';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '79237a88-00a5-4e7e-aac9-484155d81886';
    $display->content['new-79237a88-00a5-4e7e-aac9-484155d81886'] = $pane;
    $display->panels['left'][1] = 'new-79237a88-00a5-4e7e-aac9-484155d81886';
    $pane = new stdClass();
    $pane->pid = 'new-e0aa757f-6062-4a39-87e2-6dcae5d6acee';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0aa757f-6062-4a39-87e2-6dcae5d6acee';
    $display->content['new-e0aa757f-6062-4a39-87e2-6dcae5d6acee'] = $pane;
    $display->panels['left_title'][0] = 'new-e0aa757f-6062-4a39-87e2-6dcae5d6acee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-79237a88-00a5-4e7e-aac9-484155d81886';
  $panelizer->display = $display;
  $export['node:page:no_left_sidebar'] = $panelizer;

  return $export;
}
