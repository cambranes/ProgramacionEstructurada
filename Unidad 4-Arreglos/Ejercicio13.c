/*
Autor: Amílcar A. Ramírez Patrón
Entradas: Los dos vectores numéricos a sumar
Procesos: Poner todos los espacios dentro de las matrices a usar en 0, leer los vectores que hay que sumar, asegurarse que sean sólo númericos,
sumar en orden cada parte del vector
Salidas: El vector resultante de la suma de ambos
*/
#include <stdio.h>
#define SIZE 256

void asignarVacioArreglos(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE]);
void transicionCaracterNumero(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE]);
void validacionNumerica(char cadenaUno[SIZE], char cadenaDos[SIZE], int*);
void sumaDeVectores(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE], int resulCadena[SIZE], int*);

int main(int argc, char *argv[]) {
	//entrada
	int valida = 1;
	char cadenaUno[SIZE];
	char cadenaDos[SIZE];
	int transUno[SIZE];
	int transDos[SIZE];
	int resulCadena[SIZE];

	//proceso
	//Asignar valores 0 a todos los arreglos
	asignarVacioArreglos(cadenaUno, cadenaDos, transUno, transDos);
	
	//Leer los arreglos
	scanf(" %s", cadenaUno);
	scanf(" %s", cadenaDos);
	
	//Cambiar de caracter a numero
	transicionCaracterNumero(cadenaUno, cadenaDos, transUno, transDos);
	
	//Asegurarse de que el arreglo solo contiene caracteres numericos
	validacionNumerica(cadenaUno, cadenaDos, &valida);
	
	//Imprimir si hay un caracter no numerico
	if(valida == 0){
		printf("\n ERROR: un caracter no es numero\n");
	}
	//Sumar los vectores 
	sumaDeVectores(cadenaUno, cadenaDos, transUno, transDos, resulCadena, &valida);
	return 0;
}

//Asignar valores 0 a todos los arreglos
void asignarVacioArreglos(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE]){
	for (int i = 0; i < SIZE; i++){
		cadenaUno[i] = 0;
		cadenaDos[i] = 0;
		transUno[i] = 0;
		transDos[i] = 0;
	}
}

//Cambiar de caracter a numero
void transicionCaracterNumero(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE]){
	for (int i = 0; i < SIZE; i++){
		if(cadenaUno[i] != 0){
			transUno[i] = cadenaUno[i] - 48;
		}
		if(cadenaDos[i] != 0){
			transDos[i] = cadenaDos[i] - 48;
		}
	}
}

//Asegurarse de que el arreglo solo contiene caracteres numericos
void validacionNumerica(char cadenaUno[SIZE], char cadenaDos[SIZE], int *valida){
	for(int i = 0; i < SIZE; i++){
		if(((cadenaUno[i] < 48) || (cadenaUno[i] > 57)) && (cadenaUno[i] != 0)){
			*valida = 0;
			i = SIZE;
			
		}
	}
	for(int i = 0; i < SIZE; i++){
		if(((cadenaDos[i] < 48) || (cadenaDos[i] > 57)) && (cadenaDos[i] != 0)){
			*valida = 0;
			i = SIZE;
			
		}
	}
}


void sumaDeVectores(char cadenaUno[SIZE], char cadenaDos[SIZE], int transUno[SIZE], int transDos[SIZE], int resulCadena[SIZE], int *valida){
	if( *valida == 1){
		printf("La cadena de caracteres es: {");
		for (int i = 0; i < SIZE ; i++){
			resulCadena[i] = transUno [i] + transDos[i];
			if((cadenaUno[i] == 0) && (cadenaDos[i] == 0)){
				break;
			}
			printf("%d",resulCadena[i]);
			printf(" ");
		}
		printf("}");
	}
}
