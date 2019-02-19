/*
Autor: Jose Eduardo Mendez Verdejo
Problema:.Determina el valor de la secuencia
1! + 2! + .. +n!
Entrada: un número entero
Salida: la suma de factoriales desde 1 hasta el número seleccionado
Proceso:Introducir un numero para ir sacando el total del factorial de mayor a menor sumando los resultados en una variable he imprimir el resultado.
*/

var numero = entrada();
var i = 1;
var suma = 0;

while(i <= numero){
	suma = suma + proceso(i);
    i = i + 1;
}
salida(suma);


function entrada(){
	var numero = parseInt(prompt("Ingrese un numero: "));
  while(numero < 1){
    var numero = parseInt(prompt("Ingrese un numero: "));
  }
	return numero;
}

function proceso(i){
	var factorial = 1, j = 1;
	for(j; j <= i; j++){
		factorial = factorial * j;
	}
	return factorial;
}

function salida(numero){
	alert("La suma de los factoriales es:" + numero);
}

/*
QA: Raul Rivadeneyra

entrada():
Todos los valores numericos ingresados funcionan, OK

proceso():
Calcula correctamente el factorial de i, OK

salida():
Muestra correctamente el dato, Ok

Prueba integral:
Correctamente realiza su tarea el codigo, con las validaciones necesarias, 10/10
*/
