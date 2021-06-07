var input = require('fs').readFileSync('URI\\in', 'utf-8');
var lines = input.split("\n");

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var c = a * b;
console.log(`PROD = ${c}`);