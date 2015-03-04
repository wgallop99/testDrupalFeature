<?php
/**
 * @file
 * wills_partners_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wills_partners_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wills_partners_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wills_partners_list_node_info() {
  $items = array(
    'customers' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('Customers who work with BF'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
