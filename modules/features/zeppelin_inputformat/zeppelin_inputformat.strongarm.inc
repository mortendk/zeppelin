<?php
/**
 * @file
 * zeppelin_inputformat.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function zeppelin_inputformat_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_custom_content';
  $strongarm->value = array(
    'imce_mkdir_content' => 1,
  );
  $export['imce_custom_content'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_custom_process';
  $strongarm->value = array(
    'imce_mkdir_process_profile' => 1,
  );
  $export['imce_custom_process'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
      'mkdirnum' => 0,
    ),
    2 => array(
      'name' => 'base',
      'usertab' => 1,
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => '1',
      'directories' => array(
        0 => array(
          'name' => 'imceu-u%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
        1 => array(
          'name' => 'imce',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
      'mkdirnum' => '2',
    ),
    3 => array(
      'name' => 'user',
      'usertab' => 1,
      'filesize' => '1',
      'quota' => '5',
      'tuquota' => '0',
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => '1',
      'directories' => array(
        0 => array(
          'name' => 'imce-u%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
      'mkdirnum' => '2',
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    3 => array(
      'weight' => '0',
      'public_pid' => '2',
      'private_pid' => 0,
    ),
    4 => array(
      'weight' => '0',
      'public_pid' => 0,
      'private_pid' => 0,
    ),
    5 => array(
      'weight' => '0',
      'public_pid' => '3',
      'private_pid' => 0,
    ),
    2 => array(
      'weight' => 11,
      'public_pid' => 0,
      'private_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'public_pid' => 0,
      'private_pid' => 0,
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  return $export;
}
