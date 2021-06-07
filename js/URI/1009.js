var input = require('fs').readFileSync("URI/in", 'utf-8');
var lines = input.split('\n');
var a = lines.shift();
var b = parseFloat(lines.shift());
var c = parseFloat(lines.shift());
var d = b + c * 0.15;
d = d.toFixed(2);
console.log(`TOTAL = R$ ${d}`); 