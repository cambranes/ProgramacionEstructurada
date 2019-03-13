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
/*QA: Jorge Chí
Entradas:1 y 2 para A[m][n] y B[m][n], Salidas: 3,3,3,3,3,3,3,3...,3.
Entradas:13 y 23 para A[m][n] y B[m][n], Salidas: 36,36,36,36,36,36,36,36...,36.
Entradas:-1 y -4 para A[m][n] y B[m][n], Salidas:-5, -5, -5...,-5.
Funciona correctamente, más, podría tener una función de lectura y definir
la suma como una función y llamarla.
*/
