<?php

/**
 * create a new cache bin of the specified name
 */
function cache_tools_cache_schema($name) {
   $schema[$name] = drupal_get_schema_unprocessed('system', 'cache');
   return $schema;
}
