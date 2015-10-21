<?php
/**
 * @file
 * slac_people_listing.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_people_listing_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context_2';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -50;
  $handler->conf = array(
    'title' => 'User view page',
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
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_article';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Profile Overview';
  $display->uuid = 'de4956bd-b7f0-4d01-ba8a-2f5a404f9a95';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f86e5580-4e1e-410a-a219-dcb71a71d687';
    $pane->panel = 'left';
    $pane->type = 'slac_profile_complete';
    $pane->subtype = 'slac_profile_complete';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
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
    $pane->uuid = 'f86e5580-4e1e-410a-a219-dcb71a71d687';
    $display->content['new-f86e5580-4e1e-410a-a219-dcb71a71d687'] = $pane;
    $display->panels['left'][0] = 'new-f86e5580-4e1e-410a-a219-dcb71a71d687';
    $pane = new stdClass();
    $pane->pid = 'new-1c058cda-b940-4159-9829-6769c80f6822';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c058cda-b940-4159-9829-6769c80f6822';
    $display->content['new-1c058cda-b940-4159-9829-6769c80f6822'] = $pane;
    $display->panels['left'][1] = 'new-1c058cda-b940-4159-9829-6769c80f6822';
    $pane = new stdClass();
    $pane->pid = 'new-3c53b924-8941-4c53-9e81-484956645558';
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
    $pane->uuid = '3c53b924-8941-4c53-9e81-484956645558';
    $display->content['new-3c53b924-8941-4c53-9e81-484956645558'] = $pane;
    $display->panels['left_title'][0] = 'new-3c53b924-8941-4c53-9e81-484956645558';
    $pane = new stdClass();
    $pane->pid = 'new-0ed59c7a-504c-4b9e-bf2f-72b38708fde7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Information',
      'context' => array(
        1 => 'argument_entity_id:user_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ed59c7a-504c-4b9e-bf2f-72b38708fde7';
    $display->content['new-0ed59c7a-504c-4b9e-bf2f-72b38708fde7'] = $pane;
    $display->panels['right'][0] = 'new-0ed59c7a-504c-4b9e-bf2f-72b38708fde7';
    $pane = new stdClass();
    $pane->pid = 'new-cf3afb99-6898-4567-b91d-9901afef8224';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'profile_user_elements_extorg-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'uid' => 'ALynch, SirWemmer, Steven, Erik',
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
    $pane->uuid = 'cf3afb99-6898-4567-b91d-9901afef8224';
    $display->content['new-cf3afb99-6898-4567-b91d-9901afef8224'] = $pane;
    $display->panels['right'][1] = 'new-cf3afb99-6898-4567-b91d-9901afef8224';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f86e5580-4e1e-410a-a219-dcb71a71d687';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_people_listing_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_listing_page';
  $page->task = 'page';
  $page->admin_title = 'People Listing page';
  $page->admin_description = '';
  $page->path = 'people/!letter';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'People',
    'name' => 'main-menu',
    'weight' => '13',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'letter' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
      'keyword' => 'letter',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_listing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people_listing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
          'name' => 'string_length',
          'settings' => array(
            'operator' => '<=',
            'length' => '3',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one_col_basic';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'title' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'People Listing: All';
  $display->uuid = 'f605229c-7f0d-4e28-afc2-2c3ab5d6f24c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bf5a737-c7e7-4cff-b916-47ab103bf311';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'people_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bf5a737-c7e7-4cff-b916-47ab103bf311';
    $display->content['new-9bf5a737-c7e7-4cff-b916-47ab103bf311'] = $pane;
    $display->panels['content'][0] = 'new-9bf5a737-c7e7-4cff-b916-47ab103bf311';
    $pane = new stdClass();
    $pane->pid = 'new-9129bfeb-da92-47b4-95f9-88308f24546e';
    $pane->panel = 'title';
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
    $pane->uuid = '9129bfeb-da92-47b4-95f9-88308f24546e';
    $display->content['new-9129bfeb-da92-47b4-95f9-88308f24546e'] = $pane;
    $display->panels['title'][0] = 'new-9129bfeb-da92-47b4-95f9-88308f24546e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9bf5a737-c7e7-4cff-b916-47ab103bf311';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_listing_page'] = $page;

  return $pages;

}
