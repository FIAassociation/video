<?php
/**
 * @file
 * video_all_requires.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video_all_requires_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function video_all_requires_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function video_all_requires_node_info() {
  $items = array(
    'video' => array(
      'name' => t('video'),
      'base' => 'node_content',
      'description' => t('金投的视频'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
