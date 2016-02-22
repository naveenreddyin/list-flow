<?php

function list_flow_config_form($form){
	$form['#tree'] = TRUE;
	
	return $form;
}


function theme_list_flow_config_form($variables){
	$form = $variables['form'];

  	$rows = array();
	$header = array(t('List name'));
	
	return theme('table', array('header' => $header, 'rows' => $rows, 'empty' => t('No list flows available. <a href="@link">Add List Flow</a>.', array('@link' => url('admin/config/content/list_flow/add'))), 'attributes' => array('id' => 'list_flow'))) . drupal_render_children($form);
}
