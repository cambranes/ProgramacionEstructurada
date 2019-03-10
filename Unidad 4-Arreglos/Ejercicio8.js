/*
	Autor: Carlos Chan Gongora
	Entradas: El tamaño del vector.
	Salidas: La media, desviacion estandar y varianza.
	Procedimiento general: Lee el largo del vector y posterior lo rellena con numeros aleatorios entre 0 y 100,
	luego calcula la media aritmetica, la varianza y la desviacion.
*/

// Entradas
let vector = new Array();
let tam = 0;
let media = 0, 
	desviacion = 0, 
	varianza = 0;
let resultados = "";

tam = parseInt(prompt("Ingresa el largo del vector: "));

// Proceso
rellenarVector(vector, tam);
media = calcularMedia(vector, tam);
varianza = calcularVarianza(vector, tam);
desviacion = calcularDesviacion(varianza);
	
// Salidas
resultados = "Media: " + media + "\n" + "Desviacion estandar: " + desviacion + "\n" + "Varianza de una muestra: " + varianza;
alert(resultados);
imprimirVector(vector, tam);

function rellenarVector(vec, tam){
	for(let i = 0; i < tam; i++){
		vec[i] = Math.round(Math.random() * 100);
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

function calcularPromedio(vec, tam){
  let suma = 0;
  for (let i = 0; i < tam; i++) {
    suma += vec[i];
  }
  suma = suma / tam;
  return suma;
}

function calcularVarianza(vec, tam){
  let promedio = calcularPromedio(vec, tam);
  let varianza = 0;
  for (let i = 0; i < tam; i++) {
    varianza += Math.pow((vec[i] - promedio), 2);
  }
  varianza = varianza / (tam - 1);
  return varianza;
}

function calcularDesviacion(varianza){
  return Math.sqrt(varianza);
}

function imprimirVector(vec, tam){
	let impresion = "";
	for(let i = 0; i < tam; i++){
		impresion += vec[i] + ", ";
	}
	alert("Vector: " + impresion);
}