<?php
/**
 * Custom views handler for league (provides images)
 */
class sc2ranks_handler_field_league extends views_handler_field {
	function render($values){
		return "<img src=\"".base_path().drupal_get_path('module', 'sc2ranks').
		"/images/icon-rank-".$values->cache_sc2ranks_league.".png\" alt=\"".
		$values->cache_sc2ranks_league."\" style=\"width: 25px;\"/>";
	}
}
