<?php
/**
 * @file
 * slac_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'SLAC Event',
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
              'event' => 'event',
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
      'left_title' => NULL,
      'right' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'social_media' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = '5f52dd95-2a0e-4f5c-a34d-b197521c5135';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-54bdb7ab-ef59-46c7-8e3f-9dc44675df5c';
    $pane->panel = 'inner_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slac_event_thumbnail',
        'image_link' => '',
        'text' => 'Download [file:name]',
      ),
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
    $pane->uuid = '54bdb7ab-ef59-46c7-8e3f-9dc44675df5c';
    $display->content['new-54bdb7ab-ef59-46c7-8e3f-9dc44675df5c'] = $pane;
    $display->panels['inner_left'][0] = 'new-54bdb7ab-ef59-46c7-8e3f-9dc44675df5c';
    $pane = new stdClass();
    $pane->pid = 'new-9eb7d7a2-d2fd-46c4-bbb9-aa0065d1b071';
    $pane->panel = 'inner_left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:d9c207a3-9ec9-4820-9f21-5539006b9215';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9eb7d7a2-d2fd-46c4-bbb9-aa0065d1b071';
    $display->content['new-9eb7d7a2-d2fd-46c4-bbb9-aa0065d1b071'] = $pane;
    $display->panels['inner_left'][1] = 'new-9eb7d7a2-d2fd-46c4-bbb9-aa0065d1b071';
    $pane = new stdClass();
    $pane->pid = 'new-11000a6b-1ab9-4896-824d-9d2c8725f504';
    $pane->panel = 'inner_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add to calendar icon',
      'title' => '',
      'body' => '<p><a href="/event/%node:nid/calendar.ics">add to calendar</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'add-to-calendar',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11000a6b-1ab9-4896-824d-9d2c8725f504';
    $display->content['new-11000a6b-1ab9-4896-824d-9d2c8725f504'] = $pane;
    $display->panels['inner_left'][2] = 'new-11000a6b-1ab9-4896-824d-9d2c8725f504';
    $pane = new stdClass();
    $pane->pid = 'new-75ced2a4-7ae0-4af8-9f5f-c4eba70d228e';
    $pane->panel = 'inner_right';
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
    $pane->uuid = '75ced2a4-7ae0-4af8-9f5f-c4eba70d228e';
    $display->content['new-75ced2a4-7ae0-4af8-9f5f-c4eba70d228e'] = $pane;
    $display->panels['inner_right'][0] = 'new-75ced2a4-7ae0-4af8-9f5f-c4eba70d228e';
    $pane = new stdClass();
    $pane->pid = 'new-db4ab1aa-0229-4776-b6b8-3f636bcec6ee';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'calendar_date',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'When',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db4ab1aa-0229-4776-b6b8-3f636bcec6ee';
    $display->content['new-db4ab1aa-0229-4776-b6b8-3f636bcec6ee'] = $pane;
    $display->panels['inner_right'][1] = 'new-db4ab1aa-0229-4776-b6b8-3f636bcec6ee';
    $pane = new stdClass();
    $pane->pid = 'new-5f70ddb6-0b5f-40b9-aac7-bf7ff4b5f538';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'location_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Where',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5f70ddb6-0b5f-40b9-aac7-bf7ff4b5f538';
    $display->content['new-5f70ddb6-0b5f-40b9-aac7-bf7ff4b5f538'] = $pane;
    $display->panels['inner_right'][2] = 'new-5f70ddb6-0b5f-40b9-aac7-bf7ff4b5f538';
    $pane = new stdClass();
    $pane->pid = 'new-5eea5d47-cef6-437f-825b-97168f3fac19';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_contact';
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
      'override_title_text' => 'Contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5eea5d47-cef6-437f-825b-97168f3fac19';
    $display->content['new-5eea5d47-cef6-437f-825b-97168f3fac19'] = $pane;
    $display->panels['inner_right'][3] = 'new-5eea5d47-cef6-437f-825b-97168f3fac19';
    $pane = new stdClass();
    $pane->pid = 'new-4ec79ad9-a013-46c2-967b-1315c279c4af';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_audience';
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
      'override_title_text' => 'Audience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4ec79ad9-a013-46c2-967b-1315c279c4af';
    $display->content['new-4ec79ad9-a013-46c2-967b-1315c279c4af'] = $pane;
    $display->panels['inner_right'][4] = 'new-4ec79ad9-a013-46c2-967b-1315c279c4af';
    $pane = new stdClass();
    $pane->pid = 'new-d560ee27-27fb-4064-a369-854ad4be5482';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'textformatter_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'textformatter_type' => 'ul',
        'textformatter_class' => 'textformatter-list',
        'textformatter_comma_full_stop' => 0,
        'textformatter_comma_and' => 0,
        'textformatter_comma_tag' => 'div',
        'textformatter_term_plain' => 1,
        'textformatter_comma_override' => 0,
        'textformatter_separator_custom' => '',
        'textformatter_separator_custom_tag' => 'span',
        'textformatter_separator_custom_class' => 'textformatter-separator',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd560ee27-27fb-4064-a369-854ad4be5482';
    $display->content['new-d560ee27-27fb-4064-a369-854ad4be5482'] = $pane;
    $display->panels['inner_right'][5] = 'new-d560ee27-27fb-4064-a369-854ad4be5482';
    $pane = new stdClass();
    $pane->pid = 'new-89a88123-62f3-40e3-a652-27cd97a8e61e';
    $pane->panel = 'inner_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_event_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Related links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '89a88123-62f3-40e3-a652-27cd97a8e61e';
    $display->content['new-89a88123-62f3-40e3-a652-27cd97a8e61e'] = $pane;
    $display->panels['inner_right'][6] = 'new-89a88123-62f3-40e3-a652-27cd97a8e61e';
    $pane = new stdClass();
    $pane->pid = 'new-49dfff42-b930-4e38-89a0-75165a51c198';
    $pane->panel = 'inner_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
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
    $pane->uuid = '49dfff42-b930-4e38-89a0-75165a51c198';
    $display->content['new-49dfff42-b930-4e38-89a0-75165a51c198'] = $pane;
    $display->panels['inner_title'][0] = 'new-49dfff42-b930-4e38-89a0-75165a51c198';
    $pane = new stdClass();
    $pane->pid = 'new-13d2ae35-90ee-4105-a45c-41b842001b9b';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_2';
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
    $pane->uuid = '13d2ae35-90ee-4105-a45c-41b842001b9b';
    $display->content['new-13d2ae35-90ee-4105-a45c-41b842001b9b'] = $pane;
    $display->panels['left'][0] = 'new-13d2ae35-90ee-4105-a45c-41b842001b9b';
    $pane = new stdClass();
    $pane->pid = 'new-15077ae4-d5c6-4aa5-b1dc-d5dcd2486f08';
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
    $pane->uuid = '15077ae4-d5c6-4aa5-b1dc-d5dcd2486f08';
    $display->content['new-15077ae4-d5c6-4aa5-b1dc-d5dcd2486f08'] = $pane;
    $display->panels['left_title'][0] = 'new-15077ae4-d5c6-4aa5-b1dc-d5dcd2486f08';
    $pane = new stdClass();
    $pane->pid = 'new-f84e29c8-f95c-49c4-9453-426a25496849';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'test_cal';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f84e29c8-f95c-49c4-9453-426a25496849';
    $display->content['new-f84e29c8-f95c-49c4-9453-426a25496849'] = $pane;
    $display->panels['right'][0] = 'new-f84e29c8-f95c-49c4-9453-426a25496849';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-15077ae4-d5c6-4aa5-b1dc-d5dcd2486f08';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_event_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_new_event';
  $page->task = 'page';
  $page->admin_title = 'Add new event';
  $page->admin_description = '';
  $page->path = 'events/new-event';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 5,
            2 => 3,
            3 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'action',
    'title' => 'Add New Event',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_new_event_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_new_event';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/event',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_new_event'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'name' => 'main-menu',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
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
  );
  $display = new panels_display();
  $display->layout = 'one_col_basic';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'inner_left' => NULL,
      'inner_right' => NULL,
      'inner_title' => NULL,
      'social_media' => NULL,
      'right_sidebar' => NULL,
      'title' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Event calendar';
  $display->uuid = 'af14aa2a-7934-41e0-b9ac-8a7172388bd7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-770918d3-95eb-455d-a630-0a8c3f548119';
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
    $pane->uuid = '770918d3-95eb-455d-a630-0a8c3f548119';
    $display->content['new-770918d3-95eb-455d-a630-0a8c3f548119'] = $pane;
    $display->panels['title'][0] = 'new-770918d3-95eb-455d-a630-0a8c3f548119';
    $pane = new stdClass();
    $pane->pid = 'new-7e7abb50-137f-4449-844e-e67b3f10e213';
    $pane->panel = 'title';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'event-listing-panel',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7e7abb50-137f-4449-844e-e67b3f10e213';
    $display->content['new-7e7abb50-137f-4449-844e-e67b3f10e213'] = $pane;
    $display->panels['title'][1] = 'new-7e7abb50-137f-4449-844e-e67b3f10e213';
    $pane = new stdClass();
    $pane->pid = 'new-77a5b5ee-933d-4e20-b93b-f730d277dc91';
    $pane->panel = 'title';
    $pane->type = 'views';
    $pane->subtype = 'test_cal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '77a5b5ee-933d-4e20-b93b-f730d277dc91';
    $display->content['new-77a5b5ee-933d-4e20-b93b-f730d277dc91'] = $pane;
    $display->panels['title'][2] = 'new-77a5b5ee-933d-4e20-b93b-f730d277dc91';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
