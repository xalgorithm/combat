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
  $display->uuid = '2db6bd70-7fcb-4efe-beb9-44bcd587ffcd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72caf4be-4553-46f0-94a7-28be51ddc51a';
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
    $pane->uuid = '72caf4be-4553-46f0-94a7-28be51ddc51a';
    $display->content['new-72caf4be-4553-46f0-94a7-28be51ddc51a'] = $pane;
    $display->panels['left'][0] = 'new-72caf4be-4553-46f0-94a7-28be51ddc51a';
    $pane = new stdClass();
    $pane->pid = 'new-2a9aa672-416c-41d9-bd89-ec462a9829c5';
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
    $pane->uuid = '2a9aa672-416c-41d9-bd89-ec462a9829c5';
    $display->content['new-2a9aa672-416c-41d9-bd89-ec462a9829c5'] = $pane;
    $display->panels['left'][1] = 'new-2a9aa672-416c-41d9-bd89-ec462a9829c5';
    $pane = new stdClass();
    $pane->pid = 'new-3b824146-cd72-4487-bea9-2f0d99fd1dad';
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
    $pane->uuid = '3b824146-cd72-4487-bea9-2f0d99fd1dad';
    $display->content['new-3b824146-cd72-4487-bea9-2f0d99fd1dad'] = $pane;
    $display->panels['left_title'][0] = 'new-3b824146-cd72-4487-bea9-2f0d99fd1dad';
    $pane = new stdClass();
    $pane->pid = 'new-c0a31ac6-3ff7-4b72-be40-71eb0b137e2e';
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
    $pane->uuid = 'c0a31ac6-3ff7-4b72-be40-71eb0b137e2e';
    $display->content['new-c0a31ac6-3ff7-4b72-be40-71eb0b137e2e'] = $pane;
    $display->panels['right'][0] = 'new-c0a31ac6-3ff7-4b72-be40-71eb0b137e2e';
    $pane = new stdClass();
    $pane->pid = 'new-71d43763-1add-43fc-9459-73a09ffbf337';
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
    $pane->uuid = '71d43763-1add-43fc-9459-73a09ffbf337';
    $display->content['new-71d43763-1add-43fc-9459-73a09ffbf337'] = $pane;
    $display->panels['right'][1] = 'new-71d43763-1add-43fc-9459-73a09ffbf337';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-72caf4be-4553-46f0-94a7-28be51ddc51a';
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
  $display->uuid = 'c62a9ece-891e-4d9e-b092-2cc095407142';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
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
    $pane->uuid = '5f6c2349-173f-40e0-b295-f46bbc68e6b3';
    $display->content['new-5f6c2349-173f-40e0-b295-f46bbc68e6b3'] = $pane;
    $display->panels['content'][0] = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
    $pane = new stdClass();
    $pane->pid = 'new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
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
    $pane->uuid = '8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
    $display->content['new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43'] = $pane;
    $display->panels['title'][0] = 'new-8f5c3913-47c6-4e35-a9cf-a752a8a15b43';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-5f6c2349-173f-40e0-b295-f46bbc68e6b3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_listing_page'] = $page;

  return $pages;

}
