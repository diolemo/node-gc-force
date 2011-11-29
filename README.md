node-gc-force
=============

    Force the v8 engine to run garbage collection from within a node app. 

Install:
---------

    node-waf configure build
    node-waf build

    This will create a `gc.node` binary that you should place in the 
    node path (which is `/usr/local/lib/node` on my system). You can 
    put the binary alongside your own code files if you prefer.

Usage: 
---------

    $ var gc = require('gc');
    $ gc.force();

    See `test.js` for a full example.

