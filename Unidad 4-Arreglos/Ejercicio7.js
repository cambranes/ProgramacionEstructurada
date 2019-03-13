/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño del vector.
	Salidas: La media, mediana y moda de los elementos del vector.
	Procedimiento general: Lee el largo del vector y posterior lo rellena con numeros aleatorios entre 0 y 50,
	despues calcula la media, moda, mediana y lo imprime.
*/

// Entradas
let vector = new Array();
let moda, tam;
let media = 0, mediana = 0;
let imprimir = "";
	
tam = parseInt(prompt("Ingrese el largo del vector: "));
	
// Proceso
rellenarVector(vector, tam);
media = calcularMedia(vector, tam);
moda = calcularModa(vector, tam);
mediana = calcularMediana(vector, tam);
// Salidas
imprimir = "Media: " + media + "\n" + "Mediana: " + mediana + "\n";
if(moda == -1){
	imprimir += "Moda: No hay moda\n";
}
else{
	imprimir += "Moda: " + moda;
}
alert(imprimir);
imprimirVector(vector, tam);


function rellenarVector(vec, tam){
	for(let i = 0; i < tam; i++){
		vec[i] = Math.round(Math.random() * 50);
	}
}

function calcularMedia(vec, tam){
	let media = 0;
	for(let i = 0; i < tam; i++){
		media += vec[i];
	}
	media = media / tam;
	return media;
}

function calcularMediana(vec, tam){
	let median = 0;
	let posicion = 0;
	// Si el largo del vector es par
	ordenarVector(vec, tam);
	if(tam % 2 == 0){
		posicion = (tam / 2) - 1;
		median = vec[posicion] + vec[posicion + 1];
		median = median / 2;
	}
	else{
	// si el largo del vector es impar
		posicion = ((tam + 1) / 2) - 1;
		median = vec[posicion];
	}
	
	return median;
}

function calcularModa(vec, tam){
 
	let moda = -1, veces = 0, ultimo_numero_veces = 0;//veces: contará el número de veces que se repite un número
	let j = 0;
	for(let i = 0; i < tam; i++){
		//j: analizará una posición adelante del valor actual
		j = i + 1;
		while(j < tam){
			//Si el número en i se repite más adelante, el número de veces incrementa
			if(vec[i] == vec[j]){
				veces++;
			}
			j++;
		}
 
		if(veces > ultimo_numero_veces){
			moda = vec[i];
			ultimo_numero_veces = veces;
			veces = 0;
		}
		else{
         veces = 0;
		}
	}
	//Devuelve el numero que más se repite
	return moda;
}

function ordenarVector(vec, tam){
	let aux = 0;
	for (let i = 0; i < tam - 1; i++){       
		for (let j = 0; j < tam - i - 1; j++){  
			if (vec[j] > vec[j+1]){
				aux = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = aux;
			} 
		}
   }
}

function imprimirVector(vec, tam){
	let impresion = "";
	for(let i = 0; i < tam; i++){
		impresion += vec[i] + ", ";
	}
	alert("Vector: " + impresion);
}

/* QA                                    
Por: Eyder Antonio Concha Moreno

Entradas: 4
Salidas: {16, 20, 34, 47, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular media: 29.25 - CORRECTO
Calcular mediana: 27 - CORRECTO
Calcular Moda: No hay moda - CORRECTO

Entradas: 10
Salidas: {3, 10, 14, 16, 20, 26, 26, 33, 36, 40, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular media: 22.4 - CORRECTO
Calcular mediana: 23 - CORRECTO
Calcular Moda: 26 - CORRECTO

Entradas: 7
Salidas: {0, 5, 16, 22, 23, 39, 48, }
Ordenar vector: vector son ordenados apropiadamente - CORRECTO
Calcular Media: 21.857142857142858 - CORRECTO
Calcular Mediana: 22 - CORRECTO
Calcular Moda: No hay moda - CORRECTO

Buen codigo 10/10
*/