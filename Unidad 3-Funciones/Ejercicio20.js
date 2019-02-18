//20.Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +... + n.
//Autor: Rodrigo Hernandez Gongora
var n;

entradas();
proceso(n);

function entradas(){
	n=prompt('Introduce hasta que numero quieres sumar')
}

function proceso(x){
	var cont=0;
	var sum=0;
	while (cont<x){
		cont++;
		sum=sum+cont;
	}
	salidas(sum);
}

function salidas(y) {
	alert("La suma de los numeros es " + y)
}
/*
Autor QA: Alejandro Torre Reyes
Entradas: 100
Salidas: 5050
Proceso: Ok
Modularidad: OK. Se realizan funciones para las entradas, el proceso y las salidas.
    funcion entradas: ok
    funcion proceso: Ok. También se pudo haber realizado con la formula de n(n+1)/2
    funcion salidas: Ok
*/
