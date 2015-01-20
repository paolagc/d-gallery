<?php
/**
 * @file
 * com_gallery.default_video_embed_styles.inc
 */

/**
 * Implements hook_default_video_embed_styles().
 */
function com_gallery_default_video_embed_styles() {
  $export = array();

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'three_columns_380x380_';
  $video_embed_style->title = 'Three columns';
  $video_embed_style->data = array(
    'youtube' => array(
      'width' => '340',
      'height' => '340',
      'theme' => 'dark',
      'autoplay' => 0,
      'vq' => 'large',
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '3',
      'controls' => '2',
      'autohide' => '2',
    ),
    'vimeo' => array(
      'width' => '340',
      'height' => '360',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
      'froogaloop' => 0,
    ),
    'data__active_tab' => 'edit-data-vimeo',
  );
  $export['three_columns_380x380_'] = $video_embed_style;

  return $export;
}
