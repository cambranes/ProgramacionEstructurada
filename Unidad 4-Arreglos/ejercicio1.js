/*
  Autor: Raul Rivadenerya
  Entradas: numero enteros
  Salidas: Ninguna
  Procedimiento general: Calcula el numero menor de los ingresados, la sumatoria de las primeras 5 columnas y la sumatoria
  de las primeras 5 filas.
*/
let matrix = new Array(15).fill(Array(12));
let min = 0;
let add_1 = 0;
let add_2 = 0;
for (var i = 0; i < 15; i++) {
  for (var j = 0; j < 12; j++) {
    matrix[i][j] = parseInt(prompt("Enter number"));
    if ((min == 0)||(matrix[i][j] < min)){
      min = matrix[i][j];
    }
    if (i < 5){
      add_1 = add_1 + matrix[i][j];
    }
    if (j < 5){
      add_2 = add_2 + matrix[i][j];
    }
  }
}

//QA realizado por Rodrigo Hernandez
//Funcion main probada: funciona correctamente
//Nota: Todo el programa se hizo dentro del main, aunque me parece se podría modularizar,
//al menos con una función que haga los procesos solicitados
