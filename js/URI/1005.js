var input = require('fs').readFileSync('URI\\in', 'utf-8');
var lines = input.split('\n');
var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = (((a * 3.5) + (b * 7.5)) / 11);
var d = c.toFixed(5)
console.log(`MEDIA = ${d}`);