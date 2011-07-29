<?php
/**
 * @file
 * zeppelin_user.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function zeppelin_user_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
