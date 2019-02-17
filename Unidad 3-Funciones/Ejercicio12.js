/*
Autor:Jorge Chí 16/Febrero/19
Entradas: dos numeros enteros (A y B)
Salida: los números ordenados de mayor a menor
Procedimiento general: Se pregunta cual es mayor y luego se ordenan
*/

var numeroA = 0;
var numeroB = 0;

//entradas: se solicitan 2 valores al usuario

numeroA = lectura();
numeroB = lectura();

//procedimiento: se comparan para saber cual es el mayor

ascendente();

//salidas: se imprimen en orden

impresion();

function lectura(){
//se lee el numero
    var numero = 0;
    alert("Ingresa un numero:");
    numero = prompt();

    return numero;
 }

function ascendente(){

	var temporal = 0;
	//entradas: los dos numeros
	//procedimiento: se ordenan si el segundo el mayor al primero
	if (numeroB >= numeroA){

   		temporal = numeroB;
    	numeroB = numeroA;
   		numeroA = temporal;

}
//salidas: ninguna

}

function impresion(){

//entradas: los dos numeros

//procedimiento: se imprimen en orden
    alert(`${numeroA} , ${numeroB}` ); 
//salidas: ninguna



}