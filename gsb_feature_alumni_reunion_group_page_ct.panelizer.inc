<?php
/**
 * @file
 * gsb_feature_alumni_reunion_group_page_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_alumni_reunion_group_page_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'alumni_reunion_group_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:alumni_reunion_group_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0f55349f-460f-45fd-9b43-9e53e9f55a1a';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:alumni_reunion_group_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54098c2e-8592-472a-8b50-5de2bed5c521';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
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
  $pane->uuid = '54098c2e-8592-472a-8b50-5de2bed5c521';
  $display->content['new-54098c2e-8592-472a-8b50-5de2bed5c521'] = $pane;
  $display->panels['fullheader'][0] = 'new-54098c2e-8592-472a-8b50-5de2bed5c521';
  $pane = new stdClass();
  $pane->pid = 'new-a0f57d17-d077-4e42-ae53-2dee64104008';
  $pane->panel = 'fullheader';
  $pane->type = 'views_panes';
  $pane->subtype = 'gsb_alumni_agenda_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a0f57d17-d077-4e42-ae53-2dee64104008';
  $display->content['new-a0f57d17-d077-4e42-ae53-2dee64104008'] = $pane;
  $display->panels['fullheader'][1] = 'new-a0f57d17-d077-4e42-ae53-2dee64104008';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:alumni_reunion_group_page:default'] = $panelizer;

  return $export;
}
