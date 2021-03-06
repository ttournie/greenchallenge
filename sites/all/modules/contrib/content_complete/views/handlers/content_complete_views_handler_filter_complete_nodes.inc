<?php

/**
 * @file
 * Views handler: Filter on 100% complete nodes.
 */

class content_complete_views_handler_filter_complete_nodes extends views_handler_filter_boolean_operator {
  function query() {
    $this->ensure_my_table();
    $this->query->add_field($this->table_alias, 'completeness');
    $operator = $this->value ? '=' : '!=';
    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", 100, $operator);
  }
}