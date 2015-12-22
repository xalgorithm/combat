<?php
/**
 * @file
 * slac_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'SLAC News',
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
              'slac_news' => 'slac_news',
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
  $display->title = '%node:title';
  $display->uuid = '02a479ef-e86a-4673-b6ba-4c219db15b7c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c47a3edb-a3a5-4c45-bdb6-d20fa4e2236c';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_news_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'media',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'crop_slac_news_image_details',
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
    $pane->uuid = 'c47a3edb-a3a5-4c45-bdb6-d20fa4e2236c';
    $display->content['new-c47a3edb-a3a5-4c45-bdb6-d20fa4e2236c'] = $pane;
    $display->panels['left'][0] = 'new-c47a3edb-a3a5-4c45-bdb6-d20fa4e2236c';
    $pane = new stdClass();
    $pane->pid = 'new-89a8b06a-4294-4952-8f23-55544c7c3f7a';
    $pane->panel = 'left';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '89a8b06a-4294-4952-8f23-55544c7c3f7a';
    $display->content['new-89a8b06a-4294-4952-8f23-55544c7c3f7a'] = $pane;
    $display->panels['left'][1] = 'new-89a8b06a-4294-4952-8f23-55544c7c3f7a';
    $pane = new stdClass();
    $pane->pid = 'new-68fbe93d-6b60-4b9b-8c68-522bb4a2d977';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'By',
      'suffix' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'hide_if_anonymous' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'author',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68fbe93d-6b60-4b9b-8c68-522bb4a2d977';
    $display->content['new-68fbe93d-6b60-4b9b-8c68-522bb4a2d977'] = $pane;
    $display->panels['left_author'][0] = 'new-68fbe93d-6b60-4b9b-8c68-522bb4a2d977';
    $pane = new stdClass();
    $pane->pid = 'new-8daec9d6-11bb-4b58-8ba6-525eaa8507f5';
    $pane->panel = 'left_author';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_news_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'slac_news_node_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8daec9d6-11bb-4b58-8ba6-525eaa8507f5';
    $display->content['new-8daec9d6-11bb-4b58-8ba6-525eaa8507f5'] = $pane;
    $display->panels['left_author'][1] = 'new-8daec9d6-11bb-4b58-8ba6-525eaa8507f5';
    $pane = new stdClass();
    $pane->pid = 'new-353c4cf9-d909-470a-9b0f-b6a895d0bcdb';
    $pane->panel = 'left_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
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
    $pane->uuid = '353c4cf9-d909-470a-9b0f-b6a895d0bcdb';
    $display->content['new-353c4cf9-d909-470a-9b0f-b6a895d0bcdb'] = $pane;
    $display->panels['left_title'][0] = 'new-353c4cf9-d909-470a-9b0f-b6a895d0bcdb';
    $pane = new stdClass();
    $pane->pid = 'new-21d1ba48-1d34-4b56-980f-a25ec4cc4b46';
    $pane->panel = 'right';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:f7a76436-1496-4cf8-8f7d-ab6073518a19';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21d1ba48-1d34-4b56-980f-a25ec4cc4b46';
    $display->content['new-21d1ba48-1d34-4b56-980f-a25ec4cc4b46'] = $pane;
    $display->panels['right'][0] = 'new-21d1ba48-1d34-4b56-980f-a25ec4cc4b46';
    $pane = new stdClass();
    $pane->pid = 'new-64522a25-7451-445a-8c2d-2a37c09a395b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64522a25-7451-445a-8c2d-2a37c09a395b';
    $display->content['new-64522a25-7451-445a-8c2d-2a37c09a395b'] = $pane;
    $display->panels['right'][1] = 'new-64522a25-7451-445a-8c2d-2a37c09a395b';
    $pane = new stdClass();
    $pane->pid = 'new-6cf67a77-fedf-47c4-8ed9-4a78eec07db4';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6cf67a77-fedf-47c4-8ed9-4a78eec07db4';
    $display->content['new-6cf67a77-fedf-47c4-8ed9-4a78eec07db4'] = $pane;
    $display->panels['right'][2] = 'new-6cf67a77-fedf-47c4-8ed9-4a78eec07db4';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-353c4cf9-d909-470a-9b0f-b6a895d0bcdb';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'News Tags',
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
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'slac_news_tags' => 'slac_news_tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_article';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.91914477328713',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'Right Side',
        'width' => '30.08085522671287',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_title' => NULL,
      'left_author' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News tagged with "%term:name"';
  $display->uuid = 'feefd079-deb6-4b8b-ab25-2187773c7f85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-265bf54f-30df-410c-8254-8b39bee0d1d4';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '265bf54f-30df-410c-8254-8b39bee0d1d4';
    $display->content['new-265bf54f-30df-410c-8254-8b39bee0d1d4'] = $pane;
    $display->panels['left'][0] = 'new-265bf54f-30df-410c-8254-8b39bee0d1d4';
    $pane = new stdClass();
    $pane->pid = 'new-d958416c-c3ba-4c6f-9a22-1e873cb94bc5';
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
    $pane->uuid = 'd958416c-c3ba-4c6f-9a22-1e873cb94bc5';
    $display->content['new-d958416c-c3ba-4c6f-9a22-1e873cb94bc5'] = $pane;
    $display->panels['left_title'][0] = 'new-d958416c-c3ba-4c6f-9a22-1e873cb94bc5';
    $pane = new stdClass();
    $pane->pid = 'new-d579c7cc-1376-4070-a02e-444e5c02dbb7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'TAGS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd579c7cc-1376-4070-a02e-444e5c02dbb7';
    $display->content['new-d579c7cc-1376-4070-a02e-444e5c02dbb7'] = $pane;
    $display->panels['right'][0] = 'new-d579c7cc-1376-4070-a02e-444e5c02dbb7';
    $pane = new stdClass();
    $pane->pid = 'new-d08341dd-8202-4793-8809-bfae8a9be76b';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd08341dd-8202-4793-8809-bfae8a9be76b';
    $display->content['new-d08341dd-8202-4793-8809-bfae8a9be76b'] = $pane;
    $display->panels['right'][1] = 'new-d08341dd-8202-4793-8809-bfae8a9be76b';
    $pane = new stdClass();
    $pane->pid = 'new-ad8c9315-6447-4bdd-9889-c362d9b4e766';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News Archive',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ad8c9315-6447-4bdd-9889-c362d9b4e766';
    $display->content['new-ad8c9315-6447-4bdd-9889-c362d9b4e766'] = $pane;
    $display->panels['right'][2] = 'new-ad8c9315-6447-4bdd-9889-c362d9b4e766';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_a_new_news_item';
  $page->task = 'page';
  $page->admin_title = 'Add a news item or press release.';
  $page->admin_description = '';
  $page->path = 'node/%node/add-new-news';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 4,
            1 => 3,
            2 => 5,
            3 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'News and Press Releases',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add News Item',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_a_new_news_item_http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_a_new_news_item';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/slac-news',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_a_new_news_item'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_by_types';
  $page->task = 'page';
  $page->admin_title = 'News by types';
  $page->admin_description = '';
  $page->path = 'news/%type';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          7 => '7',
          1 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          5 => 0,
          6 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          8 => 0,
        ),
        'vocabularies' => array(
          'news_types' => 'news_types',
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_by_types_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_by_types';
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
      'plugins' => array(),
    ),
  );
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
  $display->title = '%type:name';
  $display->uuid = '30c791d2-f28c-4c57-8dbc-04b49ed14803';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71a6db22-0829-43c3-8dc8-9412cfb01026';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->uuid = '71a6db22-0829-43c3-8dc8-9412cfb01026';
    $display->content['new-71a6db22-0829-43c3-8dc8-9412cfb01026'] = $pane;
    $display->panels['left'][0] = 'new-71a6db22-0829-43c3-8dc8-9412cfb01026';
    $pane = new stdClass();
    $pane->pid = 'new-827b4c7a-6ed9-490d-9035-87816f907493';
    $pane->panel = 'left_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Term name',
      'title' => '',
      'body' => '<div class="panel-pane pane-node-title">
  <h2 class="pane-title">%type:name</h2>
 </div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '827b4c7a-6ed9-490d-9035-87816f907493';
    $display->content['new-827b4c7a-6ed9-490d-9035-87816f907493'] = $pane;
    $display->panels['left_title'][0] = 'new-827b4c7a-6ed9-490d-9035-87816f907493';
    $pane = new stdClass();
    $pane->pid = 'new-dcfedb3d-7cd5-4cef-9086-e00f6f677d99';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dcfedb3d-7cd5-4cef-9086-e00f6f677d99';
    $display->content['new-dcfedb3d-7cd5-4cef-9086-e00f6f677d99'] = $pane;
    $display->panels['right'][0] = 'new-dcfedb3d-7cd5-4cef-9086-e00f6f677d99';
    $pane = new stdClass();
    $pane->pid = 'new-200e8455-6c37-409c-b463-68281c69ccf6';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '200e8455-6c37-409c-b463-68281c69ccf6';
    $display->content['new-200e8455-6c37-409c-b463-68281c69ccf6'] = $pane;
    $display->panels['right'][1] = 'new-200e8455-6c37-409c-b463-68281c69ccf6';
    $pane = new stdClass();
    $pane->pid = 'new-d9711163-9931-456d-bc04-56b113b20a83';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd9711163-9931-456d-bc04-56b113b20a83';
    $display->content['new-d9711163-9931-456d-bc04-56b113b20a83'] = $pane;
    $display->panels['right'][2] = 'new-d9711163-9931-456d-bc04-56b113b20a83';
    $pane = new stdClass();
    $pane->pid = 'new-8dcab8d8-cafa-4cee-823f-75928570643a';
    $pane->panel = 'social_media_1';
    $pane->type = 'views_feed_pane';
    $pane->subtype = 'news:feed_1';
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
    $pane->uuid = '8dcab8d8-cafa-4cee-823f-75928570643a';
    $display->content['new-8dcab8d8-cafa-4cee-823f-75928570643a'] = $pane;
    $display->panels['social_media_1'][0] = 'new-8dcab8d8-cafa-4cee-823f-75928570643a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-827b4c7a-6ed9-490d-9035-87816f907493';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_by_types'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news_by_year';
  $page->task = 'page';
  $page->admin_title = 'News by year';
  $page->admin_description = 'Displays news by year';
  $page->path = 'news/archive/%year/!month';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(),
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'year' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'month' => array(
      'id' => 2,
      'identifier' => 'String 2',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news_by_year_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'news_by_year';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Year/Month',
        'keyword' => 'year_month',
        'name' => 'year_month',
        'id' => 1,
        'year' => '2',
        'month' => '3',
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (is_numeric($contexts[\'argument_string_1\']->data) && strlen($contexts[\'argument_string_1\']->data) == 4) {
if (isset($contexts[\'argument_string_2\']->data)) {
 if (strlen($contexts[\'argument_string_2\']->data) == 2) {
   if ($contexts[\'argument_string_2\']->data <= 12 && $contexts[\'argument_string_2\']->data >= 1) {
     return TRUE;
}
else {return FALSE;}
}
else {return FALSE;}
}
  return TRUE;
} ',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Archive';
  $display->uuid = '22eae1c7-1012-4e9f-8eba-4426c6c140c2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62ab1c98-29f7-4ccd-9f51-297f56ea2a58';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'context' => array(
        0 => 'context_year_month_1',
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
    $pane->uuid = '62ab1c98-29f7-4ccd-9f51-297f56ea2a58';
    $display->content['new-62ab1c98-29f7-4ccd-9f51-297f56ea2a58'] = $pane;
    $display->panels['left'][0] = 'new-62ab1c98-29f7-4ccd-9f51-297f56ea2a58';
    $pane = new stdClass();
    $pane->pid = 'new-5de80ee7-c186-44c4-87b1-57d6ceb3cf7b';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'TAGS',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5de80ee7-c186-44c4-87b1-57d6ceb3cf7b';
    $display->content['new-5de80ee7-c186-44c4-87b1-57d6ceb3cf7b'] = $pane;
    $display->panels['right'][0] = 'new-5de80ee7-c186-44c4-87b1-57d6ceb3cf7b';
    $pane = new stdClass();
    $pane->pid = 'new-22cee6cd-4db7-4166-a1c1-8f363d969560';
    $pane->panel = 'right';
    $pane->type = 'news_type_menu';
    $pane->subtype = 'news_type_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'News By:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '22cee6cd-4db7-4166-a1c1-8f363d969560';
    $display->content['new-22cee6cd-4db7-4166-a1c1-8f363d969560'] = $pane;
    $display->panels['right'][1] = 'new-22cee6cd-4db7-4166-a1c1-8f363d969560';
    $pane = new stdClass();
    $pane->pid = 'new-972f5190-b938-4c2f-8ea6-54d5b4be95ec';
    $pane->panel = 'right';
    $pane->type = 'news_archive_menu';
    $pane->subtype = 'news_archive_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'greybackground',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '972f5190-b938-4c2f-8ea6-54d5b4be95ec';
    $display->content['new-972f5190-b938-4c2f-8ea6-54d5b4be95ec'] = $pane;
    $display->panels['right'][2] = 'new-972f5190-b938-4c2f-8ea6-54d5b4be95ec';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-62ab1c98-29f7-4ccd-9f51-297f56ea2a58';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news_by_year'] = $page;

  return $pages;

}
