var util = require('util');

// array of objects
var arr = [];

// create pointless objects
for (var i = 0; i < 1000000; i++)
    arr[i] = new Object();

// remove the ref
arr = null;

// show current memory usage
console.log(util.inspect(process.memoryUsage()));

// load in gc and force collection
require('gc').force();

// show current memory usage
console.log(util.inspect(process.memoryUsage()));
