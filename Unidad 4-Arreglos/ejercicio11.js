/*
Autor: Guillermo Canto
Entradas: Un entero N igual al numero de filas a imprimir.
Salidas: Imprime un triangulo de pascal de n filas invertido.
*/
//Main
let N = leer_n();
var trianguloPascal = new Array(n);
for(var i=0; i<n; i++) {
    trianguloPascal[i] = new Array(n);
}
pascal(arreglo,n);
imprimirInversa(arreglo,n);
//Funciones
function pascal(arreglo, n){
  for (let linea = 0; linea < n; linea++){

		for (let i = 0; i <= linea; i++){
			// El primer y ultimo valor de cada linea es 1
			if (linea == i || i == 0)
				arreglo[linea][i] = 1;
			 //Los otros son la suma del valor de arriba a la izquierda y arriba a la derecha;
			else
				arreglo[linea][i] = arreglo[linea-1][i-1] + arreglo[linea-1][i];

		}
	}
}

function imprimirInversa(arreglo, n){
  let impresion = "";
  for(let i = n; i >= 0; i--){
		for(let j = 0; j < n; j++ ){
			impresion += arreglo[i][j] + "  ";
		}
		impresion += "\n";
	}
  alert(impresion);
}

function leer_n(){
  let n = 0;
  do{
    N = prompt("Ingrese n")
  }while(n <=0);
  return n;
}
