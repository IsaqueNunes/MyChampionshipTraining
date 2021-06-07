var input = require('fs').readFileSync("URI/in", 'utf-8');
var lines = input.split('\n');
var teste = lines.shift();
var teste2 = teste.split(' ')
var cod1 = parseInt(teste2.shift());
var qt1 = parseInt(teste2.shift());
var val1 = parseFloat(teste2.shift());
teste = lines.shift();
teste2 = teste.split(' ')
var cod2 = parseInt(teste2.shift());
var qt2 = parseInt(teste2.shift());
var val2 = parseFloat(teste2.shift());
var tot = qt1 * val1 + qt2 * val2;
tot = tot.toFixed(2);
console.log(`VALOR A PAGAR: R$ ${tot}`);