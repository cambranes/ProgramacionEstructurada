/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas:numero de precision para e
Salidas: valor aproximado a e
Procedimiento: Calcular el valor de e
*/


var numero = 1;
var precision = 0;
var e = 1,ePas;

while(precision < 2){
	precision = entrada();
}

do
{
	ePas = e;

	e = e + proceso(numero);
;
	numero++;
}
while(numero <= precision);
salida(ePas);

function entrada(){
	var precisions = parseFloat(prompt("Precision para calcular e:"));
	
	return precisions;
}

function proceso(num){
	var suma = 0;
	var factoriales = factorial(num);
	
	suma = 1/factoriales;
	
	return suma;
}

function factorial(num){
	var factorial = 1,i;
	for(i = 1; i <= num; i++){
		factorial = i * factorial;
	}
	return factorial;
}

function salida(e){
	alert("El valor de la constante e es: " + e);
	
}
