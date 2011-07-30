<?php
/**
 * @file
 * zeppelin_base.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function zeppelin_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
