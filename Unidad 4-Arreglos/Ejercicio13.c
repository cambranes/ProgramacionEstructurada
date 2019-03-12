/*
Autor: Amílcar A. Ramírez Patrón
Entradas: Los dos vectores numéricos a sumar
Procesos: Poner todos los espacios dentro de las matrices a usar en 0, leer los vectores que hay que sumar, asegurarse que sean sólo númericos,
sumar en orden cada parte del vector
Salidas: El vector resultante de la suma de ambos
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	//entrada
	int valida = 1;
	char cadenaUno[256];
	char cadenaDos[256];
	int transUno[256];
	int transDos[256];
	int resulCadena[256];
	scanf(" %s", cadenaUno);
	scanf(" %s", cadenaDos);
	
	
	//proceso
	for (int i = 0; i < 256; i++){
		cadenaUno[i] = 0;
		cadenaDos[i] = 0;
		transUno[i] = 0;
		transDos[i] = 0;
	}
  scanf(" %s", cadenaUno);
	scanf(" %s", cadenaDos);
	for (int i = 0; i < 256; i++){
		if(cadenaUno[i] != 0){
			transUno[i] = cadenaUno[i] - 48;
		}
		if(cadenaDos[i] != 0){
			transDos[i] = cadenaDos[i] - 48;
		}
	}
	for(int i = 0; i < 256; i++){
		if((cadenaUno[i] <= 48) || (cadenaUno[i] >= 57) || (cadenaUno == 0)){
			valida = 0;
			break;
		}
	}
	for(int i = 0; i < 256; i++){
		if((cadenaDos[i] <= 48) || (cadenaDos[i] >= 57) || (cadenaDos == 0)){
			valida = 0;
			break;
		}
	}
	if(valida == 0){
  
  //Salida
		printf("\n ERROR: un caracter no es numero\n");
	}
	if(valida == 1){
		printf("La cadena de caracteres es: {");
		for (int i = 0; i < 256 ; i++){
			
			resulCadena[i] = transUno [i] + transDos[i];
			if((cadenaUno[i] == 0) && (cadenaDos[i] == 0)){
				break;
			}
			
			printf("%d",resulCadena[i]);
			if(cadenaDos[i + 1] != 0){
				printf(", ");
			}
		}
		printf("}");
	}
	return 0;
}
