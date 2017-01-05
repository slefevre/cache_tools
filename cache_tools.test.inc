<?php

$callback = function() {
   sleep(5);
   return mt_rand();
};

try {
  cache_tools_cache($callback);
} catch (exception $e ) {
  echo 'Caught exception \'' . $e->getMessage() . "'.\n";
}
