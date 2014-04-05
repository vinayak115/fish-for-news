<?php
/**
 * @file
 * fn_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function fn_content_type_node_info() {
  $items = array(
    'edition' => array(
      'name' => t('Edition'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'guess_who' => array(
      'name' => t('Guess-Who'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Guess-Who'),
      'help' => '',
    ),
    'image_gallery' => array(
      'name' => t('Image-Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Image-Gallery'),
      'help' => '',
    ),
    'quiz' => array(
      'name' => t('Quiz'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Quiz'),
      'help' => '',
    ),
    'where_in_the_world' => array(
      'name' => t('Where in the World'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Where in the World'),
      'help' => '',
    ),
  );
  return $items;
}
