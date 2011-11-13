<?php
/**
 * @file
 * video_all_requires.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function video_all_requires_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:videos
  $menu_links['main-menu:videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => '精彩视频',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('精彩视频');


  return $menu_links;
}
