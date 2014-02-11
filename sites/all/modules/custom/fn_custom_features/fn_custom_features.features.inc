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
      'description' => t('Content type for updating and publishing articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'base' => 'node_content',
      'description' => t('This is used for the image gallery section of an article'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
