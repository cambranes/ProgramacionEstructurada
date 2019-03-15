/* Autor: Amílcar A. Ramírez Patrón
Entradas: Un párrafo de texto y una cadena para evaluar cuantas veces aparece dentro del párrafo
Procesos: Dejar los arreglos desde 0, leer las cadenas, tomar el largo de ambas, descartar si hay algo y luego evaluar la cadena dentro 
de los párrafos de esta forma : cuando detecte que un caracter del párrafo es igual que el primero de la cadena, busca si el resto 
son, y si lo son, entonces se añade una cuenta al contador
Salidas: La cantidad de veces que está la cadena dentro del párrafo*/

include <stdio.h>
void tamParrafo(int*, int*);
void tamCadena(int*, int*);



int main(int argc, char *argv[]) {
	//Entrada
	int i = 0, j = 0, tamparrafo, tamparrafoscan, tamcadena, tamcadenascan, finparrafo, fincadena, contun = 0, cont = 0;
	tamParrafo(&tamparrafo, &tamparrafoscan);
	tamCadena(&tamcadena, &tamcadenascan);
	char parrafo[tamparrafo];
	char cadena[tamcadena];
	
	//proceso
	for(i = 0; i < tamparrafo; i++){
		parrafo[i] = 0;
	}
	for(i = 0; i < tamcadena; i++){
		cadena[i] = 0;
	}
	printf("Escriba su texto\n");
	scanf(" %s", parrafo);
	printf("Escriba su cadena\n");
	scanf(" %s",cadena);
	
	for(i = 0; i < tamparrafo; i++){
		if(((parrafo[i] == 0) && (parrafo[i + 1] == 0)) || (i < tamparrafo - 1)){
			finparrafo = i + 1;
			break;
		}
	}
	for(i = 0; i < tamcadena; i++){
		if(((cadena[i] == 0) && (cadena[i + 1] == 0)) || (i < tamcadena - 1)){
			fincadena = i + 1;
			break;
		}
	}
	for(i = 0; i < finparrafo; i++){
		if(cadena[0] == parrafo[i]){
			for(j = 0; j < fincadena; j++){
				if(cadena[j] == parrafo[i + j]){
					contun = contun + 1;
				}
				if(contun == fincadena){
					cont = cont + 1;
				}
			}
			contun = 0
		};
	}
	//Salida
	printf("La cantidad de veces que se repite ");
	for(i = 0; i < fincadena; i++){
		printf(" %s", cadena[i]);
	}
	printf("Es de: %d", cont);
	return 0;
}

void tamParrafo(int *tamparrafo, int *tamparrafoscan){
	
	printf("Escriba la cantidad de palabras que contiene su texto\n");
	scanf("%d", tamparrafoscan);
	*tamparrafo = *tamparrafoscan * 8;
}

void tamCadena(int *tamcadena, int *tamcadenascan){
	
	printf("Escriba la cantidad de palabras que contiene su cadena de busqueda\n");
	printf("(Tome en cuenta que cada palabra son 8 caracteres, en caso de que no busque una palabra)");
	scanf ("%d", tamcadenascan);
	*tamcadena = *tamcadenascan * 8;
}
//QA: Jorge Chi. No compila porque le falta # al include
// yen la linea 56 le falta ; Fuera de eso, elprograma no imprime nada al realizar la búsqueda
//pruebe lo que pruebe
