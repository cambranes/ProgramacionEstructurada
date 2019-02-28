/*
  Autor: Raul Rivadeneyra
  Entradas: Numeros enteros
  Salidas: Cuantos numeros positivos y negativos hay
  Proceso general: lee numeros enteros del usuario y si es positivo le suma uno al contador de positivos y lo similar
  si es negativo.
*/

#include "stdio.h"

void process(int*, int*);
char getNumbers(int*);
void checkSign(int, int*, int*);

int main() {
  int positive = 0;
  int negative = 0;

  //Da instrucciones al usuario
  printf("Insert numbers to check how many positives or negatives are (type 0 to stop):\n");

  //Proceso
  process(&positive, &negative);

  //Imprime el resultado
  printf("There are %d positive numbers and %d negative numbers\n", positive, negative);
  return 0;
}

//Funciones//

//Combina las funciones de getNumber y checkSign en un ciclo
void process(int *positive, int *negative) {
  int number;
  while (getNumbers(&number) == 0) {
    checkSign(number, positive, negative);
  }
}

/*
  Lee numeros enteros y le asigna el valor directamente a la variable externa (paso por referencia),
  si el numero es 0 entonces devuelve 1 para finalizar el ciclo donde se llamo, de lo contrario hace
  return 0 por lo que sigue el ciclo
*/
char getNumbers(int *number) {
  scanf("%d", number);
  if (*number == 0){
    return 1;
  }
  return 0;
}

//Evalua si el numero dado es postitivo o negativo y suma 1 a el asignado
void checkSign(int value, int *positive, int *negative) {
  if (value > 0){
    *positive = *positive + 1;
  }
  else{
    *negative = * negative + 1;
  }
}

/*
Autor: Raul Rivadeneyra
Entradas: Numeros enteros
Salidas: Cuantos numeros positivos y negativos hay
Proceso general: lee numeros enteros del usuario y si es positivo le suma uno al contador de positivos y lo similar
si es negativo.
*/

#include "stdio.h"

void process(int*, int*);
char getNumbers(int*);
void checkSign(int, int*, int*);

int main() {
	int positive = 0;
	int negative = 0;
	
	//Da instrucciones al usuario
	printf("Insert numbers to check how many positives or negatives are (type 0 to stop):\n");
	
	//Proceso
	process(&positive, &negative);
	
	//Imprime el resultado
	printf("There are %d positive numbers and %d negative numbers\n", positive, negative);
	return 0;
}

//Funciones//

//Combina las funciones de getNumber y checkSign en un ciclo
void process(int *positive, int *negative) {
	int number;
	while (getNumbers(&number) == 0) {
		checkSign(number, positive, negative);
	}
}

/*
Lee numeros enteros y le asigna el valor directamente a la variable externa (paso por referencia),
si el numero es 0 entonces devuelve 1 para finalizar el ciclo donde se llamo, de lo contrario hace
return 0 por lo que sigue el ciclo
*/
char getNumbers(int *number) {
	scanf("%d", number);
	if (*number == 0){
		return 1;
	}
	return 0;
}

//Evalua si el numero dado es postitivo o negativo y suma 1 a el asignado
void checkSign(int value, int *positive, int *negative) {
	if (value > 0){
		*positive = *positive + 1;
	}
	else{
		*negative = * negative + 1;
	}
}

/*
QA: Realizó: Jose Mendez
Entradas: (5, -6, 9, -7, 99, -99 , 0)
Salidas: 3 positivps y 3 negativos
Funciona Correctamente.
*/
