/*
  Autor: Raul Rivadenerya
  Entradas: Ninguna
  Salidas: Los numeros pares generados aleatoreamente en la matriz y la cantidad de numeros impares de la matriz
  Procedimiento general: Aleatoreamente ingresa numero a la matriz y saca el modulo 2 para los pares y agrega a un contador
  los impares
*/
let matrix = new Array(50).fill(Array(50));
var imp = 0;
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
    matrix[i][j] = Math.floor(Math.random() * 101);
    if (matrix[i][j] % 2 == 0){
      alert(matrix[i][j]);
    }
    else{
      imp++;
    }
  }
}
