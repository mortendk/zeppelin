<?php
/**
 * @file
 * zeppelin_base_setup.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function zeppelin_base_setup_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
