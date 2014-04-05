<?php
/**
 * @file
 * fn_custom_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fn_custom_features_node_info() {
  $items = array(
    'articles' => array(
      'name' => t('Articles'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
