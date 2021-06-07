var input = require('fs').readFileSync('URI\\in', 'utf8');
var lines = input.split('\n');

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
console.log(`X 1= ${a +  b}`);