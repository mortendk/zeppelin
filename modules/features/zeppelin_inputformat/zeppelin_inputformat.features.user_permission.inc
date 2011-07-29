<?php
/**
 * @file
 * zeppelin_inputformat.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function zeppelin_inputformat_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer imce
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(),
  );

  // Exported permission: show format selection for node
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
  );

  // Exported permission: show format selection for user
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
  );

  // Exported permission: use text format full_html
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(),
  );

  // Exported permission: use text format full_html_wysiwyg
  $permissions['use text format full_html_wysiwyg'] = array(
    'name' => 'use text format full_html_wysiwyg',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format markdown
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
