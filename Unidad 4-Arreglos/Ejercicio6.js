/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño de la matriz.
	Salidas: La suma de los elementos excepto los de la diagonal principal e inversa.
	Procedimiento general: Lee una matriz cuadrada 4x4 y suma las posiciones que no formen parte
	de la diagonal principal o la diagonal inversa, siendo que si la fila es igual a la columna significa que 
	se esta en la diagonal principal, y si la fila mas la columnas es igual a la cantidad de columnas menos uno significa
	que se esta en la diagonal inversa.
*/

// Entrada
let N = 0;
N = prompt("Ingresa la medida de la matriz: ");
let matriz = new Array(N);

for(let i = 0; i < N; i++){
	matriz[i] = new Array(N);
}

let sum = 0;
leerMatriz(matriz, N, N);

// Proceso
sum = sumarMatrizSinDiagonales(matriz, N, N);

// Salida
alert("Matriz ingresada:");
imprimirMatriz(matriz, N, N);
alert("La suma sin las diagonales es: " + sum);



function entrada(){
	//QA:Funciona pero: no es aleatorio!!!!
	let num = 0;
	do{
		num = parseInt(prompt("Ingresa un numero entre 0 y 999: "));
	}while(!validarEntrada(num, 0, 999));
	return num;
}

function validarEntrada(num, limiteInferior, limiteSuperior){
//QA: Entradas: 1, 0, 999, 678, -12, 1001
//Salidas: 0, 0, 0, 0, 1, 1.               Funciona
	let validar = false;
	if(num >= limiteInferior && num <= limiteSuperior){
		validar = true;
	}
	return validar;
}

function leerMatriz(matriz, filas, columnas){
	//QA:Funciona pero: No es aleatorio!!!
	alert("Ingrese los valores para la matriz " + filas + " x " + columnas + ": ");
	for(let i = 0; i < filas; i++){
		for(let j = 0; j < columnas; j++){
			alert("Matriz[" + i + "][" + j + "]: ");
			matriz[i][j] = entrada();			
		}
	}
}

function sumarMatrizSinDiagonales(matriz, filas, columnas){
	//QA: Entradas: Matriz 2x2, matriz 1x1, matriz 3x3 (1,2,3,4,5,6,7,8,9), matriz 0x0
    //salidas: 0 (ya que no suma nada en readlidad), 0 (igual), 20, 0.
//Funciona correctamente
	let suma = 0;
	for(let i = 0; i < filas; i++){
		for(let j = 0; j < columnas; j++){
			if(!(i + j == columnas - 1) && i != j){
				suma += matriz[i][j];
			}
		}
	}
	return suma;
}

function imprimirMatriz(matriz, filas, columnas){
	 //Imprime correctamente
	let impresion = "";
	for(let i = 0; i < filas; i++){
		for(let j = 0; j < columnas; j++){
			impresion += matriz[i][j] + "  ";
		}
		impresion += "\n";
	}
	alert(impresion);
}
//QA: Jorge Chí
