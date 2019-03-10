//8. Escribir el programa para un programa que reciba 2 números y te indique si el 1er numero es múltiplo del segundo.
//Autor: Rodrigo Hernanadez Gongora
var num1;
var num2;

entradas();
proceso(num1, num2);


function entradas(){
	num1=prompt('Introduce el primer numero');
	num2=prompt('Introduce el segundo numero');
}

function proceso(x,y){
	var res;
	if ((x%y)==0) {
		res=1;
	}
	else {
		res=0;
	}
	salidas(res);
}

function salidas(z){
	if (z==1) {
		alert("El primero es multiplo del segundo");
	}
	else{
		alert("No son multiplos");
	}
}
/*
Autor QA: Jimmy Nathan Ojeda Arana
Entradas: Vacío
Salidas: Vacío
Proceso: Vacío
Modularización: Vacío
 Función lectura: Vacío
 Función ascendente: Vacío
 Función impresion: Vacío
 
 -CORREGIDO
 PROBLEMA AL SUBIR EL EJERCICIO INICIALMENTE, SIN EMBARGO SE ASEGURO QUE FUNCIONE DE LA MISMA MANERA QUE C
*/
