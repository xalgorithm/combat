<?php
/**
 * @file
 * slac_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function slac_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_panel_context';
  $handler->task = 'blog';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'sass' => array(
      'custom.user.mobile' => array(
        'columns' => '1',
        'gutter' => '0',
        'debug' => 0,
      ),
      'custom.user.desktop' => array(
        'columns' => '12',
        'gutter' => '10',
        'debug' => 1,
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col';
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
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'middle' => array(
      'style' => 'sass',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '91f8448f-c38b-4df9-8e15-8f07b1a69737';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70ddd72f-1329-4c06-bc98-bb701c8aa16e';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '70ddd72f-1329-4c06-bc98-bb701c8aa16e';
    $display->content['new-70ddd72f-1329-4c06-bc98-bb701c8aa16e'] = $pane;
    $display->panels['left'][0] = 'new-70ddd72f-1329-4c06-bc98-bb701c8aa16e';
    $pane = new stdClass();
    $pane->pid = 'new-c1f13f64-d987-4145-875e-f1b4da902fde';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1f13f64-d987-4145-875e-f1b4da902fde';
    $display->content['new-c1f13f64-d987-4145-875e-f1b4da902fde'] = $pane;
    $display->panels['right'][0] = 'new-c1f13f64-d987-4145-875e-f1b4da902fde';
    $pane = new stdClass();
    $pane->pid = 'new-0e4d2646-7665-4122-b175-3edb87f21aea';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '0e4d2646-7665-4122-b175-3edb87f21aea';
    $display->content['new-0e4d2646-7665-4122-b175-3edb87f21aea'] = $pane;
    $display->panels['right'][1] = 'new-0e4d2646-7665-4122-b175-3edb87f21aea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'blog_user_panel_context';
  $handler->task = 'blog_user';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Blog',
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
  $display->layout = 'two_col';
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
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_first_name %user:field_last_name';
  $display->uuid = 'e0be582b-f48b-4e05-ac04-286ccf764eb9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1b6d48b4-5ac1-424e-a975-77c4905e02db';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'context' => array(
        0 => '',
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
    $pane->uuid = '1b6d48b4-5ac1-424e-a975-77c4905e02db';
    $display->content['new-1b6d48b4-5ac1-424e-a975-77c4905e02db'] = $pane;
    $display->panels['left'][0] = 'new-1b6d48b4-5ac1-424e-a975-77c4905e02db';
    $pane = new stdClass();
    $pane->pid = 'new-636f07b8-9095-48d9-a9bc-26d76675d623';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '636f07b8-9095-48d9-a9bc-26d76675d623';
    $display->content['new-636f07b8-9095-48d9-a9bc-26d76675d623'] = $pane;
    $display->panels['right'][0] = 'new-636f07b8-9095-48d9-a9bc-26d76675d623';
    $pane = new stdClass();
    $pane->pid = 'new-98286dfd-89b6-454a-b49e-2d206b5f74fb';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '98286dfd-89b6-454a-b49e-2d206b5f74fb';
    $display->content['new-98286dfd-89b6-454a-b49e-2d206b5f74fb'] = $pane;
    $display->panels['right'][1] = 'new-98286dfd-89b6-454a-b49e-2d206b5f74fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['blog_user_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article Blog Page',
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
              'blog' => 'blog',
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
      'social_media' => NULL,
      'social_media_1' => NULL,
      'social_media_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '99fd1314-d7df-46bf-8049-3638b987e67a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-adfa6fef-b011-47b9-8b12-3dce5fc04b83';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_slac_blog_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'slac_blog_image_details',
        'image_link' => '',
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
    $pane->uuid = 'adfa6fef-b011-47b9-8b12-3dce5fc04b83';
    $display->content['new-adfa6fef-b011-47b9-8b12-3dce5fc04b83'] = $pane;
    $display->panels['left'][0] = 'new-adfa6fef-b011-47b9-8b12-3dce5fc04b83';
    $pane = new stdClass();
    $pane->pid = 'new-d04896a2-6982-4f0d-9fe3-15568d5eb3ac';
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
    $pane->uuid = 'd04896a2-6982-4f0d-9fe3-15568d5eb3ac';
    $display->content['new-d04896a2-6982-4f0d-9fe3-15568d5eb3ac'] = $pane;
    $display->panels['left'][1] = 'new-d04896a2-6982-4f0d-9fe3-15568d5eb3ac';
    $pane = new stdClass();
    $pane->pid = 'new-60a356ad-847e-49fa-b2c5-77e63a21c294';
    $pane->panel = 'left_author';
    $pane->type = 'node_author_sp';
    $pane->subtype = 'node_author_sp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'prefix' => 'Submitted by',
      'suffix' => '',
      'hide_if_anonymous' => 1,
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
    $pane->uuid = '60a356ad-847e-49fa-b2c5-77e63a21c294';
    $display->content['new-60a356ad-847e-49fa-b2c5-77e63a21c294'] = $pane;
    $display->panels['left_author'][0] = 'new-60a356ad-847e-49fa-b2c5-77e63a21c294';
    $pane = new stdClass();
    $pane->pid = 'new-de8f88b5-71c1-42be-9443-da8f98b8a326';
    $pane->panel = 'left_author';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
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
    $pane->uuid = 'de8f88b5-71c1-42be-9443-da8f98b8a326';
    $display->content['new-de8f88b5-71c1-42be-9443-da8f98b8a326'] = $pane;
    $display->panels['left_author'][1] = 'new-de8f88b5-71c1-42be-9443-da8f98b8a326';
    $pane = new stdClass();
    $pane->pid = 'new-6916edc4-724b-4ed7-b8de-9e8d59058de9';
    $pane->panel = 'left_title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '%node:title 1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6916edc4-724b-4ed7-b8de-9e8d59058de9';
    $display->content['new-6916edc4-724b-4ed7-b8de-9e8d59058de9'] = $pane;
    $display->panels['left_title'][0] = 'new-6916edc4-724b-4ed7-b8de-9e8d59058de9';
    $pane = new stdClass();
    $pane->pid = 'new-395e2c46-dbae-44d6-b0bc-6ec5c1ede6ed';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '395e2c46-dbae-44d6-b0bc-6ec5c1ede6ed';
    $display->content['new-395e2c46-dbae-44d6-b0bc-6ec5c1ede6ed'] = $pane;
    $display->panels['right'][0] = 'new-395e2c46-dbae-44d6-b0bc-6ec5c1ede6ed';
    $pane = new stdClass();
    $pane->pid = 'new-02a236f0-01be-4824-8f5b-1e937843537f';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => 'Tags',
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
    $pane->uuid = '02a236f0-01be-4824-8f5b-1e937843537f';
    $display->content['new-02a236f0-01be-4824-8f5b-1e937843537f'] = $pane;
    $display->panels['right'][1] = 'new-02a236f0-01be-4824-8f5b-1e937843537f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6916edc4-724b-4ed7-b8de-9e8d59058de9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Blog Tags',
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
              'slac_blog_tags' => 'slac_blog_tags',
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
  $display->layout = 'two_col';
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7d900d0d-0273-4e77-9344-1466b597ad96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5e916ed-4966-4618-8e08-c7ad90241b76';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Posts tagged with "%term:name"',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5e916ed-4966-4618-8e08-c7ad90241b76';
    $display->content['new-a5e916ed-4966-4618-8e08-c7ad90241b76'] = $pane;
    $display->panels['left'][0] = 'new-a5e916ed-4966-4618-8e08-c7ad90241b76';
    $pane = new stdClass();
    $pane->pid = 'new-1c142de1-2a97-4cf4-b4c3-3064d8332589';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c142de1-2a97-4cf4-b4c3-3064d8332589';
    $display->content['new-1c142de1-2a97-4cf4-b4c3-3064d8332589'] = $pane;
    $display->panels['right'][0] = 'new-1c142de1-2a97-4cf4-b4c3-3064d8332589';
    $pane = new stdClass();
    $pane->pid = 'new-a800da17-9f56-4ea7-8f55-13962644b214';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a800da17-9f56-4ea7-8f55-13962644b214';
    $display->content['new-a800da17-9f56-4ea7-8f55-13962644b214'] = $pane;
    $display->panels['right'][1] = 'new-a800da17-9f56-4ea7-8f55-13962644b214';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-a5e916ed-4966-4618-8e08-c7ad90241b76';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_a_new_blog_post_';
  $page->task = 'page';
  $page->admin_title = 'Add a new blog post.';
  $page->admin_description = '';
  $page->path = 'node/%node/add-blog-post';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 6,
            1 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_title',
        'settings' => array(
          'title' => 'Blog Posts',
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
    'title' => 'New Blog Post',
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
  $handler->name = 'page_add_a_new_blog_post__http_response';
  $handler->task = 'page';
  $handler->subtask = 'add_a_new_blog_post_';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/add/blog',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_a_new_blog_post_'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog_archive';
  $page->task = 'page';
  $page->admin_title = 'Blog Archive';
  $page->admin_description = '';
  $page->path = 'blog/archive';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_archive_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog_archive';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Blog Archive Year',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a91f8766-a2d9-45b7-811b-d8d8655c1efe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c70aedcc-ec6a-4a27-84b0-15ac1d541ae9';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'blog_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->uuid = 'c70aedcc-ec6a-4a27-84b0-15ac1d541ae9';
    $display->content['new-c70aedcc-ec6a-4a27-84b0-15ac1d541ae9'] = $pane;
    $display->panels['left'][0] = 'new-c70aedcc-ec6a-4a27-84b0-15ac1d541ae9';
    $pane = new stdClass();
    $pane->pid = 'new-8a9899fb-7f6e-49d0-8a09-3b80c25dd196';
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
    $pane->uuid = '8a9899fb-7f6e-49d0-8a09-3b80c25dd196';
    $display->content['new-8a9899fb-7f6e-49d0-8a09-3b80c25dd196'] = $pane;
    $display->panels['left_title'][0] = 'new-8a9899fb-7f6e-49d0-8a09-3b80c25dd196';
    $pane = new stdClass();
    $pane->pid = 'new-85806a41-4f43-4149-bd8d-14dc2115889d';
    $pane->panel = 'right';
    $pane->type = 'blog_archive_menu';
    $pane->subtype = 'blog_archive_menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85806a41-4f43-4149-bd8d-14dc2115889d';
    $display->content['new-85806a41-4f43-4149-bd8d-14dc2115889d'] = $pane;
    $display->panels['right'][0] = 'new-85806a41-4f43-4149-bd8d-14dc2115889d';
    $pane = new stdClass();
    $pane->pid = 'new-4f18b3b2-44e5-4889-b839-c6b46aabac98';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4f18b3b2-44e5-4889-b839-c6b46aabac98';
    $display->content['new-4f18b3b2-44e5-4889-b839-c6b46aabac98'] = $pane;
    $display->panels['right'][1] = 'new-4f18b3b2-44e5-4889-b839-c6b46aabac98';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-c70aedcc-ec6a-4a27-84b0-15ac1d541ae9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog_archive'] = $page;

  return $pages;

}
