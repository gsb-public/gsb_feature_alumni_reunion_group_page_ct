<?php
/**
 * @file
 * gsb_feature_alumni_reunion_group_page_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_alumni_reunion_group_page_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__alumni_reunion_group_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_alumni_reunion_group_page';
  $strongarm->value = array();
  $export['menu_options_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_alumni_reunion_group_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_alumni_reunion_group_page';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_alumni_reunion_group_page';
  $strongarm->value = '0';
  $export['node_preview_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_alumni_reunion_group_page';
  $strongarm->value = 0;
  $export['node_submitted_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_alumni_reunion_group_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'ical' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'views_content_pane' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'event_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'event_upcoming' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_latest_stories' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_related' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_top_stories' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'insight_featured_card' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'megamenu' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'news_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'people_fpp' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'phd_job_market_candidate' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'media_contact' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'revision' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_alumni_reunion_group_page_pattern';
  $strongarm->value = 'alumni/reunions/[node:title]';
  $export['pathauto_node_alumni_reunion_group_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_alumni_reunion_group_page';
  $strongarm->value = 0;
  $export['workbench_access_node_type_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_alumni_reunion_group_page';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_alumni_reunion_group_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_alumni_reunion_group_page';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_alumni_reunion_group_page'] = $strongarm;

  return $export;
}
