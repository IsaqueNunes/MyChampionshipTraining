var r = require('fs').readFileSync('URI\\in', 'utf-8');
console.log("A=" + ((r * r) * 3.14159).toFixed(4));
process.exit(0);