<?php

function coockieconsent_admin($form, &$form_state) {
  $cookie_message = 'This website uses cookies to ensure you get the best experience on our website';

  //Cookie position
  $form['cookieconsent_position'] = [
    '#type' => 'fieldset',
    '#title' => t('Position'),
    '#description' => t('Select position cookie'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];

  $cookieconsent_positions = [
    'bottom' => 'Banner bottom',
    'top' => 'Banner top',
    'bottom-left' => "Floating left",
    'bottom-right' => "Floating right",
  ];

  $form['cookieconsent_position']['cookieconsent_select_position'] = [
    '#type' => 'select',
    '#default_value' => variable_get('cookieconsent_select_position') ? variable_get('cookieconsent_select_position') : 'bottom',
    '#options' => $cookieconsent_positions,
    '#required' => TRUE,
  ];

  //Cookie Layouts
  $form['cookieconsent_layout'] = [
    '#type' => 'fieldset',
    '#title' => t('Layout'),
    '#description' => t('Select layout cookie'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];

  $cookieconsent_layouts = [
    'block' => 'Block',
    'edgeless' => 'Edgeless',
    'classic' => 'Classic',
    'wire' => 'Wire',
  ];

  $form['cookieconsent_layout']['cookieconsent_radios_layout'] = [
    '#type' => 'radios',
    '#options' => $cookieconsent_layouts,
    '#default_value' => variable_get('cookieconsent_radios_layout', TRUE),
    '#required' => TRUE,
  ];

  //Cookie palette
  $form['cookieconsent_palette'] = [
    '#type' => 'fieldset',
    '#title' => t('Palette'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];

  $form['cookieconsent_palette']['cookieconsent_color_banner'] = [
    '#type' => 'textfield',
    '#title' => 'Color banner',
    '#placeholder' => '#fff',
    '#default_value' => variable_get('cookieconsent_color_banner') ? variable_get('cookieconsent_color_banner') : '#000000',
    '#size' => 30,
  ];

  $form['cookieconsent_palette']['cookieconsent_color_banner_text'] = [
    '#type' => 'textfield',
    '#title' => 'Color banner text',
    '#default_value' => variable_get('cookieconsent_color_banner_text') ? variable_get('cookieconsent_color_banner_text') : '#ffffff',
    '#size' => 30,
  ];

  $form['cookieconsent_palette']['cookieconsent_color_button'] = [
    '#type' => 'textfield',
    '#title' => 'Color button',
    '#default_value' => variable_get('cookieconsent_color_button') ? variable_get('cookieconsent_color_button') : '#f1d600',
    '#size' => 30,
  ];

  $form['cookieconsent_palette']['cookieconsent_color_button_text'] = [
    '#type' => 'textfield',
    '#title' => 'Color button text',
    '#default_value' => variable_get('cookieconsent_color_button_text') ? variable_get('cookieconsent_color_button_text') : '#000000',
    '#size' => 30,
  ];

  //Learn more link
  $form['cookieconsent_learn_link'] = [
    '#type' => 'fieldset',
    '#title' => t('Link learn more'),
    '#description' => t('Link to your own policy'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];

  $form['cookieconsent_learn_link']['cookieconsent_link'] = [
    '#type' => 'textfield',
    '#default_value' => variable_get('cookieconsent_link'),
    '#size' => 50,
  ];


  //Custom text
  $form['cookieconsent_custom_text'] = [
    '#type' => 'fieldset',
    '#title' => t('Custom text cookie'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  ];

  $form['cookieconsent_custom_text']['cookieconsent_message'] = [
    '#title' => t('Message'),
    '#type' => 'textarea',
    '#default_value' => variable_get('cookieconsent_message') ? variable_get('cookieconsent_message') : $cookie_message,
  ];

  $form['cookieconsent_custom_text']['cookieconsent_dismiss'] = [
    '#title' => t('Dismiss button text'),
    '#type' => 'textfield',
    '#default_value' => variable_get('cookieconsent_dismiss') ? variable_get('cookieconsent_dismiss') : 'Got it!',
    '#size' => 30,
  ];

  $form['cookieconsent_custom_text']['cookieconsent_police'] = [
    '#title' => t('Learn more link'),
    '#type' => 'textfield',
    '#default_value' => variable_get('cookieconsent_police') ? variable_get('cookieconsent_police') : 'Learn more',
    '#size' => 30,
  ];


  return system_settings_form($form);
}
