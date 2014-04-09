<?php
/**
 * @file
 * fn_taxonomy.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fn_taxonomy_node_info() {
  $items = array(
    'edition' => array(
      'name' => t('Editions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
