<?php

$callback = function() {
  sleep(5);
  return mt_rand();
};

try {
  cache_tools_cache($callback);
  echo cache_tools_cache($callback);
} catch (exception $e ) {
  echo 'Caught exception \'' . $e->getMessage() . "'.\n";
}

function sleep_and_set() {
  sleep(5);
  return mt_rand();
}

try {
  cache_tools_cache('sleep_and_set');
  echo cache_tools_cache('sleep_and_set') . "\n";
  echo cache_tools_cache('sleep_and_set') . "\n";
  echo cache_tools_cache('sleep_and_set') . "\n";
} catch (exception $e ) {
  echo 'Caught exception \'' . $e->getMessage() . "'.\n";
}
