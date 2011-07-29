<?php
/**
 * @file
 * zeppelin_inputformat.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function zeppelin_inputformat_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'video_filter' => array(
        'weight' => '-1',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '1',
          'video_filter_related' => '1',
          'video_filter_html5' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'spamspan' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: full html -wysiwyg
  $formats['full_html_wysiwyg'] = array(
    'format' => 'full_html_wysiwyg',
    'name' => 'full html -wysiwyg',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'video_filter' => array(
        'weight' => '-1',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '1',
          'video_filter_related' => '1',
          'video_filter_html5' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'spamspan' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'video_filter' => array(
        'weight' => '-1',
        'status' => '1',
        'settings' => array(
          'video_filter_width' => '400',
          'video_filter_height' => '400',
          'video_filter_autoplay' => '1',
          'video_filter_related' => '1',
          'video_filter_html5' => 1,
        ),
      ),
      'ds_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'spamspan' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '10',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
