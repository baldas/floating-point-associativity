Just a simple test to observe that floating-point additions are not
associative. In the test, multiple threads perform additions concurrently -
the addition order changes de final results (execute it multiple times to realize it).
