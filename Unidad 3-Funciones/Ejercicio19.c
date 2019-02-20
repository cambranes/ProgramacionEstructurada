/*
	Autor: Carlos Chan Gongora 15/02/2019
	Entradas: Tres numeros.
	Salidas: El mayor de los 3 numeros.
	Procedimiento general: Lee los 3 numeros, posterior verifica si son iguales y encuentra
  el mayor de los 3 numeros, si los numeros no son iguales imprime el mayor, de ser iguales
  imprime un texto indicando que los numeros son iguales.
*/
#include <stdio.h>

int entrada();
int encontrarMayor(int, int, int);
int verificarIgualdad(int, int, int);
void imprimirResultados(int, int);

int main(){
  // Entradas
  int num1, num2, num3, mayor, igualdad;
  num1 = entrada();
  num2 = entrada();
  num3 = entrada();

  // Procesos
  igualdad = verificarIgualdad(num1, num2, num3);
  if(!igualdad){
    mayor = encontrarMayor(num1, num2, num3);
  }

  // Salidas
  imprimirResultados(igualdad, mayor);

  return 0;
}

// Lee un numero
int entrada(){
  int numero = 1;
  printf("Ingrese un numero: ");
  scanf("%d", &numero);
  return numero;
}
// Verifica si los numeros son iguales, de ser verdad regresa 1 o de lo contrario regresa 0
int verificarIgualdad(int num1, int num2, int num3){
  int igualdad = 0;
  if(num1 == num2 && num2 == num3){
    igualdad = 1;
  }
  return igualdad;
}
// Compara 3 numeros para encontrar el mayor
int encontrarMayor(int num1, int num2, int num3){
  int mayor = 0;
  if(num1 > num2 && num1 > num3){
    mayor = num1;
  }
  else if(num2 > num1 && num2 > num3){
    mayor = num2;
  }
  else{
    mayor = num3;
  }
  return mayor;
}
// Verifica si los numeros son iguales, en ese caso imprime que "son iguales",
// de lo contrario imprime al mayor
void imprimirResultados(int igualdad, int mayor){
  if(igualdad){
    printf("Los numeros son iguales");
  }
  else{
    printf("El mayor es: %d", mayor);
  }
}

/*AUTOR QA: RONSSON RAMIRO MAY SANTOS
ENTRADAS: 9,3,10
SALIDAS: EL MAYOR ES 10
OBSERVACIONES: BIEN.
