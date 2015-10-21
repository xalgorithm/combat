<?php
/**
 * @file
 * landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:landing_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing_page';
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
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21461078-7a40-4d8a-a257-736954c79d9f';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landing_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:landing_page:profile_page';
  $panelizer->title = 'Profile page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing_page';
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
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'df8b8337-e834-47c9-b84b-5ffd76c7a8ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-badd4b8f-9154-4d50-b0d6-e28e0df91c08';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:bf1ccf7f-9345-4259-b6b5-6bacfaab0589';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'badd4b8f-9154-4d50-b0d6-e28e0df91c08';
    $display->content['new-badd4b8f-9154-4d50-b0d6-e28e0df91c08'] = $pane;
    $display->panels['left'][0] = 'new-badd4b8f-9154-4d50-b0d6-e28e0df91c08';
    $pane = new stdClass();
    $pane->pid = 'new-4dd3ef21-6dff-4bf4-b74b-c7dd5542a90b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'uid' => 'manager',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4dd3ef21-6dff-4bf4-b74b-c7dd5542a90b';
    $display->content['new-4dd3ef21-6dff-4bf4-b74b-c7dd5542a90b'] = $pane;
    $display->panels['left'][1] = 'new-4dd3ef21-6dff-4bf4-b74b-c7dd5542a90b';
    $pane = new stdClass();
    $pane->pid = 'new-edd0fabe-846e-4314-846f-6c835b4c3098';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_elements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'exposed' => array(
        'uid_1' => 'manager',
        'field_slac_blog_tags_tid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'edd0fabe-846e-4314-846f-6c835b4c3098';
    $display->content['new-edd0fabe-846e-4314-846f-6c835b4c3098'] = $pane;
    $display->panels['left'][2] = 'new-edd0fabe-846e-4314-846f-6c835b4c3098';
    $pane = new stdClass();
    $pane->pid = 'new-34861b87-046f-4ab8-8a6e-85f4917cdcfa';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'uid' => 'manager',
      ),
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
    $pane->uuid = '34861b87-046f-4ab8-8a6e-85f4917cdcfa';
    $display->content['new-34861b87-046f-4ab8-8a6e-85f4917cdcfa'] = $pane;
    $display->panels['right'][0] = 'new-34861b87-046f-4ab8-8a6e-85f4917cdcfa';
    $pane = new stdClass();
    $pane->pid = 'new-f29639cf-c7e0-468c-bd8f-bb49df145d9e';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'uid' => 'manager',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f29639cf-c7e0-468c-bd8f-bb49df145d9e';
    $display->content['new-f29639cf-c7e0-468c-bd8f-bb49df145d9e'] = $pane;
    $display->panels['right'][1] = 'new-f29639cf-c7e0-468c-bd8f-bb49df145d9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:landing_page:profile_page'] = $panelizer;

  return $export;
}
