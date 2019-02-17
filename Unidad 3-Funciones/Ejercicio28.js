//28.Leer una secuencia de números no determinada (finalizará la lectura cuando el último número sea igual a 999) y determinar el valor mayor y el valor menor .
//Autor: Rodrigo Hernandez Gongora

asignacion();

function asignacion(){
	var x=0;
	var trMax=0;
	var trMin=99999;
	while(x!=999){
		x=prompt('Introduce un numero');
		if (x>trMax) {
			trMax=x;
		}
		if (x<trMin) {
			trMin=x;
		}
	}
	salidas(trMax,trMin)
}

function salidas(x,y){
	alert("El numero mayor es " + x);
	alert("El numero menor es "+ y);
}