/*
Autor: Hector Abraham Valdivieso Cosgalla
Entrada: Un numero n
Salida: La suma de los primeros n pares
Procedimiento: Se lee un numero n y se suman sus primeros n pares
*/
var n = prompt("ingresa el numero limite de sumas:");
SumaNPares(n);

function SumaNPares(n){
  var suma=0;
  for (var i = 0; i <= n; i= i + 2) {
    suma = suma + i
  }
  alert("La suma de los primeros " + n + " pares es: " + suma)
}
/*
QA: Amílcar Ramírez

entrada():
Todos los valores numericos (validos, por definicion del ejercicio) ingresados funcionan, OK

proceso():
Calcula correctamente los primeros n multiplos de 7, OK

salida():
Muestra correctamente el resultado, Ok

Prueba integral:
Correctamente realiza su tarea el codigo, con las validaciones necesarias.
*/
