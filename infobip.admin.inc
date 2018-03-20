<?php

/**
 * @file
 * Provides INFOBIP configuration form.
 */

/**
 * infobip Configuration form.
 */
function infobip_admin_form($form) {
  $form['infobip_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#default_value' => variable_get('infobip_username', ''),
    '#description' => t('Your infobip username'),
    '#required' => TRUE,
  );
  $form['infobip_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('infobip_password', ''),
    '#description' => t('Your infobip password'),
    '#required' => TRUE,
  );
  $form['infobip_sender'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Sender (from)'),
    '#default_value' => variable_get('infobip_sender', ''),
    '#description' => t('Your Default Sender (from)'),
  );
  return system_settings_form($form);
}
