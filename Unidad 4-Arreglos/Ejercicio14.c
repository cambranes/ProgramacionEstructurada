/* Autor: Amílcar A. Ramírez Patrón
Entradas: Un párrafo de texto y una cadena para evaluar cuantas veces aparece dentro del párrafo
Procesos: Dejar los arreglos desde 0, leer las cadenas, tomar el largo de ambas, descartar si hay algo y luego evaluar la cadena dentro 
de los párrafos de esta forma : cuando detecte que un caracter del párrafo es igual que el primero de la cadena, busca si el resto 
son, y si lo son, entonces se añade una cuenta al contador
Salidas: La cantidad de veces que está la cadena dentro del párrafo*/

#include <stdio.h>
#define SIZE 300

void lecturaDeStringUno(char parrafo[SIZE]);
void lecturaDeStringDos(char cadena[SIZE]);
void vaciarArreglos(char parrafo[SIZE], char cadena[SIZE]);


int main(int argc, char *argv[]) {
	//Entrada
	int i = 0, j = 0,  fincadena, contun = 0, cont = 0;
	char parrafo[SIZE];
	char cadena[SIZE];
	
	//proceso
	vaciarArreglos(parrafo, cadena);
	lecturaDeStringUno(parrafo);
	lecturaDeStringDos(cadena);

	//Delimito el tamaño de la cadena
	for (int i = 0; ((cadena[i] != '\0') && (cadena[i + 1] != '0')); i++)
	{
		fincadena++;
	}
	
	//Calcula las veces que cabe la cadena dentro del parrafo
	
	for(i = 0; i < SIZE; i++){
		if(cadena[0] == parrafo[i]){
			for(j = 0; j < SIZE; j++){
				if(cadena[j] == parrafo[i + j]){
					contun = contun + 1;
				}
				if(contun == fincadena){
					cont = cont + 1;
				}
			}
			contun = 0;
		}
	}
	
	//Salida
	printf("La cantidad de veces que se repite su cadena ");
	printf("es de: %d", cont);
	return 0;
}


void lecturaDeStringUno(char parrafo[SIZE]){
	printf("Escriba su texto\n");
	fgets(parrafo, SIZE, stdin);
	//for(int x = 0; x < SIZE; x++){
		//printf("[%d](%d) = %c \n", x, parrafo[x], parrafo[x]);
	//}
}


void lecturaDeStringDos(char cadena[SIZE]){
	printf("Escriba su cadena\n");
	fgets(cadena, SIZE, stdin);
	//for(int x = 0; x < SIZE; x++){
		//printf("[%d](%d) = %c \n", x, cadena[x], cadena[x]);
	//}
	
}


void vaciarArreglos(char parrafo[SIZE], char cadena[SIZE]){
	for(int i = 0; i < SIZE; i++){
		parrafo[i] = 0;
		cadena[i] = 0;
	}
}

//QA: Jorge Chi. No compila porque le falta # al include
// yen la linea 56 le falta ; Fuera de eso, elprograma no imprime nada al realizar la búsqueda
//pruebe lo que pruebe
