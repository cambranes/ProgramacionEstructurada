/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Ninguna
  Procedimiento general: Calcula la suma de dos matrices.
*/
let a = new Array(4).fill(Array(4));
let b = new Array(4).fill(Array(4));
let s = new Array(4).fill(Array(4));
for (var i = 0; i < 4; i++) {
  for (var j = 0; j < 4; j++) {
    s[i][j] = a[i][j] + b[i][j];
  }
}
