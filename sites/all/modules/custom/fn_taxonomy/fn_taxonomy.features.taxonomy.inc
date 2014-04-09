<?php
/**
 * @file
 * fn_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fn_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'framed' => array(
      'name' => 'Framed',
      'machine_name' => 'framed',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'happenings' => array(
      'name' => 'Happenings',
      'machine_name' => 'happenings',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'kaledoscop' => array(
      'name' => 'Viva Goem',
      'machine_name' => 'kaledoscop',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'kaledoscope' => array(
      'name' => 'Kaledoscope',
      'machine_name' => 'kaledoscope',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'techno_bytes' => array(
      'name' => 'Techno Bytes',
      'machine_name' => 'techno_bytes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
