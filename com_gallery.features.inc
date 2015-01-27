<?php
/**
 * @file
 * com_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function com_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function com_gallery_views_api($module = NULL, $api = NULL) {
  $path = drupal_get_path('module', 'com_gallery');
  return array(
    'api' => 3,
    'path' => $path,
    'template path' => $path . '/templates' ,
  );
}

/**
 * Implements hook_image_default_styles().
 */
function com_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: three_columns_340x340_.
  $styles['three_columns_340x340_'] = array(
    'name' => 'three_columns_340x340_',
    'label' => 'Three columns(340x340)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function com_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Masonry gallery for image, videos...'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
