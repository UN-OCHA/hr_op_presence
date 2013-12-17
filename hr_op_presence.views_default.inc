<?php
/**
 * @file
 * hr_op_presence.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_op_presence_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'op_presence';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_user_profiles';
  $view->human_name = 'Operational Presence';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Indexed Profile: Opt-out */
  $handler->display->display_options['filters']['field_opt_out']['id'] = 'field_opt_out';
  $handler->display->display_options['filters']['field_opt_out']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['field_opt_out']['field'] = 'field_opt_out';
  $handler->display->display_options['filters']['field_opt_out']['operator'] = '<>';
  $handler->display->display_options['filters']['field_opt_out']['value'] = array(
    1 => '1',
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'master');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  /* Field: Indexed Profile: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['path'] = 'operational-presence';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  /* Field: Indexed Profile: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['path'] = 'operational-presence/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'operational-presence/list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: PDF */
  $handler = $view->new_display('pdf', 'PDF', 'pdf');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organization_type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
    1 => array(
      'field' => 'field_organizations',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['row_options']['formats'] = array(
    'field_organization_type' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '14',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => 'C',
        'hyphenate' => NULL,
        'color' => '717171',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_organizations' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => array(
          'b' => 'b',
          'u' => 'u',
          'i' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '1174BA',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_last_name' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => array(
          'b' => 'b',
          'i' => 0,
          'u' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '000000',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_clusters' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '2',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_job_title' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '2',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '000000',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_email' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '2',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '000000',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'field_phones' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '2',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '000000',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '0',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
    'page_break' => array(
      'position' => array(
        'object' => 'last_position',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => NULL,
        'color' => '',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'bypass_eval_before' => 0,
        'eval_after' => '',
        'bypass_eval_after' => 0,
      ),
    ),
  );
  $handler->display->display_options['row_options']['leading_template'] = '0';
  $handler->display->display_options['row_options']['template'] = '0';
  $handler->display->display_options['row_options']['succeed_template'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div></div>
<div style="background-color: #026BB6; color: #FFFFFF;">
<span style="font-weight: bold;">Humanitarian Contacts List</span><br />
[current-date:custom:d] [current-date:custom:F] [current-date:custom:Y] - [site:slogan]
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div style="text-align: center; font-size: small; font-style: italic;">Page {:pnp:} of {:ptp:}</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Profile: Organization */
  $handler->display->display_options['relationships']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['relationships']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['relationship'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Taxonomy term: Acronym */
  $handler->display->display_options['fields']['field_organization_acronym']['id'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['field_organization_acronym']['field'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['relationship'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organization_acronym']['label'] = '';
  $handler->display->display_options['fields']['field_organization_acronym']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_acronym']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_acronym']['alter']['text'] = '([field_organization_acronym])';
  $handler->display->display_options['fields']['field_organization_acronym']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_acronym']['hide_empty'] = TRUE;
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_organizations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['text'] = '[field_organizations] [field_organization_acronym]';
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizations']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = '';
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  /* Field: Indexed Profile: Telephone(s) */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['label'] = '';
  $handler->display->display_options['fields']['field_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phones']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'raw' => 1,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  /* Field: PDF: Page Break */
  $handler->display->display_options['fields']['page_break']['id'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['table'] = 'pdf';
  $handler->display->display_options['fields']['page_break']['field'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['label'] = '';
  $handler->display->display_options['fields']['page_break']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_break']['last_row'] = 0;
  $handler->display->display_options['fields']['page_break']['every_nth'] = '10';
  $handler->display->display_options['path'] = 'operational-presence/pdf';
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
    'default' => 0,
    'master' => 0,
    'table' => 0,
    'map' => 0,
  );
  $handler->display->display_options['margin_top'] = '22';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = '0';
  $handler->display->display_options['succeed_template'] = '0';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );

  /* Display: PDF Table */
  $handler = $view->new_display('pdf', 'PDF Table', 'pdf_table');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_table';
  $handler->display->display_options['style_options']['info'] = array(
    'field_clusters' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_locations' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_organizations' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_first_name' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_last_name' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_job_title' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_email' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
    'field_phones' => array(
      'header_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => array(
            'b' => 'b',
            'i' => 0,
            'u' => 0,
            'd' => 0,
            'o' => 0,
          ),
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'body_style' => array(
        'text' => array(
          'font_size' => '',
          'font_family' => 'default',
          'font_style' => NULL,
          'align' => NULL,
          'hyphenate' => NULL,
          'color' => '',
        ),
        'render' => array(
          'is_html' => 1,
          'eval_before' => '',
          'eval_after' => '',
        ),
      ),
      'position' => array(
        'width' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['position'] = array(
    'last_writing_position' => 1,
    'x' => '10',
    'y' => '25',
    'width' => '',
    'row_height' => '20',
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div></div>
<div style="background-color: #026BB6; color: #FFFFFF;">
<span style="font-weight: bold;">Humanitarian Contacts List</span><br />
[current-date:custom:d] [current-date:custom:F] [current-date:custom:Y] - [site:slogan]
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div style="text-align: center; font-size: small; font-style: italic;">Page {:pnp:} of {:ptp:}</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Profile: Organization */
  $handler->display->display_options['relationships']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['relationships']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_clusters']['bypass_access'] = 0;
  /* Field: Indexed Profile: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_locations']['bypass_access'] = 0;
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['alter']['text'] = '[field_organizations] [field_organization_acronym]';
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organizations']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = 'First Name';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Last Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_job_title']['bypass_access'] = 0;
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Indexed Profile: Telephone(s) */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['label'] = 'Telephones';
  $handler->display->display_options['fields']['field_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phones']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phones']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'raw' => 1,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'operational-presence/table/pdf';
  $handler->display->display_options['displays'] = array(
    'master' => 'master',
    'table' => 'table',
    'default' => 0,
    'list' => 0,
    'map' => 0,
  );
  $handler->display->display_options['default_page_orientation'] = 'L';
  $handler->display->display_options['margin_top'] = '22';
  $handler->display->display_options['leading_template'] = '0';
  $handler->display->display_options['template'] = '0';
  $handler->display->display_options['succeed_template'] = '0';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['default_font_size'] = '9';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'csv');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Profile: Organization */
  $handler->display->display_options['relationships']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['relationships']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  /* Field: Indexed Profile: Salutation */
  $handler->display->display_options['fields']['field_salutation']['id'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_salutation']['field'] = 'field_salutation';
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Indexed Profile: Telephone(s) */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['label'] = 'Telephones';
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'raw' => 1,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phones']['separator'] = ';';
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  /* Field: Organization: Type (indexed) */
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['id'] = 'field_organizations_field_organization_type';
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['field'] = 'field_organizations_field_organization_type';
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations_field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  /* Field: Indexed Profile: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  /* Field: Indexed Profile: Coordination Hub */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_coordination_hubs']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_coordination_hubs']['view_mode'] = 'full';
  /* Field: Indexed Profile: Funding */
  $handler->display->display_options['fields']['field_fundings']['id'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_fundings']['field'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['label'] = 'Fundings';
  $handler->display->display_options['fields']['field_fundings']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_fundings']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fundings']['view_mode'] = 'full';
  /* Field: Indexed Profile: Theme(s) */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_themes']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_themes']['view_mode'] = 'full';
  /* Field: Indexed Profile: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_emergencies']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_emergencies']['view_mode'] = 'full';
  $handler->display->display_options['path'] = 'operational-presence/csv';
  $handler->display->display_options['displays'] = array(
    'master' => 'master',
    'list' => 'list',
    'table' => 'table',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: MAIL */
  $handler = $view->new_display('views_data_export', 'MAIL', 'txt');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_txt';
  $handler->display->display_options['style_options']['attach_text'] = 'MAIL';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '[field_email],';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['path'] = 'operational-presence/mail';
  $handler->display->display_options['displays'] = array(
    'master' => 'master',
    'list' => 'list',
    'table' => 'table',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'camel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['separator'] = '';
  $handler->display->display_options['fields']['pid']['link_to_entity'] = 0;
  /* Field: Indexed Profile: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_clusters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_clusters']['view_mode'] = 'full';
  /* Field: Indexed Profile: Salutation */
  $handler->display->display_options['fields']['field_salutation']['id'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_salutation']['field'] = 'field_salutation';
  /* Field: Indexed Profile: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Indexed Profile: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Indexed Profile: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Indexed Profile: Telephone(s) */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['label'] = 'Telephones';
  $handler->display->display_options['fields']['field_phones']['element_type'] = '0';
  $handler->display->display_options['fields']['field_phones']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_phones']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'raw' => 1,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phones']['separator'] = ';';
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  /* Field: Indexed Profile: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  /* Field: Indexed Profile: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  /* Field: Indexed Profile: Coordination Hub */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_coordination_hubs']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_coordination_hubs']['view_mode'] = 'full';
  /* Field: Indexed Profile: Funding */
  $handler->display->display_options['fields']['field_fundings']['id'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_fundings']['field'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['label'] = 'Fundings';
  $handler->display->display_options['fields']['field_fundings']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_fundings']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fundings']['view_mode'] = 'full';
  /* Field: Indexed Profile: Theme(s) */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['label'] = 'Themes';
  $handler->display->display_options['fields']['field_themes']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_themes']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_themes']['view_mode'] = 'full';
  /* Field: Indexed Profile: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_emergencies']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_emergencies']['view_mode'] = 'full';
  $handler->display->display_options['path'] = 'operational-presence/xml';
  $handler->display->display_options['displays'] = array(
    'master' => 'master',
    'list' => 'list',
    'table' => 'table',
    'default' => 0,
  );

  /* Display: Map Data */
  $handler = $view->new_display('openlayers', 'Map Data', 'map_data');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'search_api_views_cache';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_organizations',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_locations_field_location_lat',
    'other_lon' => 'field_locations_field_location_lon',
    'wkt' => 'field_organizations',
    'other_top' => 'field_organizations',
    'other_right' => 'field_organizations',
    'other_bottom' => 'field_organizations',
    'other_left' => 'field_organizations',
    'name_field' => '',
    'description_field' => '',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Profile: Location */
  $handler->display->display_options['relationships']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['relationships']['field_locations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['relationships']['field_locations']['field'] = 'field_locations';
  /* Relationship: Indexed Profile: Organization */
  $handler->display->display_options['relationships']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['relationships']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['relationships']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_organizations';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['link_to_entity'] = 0;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_locations';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  $handler->display->display_options['fields']['tid_1']['link_to_entity'] = 0;
  /* Field: Indexed Profile: Organization */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_organizations']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['path'] = 'operational-presence/list/organization/[tid]/location/[tid_1]';
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizations']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  /* Field: Location » Location: Latitude (indexed) */
  $handler->display->display_options['fields']['field_locations_field_location_lat']['id'] = 'field_locations_field_location_lat';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['field'] = 'field_locations_field_location_lat';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['label'] = '';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations_field_location_lat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_locations_field_location_lat']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_locations_field_location_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_locations_field_location_lat']['link_to_entity'] = 0;
  /* Field: Location » Location: Longitude (indexed) */
  $handler->display->display_options['fields']['field_locations_field_location_lon']['id'] = 'field_locations_field_location_lon';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['field'] = 'field_locations_field_location_lon';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['label'] = '';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations_field_location_lon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_locations_field_location_lon']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_locations_field_location_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_locations_field_location_lon']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Location » Location: Latitude (indexed) */
  $handler->display->display_options['filters']['field_locations_field_location_lat']['id'] = 'field_locations_field_location_lat';
  $handler->display->display_options['filters']['field_locations_field_location_lat']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['field_locations_field_location_lat']['field'] = 'field_locations_field_location_lat';
  $handler->display->display_options['filters']['field_locations_field_location_lat']['operator'] = 'not empty';
  /* Filter criterion: Location » Location: Latitude (indexed) */
  $handler->display->display_options['filters']['field_locations_field_location_lat_1']['id'] = 'field_locations_field_location_lat_1';
  $handler->display->display_options['filters']['field_locations_field_location_lat_1']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['field_locations_field_location_lat_1']['field'] = 'field_locations_field_location_lat';
  $handler->display->display_options['filters']['field_locations_field_location_lat_1']['operator'] = '<>';
  $handler->display->display_options['filters']['field_locations_field_location_lat_1']['value'] = '0';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operational Presence (Experimental)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'op_presence';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'This map is still EXPERIMENTAL and has known issues, such as organizations appearing as duplicate in the popups. We are working on it to provide a more stable version.';
  $handler->display->display_options['header']['area']['format'] = 'simple';
  $handler->display->display_options['path'] = 'operational-presence/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Graphs */
  $handler = $view->new_display('page', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Profile: Opt-out */
  $handler->display->display_options['filters']['field_opt_out']['id'] = 'field_opt_out';
  $handler->display->display_options['filters']['field_opt_out']['table'] = 'search_api_index_user_profiles';
  $handler->display->display_options['filters']['field_opt_out']['field'] = 'field_opt_out';
  $handler->display->display_options['filters']['field_opt_out']['operator'] = '<>';
  $handler->display->display_options['filters']['field_opt_out']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'operational-presence/graphs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Graphs';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['op_presence'] = array(
    t('Master'),
    t('Contacts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Clusters'),
    t('First name'),
    t('Last name'),
    t('Email'),
    t('Job Title'),
    t('Organization'),
    t('Location'),
    t('Table'),
    t('List'),
    t('PDF'),
    t('<div></div>
<div style="background-color: #026BB6; color: #FFFFFF;">
<span style="font-weight: bold;">Humanitarian Contacts List</span><br />
[current-date:custom:d] [current-date:custom:F] [current-date:custom:Y] - [site:slogan]
</div>'),
    t('<div style="text-align: center; font-size: small; font-style: italic;">Page {:pnp:} of {:ptp:}</div>'),
    t('([field_organization_acronym])'),
    t('[field_organizations] [field_organization_acronym]'),
    t('[field_first_name] [field_last_name]'),
    t('PDF Table'),
    t('<div></div>
<div style="background-color: #026BB6; color: #FFFFFF;">
<span style="font-weight: bold;">Humanitarian Contacts List</span><br />
[current-date:custom:d] [current-date:custom:F] [current-date:custom:Y] - [site:slogan]
</div>'),
    t('First Name'),
    t('Last Name'),
    t('Telephones'),
    t('CSV'),
    t('Salutation'),
    t('Organization Type'),
    t('Coordination Hub'),
    t('Fundings'),
    t('Theme(s)'),
    t('Emergencies'),
    t('MAIL'),
    t('[field_email],'),
    t('XML'),
    t('Profile ID'),
    t('.'),
    t('Themes'),
    t('Map Data'),
    t('Map'),
    t('Operational Presence (Experimental)'),
    t('This map is still EXPERIMENTAL and has known issues, such as organizations appearing as duplicate in the popups. We are working on it to provide a more stable version.'),
    t('Graphs'),
  );
  $export['op_presence'] = $view;

  return $export;
}
