/*
Autor: Guillermo Canto
Entradas: Un  n�mero  natural  impar   menor  o  igual  a  11
Salidas: Imprime si se trata de un cuadrado magico o no el arreglo que se produce.
Procedimiento general: Lee n conforme a las especificaciones, llena un arreglo de
dimension n*n con los numeros del 1 al n*n, cambia el orden de estos de forma
aleatoria, verifica si se trata de un cuadrado magico o no.
*/
leer_n();
var arreglo = new Array(n);
for(var i=0; i<n; i++) {
    arreglo[i] = new Array(n);
}
llenarArreglo(arreglo, n);
barajarArreglo(arreglo, n);
var flag = checkIfMagic(arreglo, n);
if (flag ==1){
  window.alert("Se trata de un cuadrado magico");
}else{
  window.alert("No es un cuadrado magico");
}
function leer_n(){
  let n=0;
  do{
    N = prompt("Ingresa un numero impar menor o igual a 11");
  }while((n%2)!=0 && n <= 11);
  return n;
}

function llenarArreglo(arreglo, n){
  let contador=1;
  for(let i = 0; i < n ; i++){
		for(let j = 0; j < n; j++){
			arreglo[i][j] = contador;
		}
		contador++;
	}
}

function barajarArreglo(arreglo, n){
  for (let i = 0; i < n; i++)
	{
		let r = Math.round(Math.random() * n-1);
		for (let j = 0; j < n; j++)
		{
			let temp =  arreglo[i][j];
			arreglo[i][j] =  arreglo[r][j];
			arreglo[r][j] = temp;
		}
	}
}

function checkIfMagic(arreglo, n){
  let i,j;
  let flag = 0;
  let sumFilas = 0;
  let totalFilas = 0;
  let sumColumnas = 0;
  let totalColumnas = 0;
  for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			sumFilas = sumFilas + arreglo[i][j];
		}
		totalFilas = totalFilas + sumFilas;
		if (j!=n && i!=n){
			sumFilas = 0;
		}
	}
  for(j=0; j < n; j++){
		for(i=0; i < n; i++){
			sumColumnas = sumColumnas + arreglo[i][j];
		}
		totalColumnas = totalColumnas + sumColumnas;
		if (j!=n && i!=n){
			sumColumnas = 0;
		}
	}
  if (totalFilas/n == sumFilas && totalColumnas/n == sumColumnas){
		flag = 1;
	}
	return flag;
}
