<?php
/**
 * @file
 * ding_content.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ding_content_filter_default_formats() {
  $formats = array();

  // Exported format: Wysiwyg.
  $formats['ding_wysiwyg'] = array(
    'format' => 'ding_wysiwyg',
    'name' => 'Wysiwyg',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h1> <h2> <h3> <h4> <h5> <h6> <table> <thead> <tbody> <td> <tr> <th> <a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br> <div> <del> <ins> <hr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
