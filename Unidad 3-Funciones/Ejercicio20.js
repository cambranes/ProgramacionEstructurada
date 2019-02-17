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