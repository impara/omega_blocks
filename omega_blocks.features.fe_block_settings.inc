<?php
/**
 * @file
 * omega_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function omega_blocks_default_fe_block_settings() {
  $export = array();

  // oc_omega
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'oc_omega',
    'status' => 0,
    'weight' => '-19',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'oc_omega',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'oc_omega',
    'status' => 0,
    'weight' => '-17',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-21',
    'region' => 'footer_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-15',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-14',
    'region' => 'footer_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-15',
    'region' => 'footer_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'oc_omega',
    'status' => 0,
    'weight' => '-7',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Søg her',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-21',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-21',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'oc_omega',
    'status' => '1',
    'weight' => '-20',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['oc_omega'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
