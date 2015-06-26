<?php
/**
 * @file
 * dlts_book_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dlts_book_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access dlts site metadata'.
  $permissions['access dlts site metadata'] = array(
    'name' => 'access dlts site metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata bypass'.
  $permissions['access dlts site metadata bypass'] = array(
    'name' => 'access dlts site metadata bypass',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_abstract'.
  $permissions['access dlts site metadata collection_abstract'] = array(
    'name' => 'access dlts site metadata collection_abstract',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_call_number'.
  $permissions['access dlts site metadata collection_call_number'] = array(
    'name' => 'access dlts site metadata collection_call_number',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_code'.
  $permissions['access dlts site metadata collection_code'] = array(
    'name' => 'access dlts site metadata collection_code',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_creator'.
  $permissions['access dlts site metadata collection_creator'] = array(
    'name' => 'access dlts site metadata collection_creator',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_id'.
  $permissions['access dlts site metadata collection_id'] = array(
    'name' => 'access dlts site metadata collection_id',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_title'.
  $permissions['access dlts site metadata collection_title'] = array(
    'name' => 'access dlts site metadata collection_title',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata collection_type'.
  $permissions['access dlts site metadata collection_type'] = array(
    'name' => 'access dlts site metadata collection_type',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata partner_code'.
  $permissions['access dlts site metadata partner_code'] = array(
    'name' => 'access dlts site metadata partner_code',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access dlts site metadata partner_name'.
  $permissions['access dlts site metadata partner_name'] = array(
    'name' => 'access dlts site metadata partner_name',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_site_metadata',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dlts'.
  $permissions['administer dlts'] = array(
    'name' => 'administer dlts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dlts_image',
  );

  // Exported permission: 'administer dlts utilities'.
  $permissions['administer dlts utilities'] = array(
    'name' => 'administer dlts utilities',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'dlts_utilities',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_book content'.
  $permissions['create dlts_book content'] = array(
    'name' => 'create dlts_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_book_page content'.
  $permissions['create dlts_book_page content'] = array(
    'name' => 'create dlts_book_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_book_section content'.
  $permissions['create dlts_book_section content'] = array(
    'name' => 'create dlts_book_section content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_book_stitched_page content'.
  $permissions['create dlts_book_stitched_page content'] = array(
    'name' => 'create dlts_book_stitched_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_collection content'.
  $permissions['create dlts_collection content'] = array(
    'name' => 'create dlts_collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_map content'.
  $permissions['create dlts_map content'] = array(
    'name' => 'create dlts_map content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_map_page content'.
  $permissions['create dlts_map_page content'] = array(
    'name' => 'create dlts_map_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_multivol content'.
  $permissions['create dlts_multivol content'] = array(
    'name' => 'create dlts_multivol content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_multivol_book content'.
  $permissions['create dlts_multivol_book content'] = array(
    'name' => 'create dlts_multivol_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_partner content'.
  $permissions['create dlts_partner content'] = array(
    'name' => 'create dlts_partner content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_series content'.
  $permissions['create dlts_series content'] = array(
    'name' => 'create dlts_series content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dlts_series_book content'.
  $permissions['create dlts_series_book content'] = array(
    'name' => 'create dlts_series_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_book content'.
  $permissions['delete any dlts_book content'] = array(
    'name' => 'delete any dlts_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_book_page content'.
  $permissions['delete any dlts_book_page content'] = array(
    'name' => 'delete any dlts_book_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_book_section content'.
  $permissions['delete any dlts_book_section content'] = array(
    'name' => 'delete any dlts_book_section content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_book_stitched_page content'.
  $permissions['delete any dlts_book_stitched_page content'] = array(
    'name' => 'delete any dlts_book_stitched_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_collection content'.
  $permissions['delete any dlts_collection content'] = array(
    'name' => 'delete any dlts_collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_map content'.
  $permissions['delete any dlts_map content'] = array(
    'name' => 'delete any dlts_map content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_map_page content'.
  $permissions['delete any dlts_map_page content'] = array(
    'name' => 'delete any dlts_map_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_multivol content'.
  $permissions['delete any dlts_multivol content'] = array(
    'name' => 'delete any dlts_multivol content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_multivol_book content'.
  $permissions['delete any dlts_multivol_book content'] = array(
    'name' => 'delete any dlts_multivol_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_partner content'.
  $permissions['delete any dlts_partner content'] = array(
    'name' => 'delete any dlts_partner content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_series content'.
  $permissions['delete any dlts_series content'] = array(
    'name' => 'delete any dlts_series content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dlts_series_book content'.
  $permissions['delete any dlts_series_book content'] = array(
    'name' => 'delete any dlts_series_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_book content'.
  $permissions['delete own dlts_book content'] = array(
    'name' => 'delete own dlts_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_book_page content'.
  $permissions['delete own dlts_book_page content'] = array(
    'name' => 'delete own dlts_book_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_book_section content'.
  $permissions['delete own dlts_book_section content'] = array(
    'name' => 'delete own dlts_book_section content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_book_stitched_page content'.
  $permissions['delete own dlts_book_stitched_page content'] = array(
    'name' => 'delete own dlts_book_stitched_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_collection content'.
  $permissions['delete own dlts_collection content'] = array(
    'name' => 'delete own dlts_collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_map content'.
  $permissions['delete own dlts_map content'] = array(
    'name' => 'delete own dlts_map content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_map_page content'.
  $permissions['delete own dlts_map_page content'] = array(
    'name' => 'delete own dlts_map_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_multivol content'.
  $permissions['delete own dlts_multivol content'] = array(
    'name' => 'delete own dlts_multivol content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_multivol_book content'.
  $permissions['delete own dlts_multivol_book content'] = array(
    'name' => 'delete own dlts_multivol_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_partner content'.
  $permissions['delete own dlts_partner content'] = array(
    'name' => 'delete own dlts_partner content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_series content'.
  $permissions['delete own dlts_series content'] = array(
    'name' => 'delete own dlts_series content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dlts_series_book content'.
  $permissions['delete own dlts_series_book content'] = array(
    'name' => 'delete own dlts_series_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in geographic_subject'.
  $permissions['delete terms in geographic_subject'] = array(
    'name' => 'delete terms in geographic_subject',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subjects'.
  $permissions['delete terms in subjects'] = array(
    'name' => 'delete terms in subjects',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in subjects_ar'.
  $permissions['delete terms in subjects_ar'] = array(
    'name' => 'delete terms in subjects_ar',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_book content'.
  $permissions['edit any dlts_book content'] = array(
    'name' => 'edit any dlts_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_book_page content'.
  $permissions['edit any dlts_book_page content'] = array(
    'name' => 'edit any dlts_book_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_book_section content'.
  $permissions['edit any dlts_book_section content'] = array(
    'name' => 'edit any dlts_book_section content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_book_stitched_page content'.
  $permissions['edit any dlts_book_stitched_page content'] = array(
    'name' => 'edit any dlts_book_stitched_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_collection content'.
  $permissions['edit any dlts_collection content'] = array(
    'name' => 'edit any dlts_collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_map content'.
  $permissions['edit any dlts_map content'] = array(
    'name' => 'edit any dlts_map content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_map_page content'.
  $permissions['edit any dlts_map_page content'] = array(
    'name' => 'edit any dlts_map_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_multivol content'.
  $permissions['edit any dlts_multivol content'] = array(
    'name' => 'edit any dlts_multivol content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_multivol_book content'.
  $permissions['edit any dlts_multivol_book content'] = array(
    'name' => 'edit any dlts_multivol_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_partner content'.
  $permissions['edit any dlts_partner content'] = array(
    'name' => 'edit any dlts_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_series content'.
  $permissions['edit any dlts_series content'] = array(
    'name' => 'edit any dlts_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dlts_series_book content'.
  $permissions['edit any dlts_series_book content'] = array(
    'name' => 'edit any dlts_series_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own dlts_book content'.
  $permissions['edit own dlts_book content'] = array(
    'name' => 'edit own dlts_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_book_page content'.
  $permissions['edit own dlts_book_page content'] = array(
    'name' => 'edit own dlts_book_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_book_section content'.
  $permissions['edit own dlts_book_section content'] = array(
    'name' => 'edit own dlts_book_section content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_book_stitched_page content'.
  $permissions['edit own dlts_book_stitched_page content'] = array(
    'name' => 'edit own dlts_book_stitched_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_collection content'.
  $permissions['edit own dlts_collection content'] = array(
    'name' => 'edit own dlts_collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_map content'.
  $permissions['edit own dlts_map content'] = array(
    'name' => 'edit own dlts_map content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_map_page content'.
  $permissions['edit own dlts_map_page content'] = array(
    'name' => 'edit own dlts_map_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_multivol content'.
  $permissions['edit own dlts_multivol content'] = array(
    'name' => 'edit own dlts_multivol content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_multivol_book content'.
  $permissions['edit own dlts_multivol_book content'] = array(
    'name' => 'edit own dlts_multivol_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_partner content'.
  $permissions['edit own dlts_partner content'] = array(
    'name' => 'edit own dlts_partner content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_series content'.
  $permissions['edit own dlts_series content'] = array(
    'name' => 'edit own dlts_series content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dlts_series_book content'.
  $permissions['edit own dlts_series_book content'] = array(
    'name' => 'edit own dlts_series_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in geographic_subject'.
  $permissions['edit terms in geographic_subject'] = array(
    'name' => 'edit terms in geographic_subject',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subjects'.
  $permissions['edit terms in subjects'] = array(
    'name' => 'edit terms in subjects',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in subjects_ar'.
  $permissions['edit terms in subjects_ar'] = array(
    'name' => 'edit terms in subjects_ar',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'request book metadata'.
  $permissions['request book metadata'] = array(
    'name' => 'request book metadata',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'dlts_book_api',
  );

  // Exported permission: 'request oembed'.
  $permissions['request oembed'] = array(
    'name' => 'request oembed',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'dlts_book_api',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'collection curator' => 'collection curator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unique_field_perm_admin'.
  $permissions['unique_field_perm_admin'] = array(
    'name' => 'unique_field_perm_admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'unique_field_perm_bypass'.
  $permissions['unique_field_perm_bypass'] = array(
    'name' => 'unique_field_perm_bypass',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'collection curator' => 'collection curator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
