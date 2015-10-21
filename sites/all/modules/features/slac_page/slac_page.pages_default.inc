<?php
/**
 * @file
 * slac_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'SLAC Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_events';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c1a919c1-e8b1-4ec6-acef-45011b0d569e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9ed94c15-1f5d-443a-af36-c45e60d9dea5';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
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
    $pane->uuid = '9ed94c15-1f5d-443a-af36-c45e60d9dea5';
    $display->content['new-9ed94c15-1f5d-443a-af36-c45e60d9dea5'] = $pane;
    $display->panels['left'][0] = 'new-9ed94c15-1f5d-443a-af36-c45e60d9dea5';
    $pane = new stdClass();
    $pane->pid = 'new-646adb3a-8987-46b1-8d7a-5a8acacd737b';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => 'pane-title',
      'id' => '',
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
    $pane->uuid = '646adb3a-8987-46b1-8d7a-5a8acacd737b';
    $display->content['new-646adb3a-8987-46b1-8d7a-5a8acacd737b'] = $pane;
    $display->panels['left_title'][0] = 'new-646adb3a-8987-46b1-8d7a-5a8acacd737b';
    $pane = new stdClass();
    $pane->pid = 'new-e070bbe9-acdc-4110-b01f-93d378779974';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'e070bbe9-acdc-4110-b01f-93d378779974';
    $display->content['new-e070bbe9-acdc-4110-b01f-93d378779974'] = $pane;
    $display->panels['right'][0] = 'new-e070bbe9-acdc-4110-b01f-93d378779974';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e070bbe9-acdc-4110-b01f-93d378779974';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
