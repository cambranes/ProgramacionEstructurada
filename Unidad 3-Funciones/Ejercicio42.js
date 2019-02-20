/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas: Numero
Salidas: EL numero y su raiz
Procedimiento: Calcular la raiz de cada uno de los 100 primeros numeros naturales
*/

var numero = 1;
var raiz;
while(numero <= 100){

	raiz = proceso(numero);
	salida(numero,raiz);
	numero++; //se incrementa en 1 el numero
	}




function proceso(numero){
	var raiz;
	raiz = Math.sqrt(numero); // se calcula la raiz del numero
	return raiz;
}

function salida(numero,raiz){
	alert("Numero: " + numero + "Raiz: " + raiz);
	
}
