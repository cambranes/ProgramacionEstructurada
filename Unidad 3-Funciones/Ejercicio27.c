/*
	Autor: Carlos Chan Gongora 15/02/2019
	Entradas: Cualquier numero hasta que se ingrese 999.
	Salidas: La media aritmetica de los numeros ingresados.
	Procedimiento general: Lee y suma los numeros que el usuario ingrese, a la vez
  que cuenta el total de numeros ingresados, al ingresar 999 deja de leer y
  calcula la media aritmetica.
*/
#include <stdio.h>

void leerNumeros();

int main(){

  leerNumeros();

  return 0;
}
// Lee los numeros hasta que se ingrese 999
void leerNumeros(){
  int num = 0, contador = 0;
  float media = 0, suma = 0;

  while(num != 999){
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    if(num != 999){
      suma += num;
      contador += 1;
    }
  }
  if(contador > 0){
    media = suma / contador;
    printf("La media es: %f", media);
  }
  else{
    printf("No ingreso ningun numero.");
  }

}
/*AUTOR QA : RONSSON RAMIRO MAY SANTOS
ENTRADAS:4,5,6,7,8,9,999
SALIDAS: 6.500000;
OBSERVACIONES: EL PROGRAMA CALCULA LA MEDIA ARICMETICA DE N NUMEROS CORRECTAMENTE*/
