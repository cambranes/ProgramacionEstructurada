/*
Autor: Raul Rivadeneyra 2/2/2019
Entradas:(n € R+ | n < 2147483648)
Salidas: Media aritmetica de las diferentes entradas
Procedimiento general: Lee y suma numeros hasta que 999 haya sido ingresado y depues los divide
                       entre la cantidad de numeros ingresados
*/

#include "stdio.h"

int main() {
  //Inputs
  float n = 0;
  float sum = 0;
  int counter = 0;

  //Process
  while (n != 999){
      scanf("%f", &n);
      if (n != 999){
        sum = sum + n;
        counter++;
      }
  }
  float mean = sum / counter;

  //Outputs
  printf("The mean is: %.3f\n", mean);
  return 0;
}

/*
QA: Realizó: Jose Mendez
Entradas: (1,2,3,4,5,6,7,8,9,999) , (-9,0,63,54,999)
Salidas: 5 , 27
Funciona correctamente
*/
