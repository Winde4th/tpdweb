<?php
/**
 * @file
 * ct_book.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ct_book_image_default_styles() {
  $styles = array();

  // Exported image style: couverture.
  $styles['couverture'] = array(
    'label' => 'couverture',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 300,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ct_book_node_info() {
  $items = array(
    'livre' => array(
      'name' => t('Livre'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
