var input = require('fs').readFileSync('URI/in', 'utf-8');
var lines = input.split('\n');
var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());
var d = ((a * 2) + (b * 3) + (c * 5))/10;
var f = d.toFixed(1);
console.log(`MEDIA = ${f}`);
