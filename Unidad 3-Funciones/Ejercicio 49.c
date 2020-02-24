/*Autor: Diego De Gante Pérez
*Entradas: Todos los digitos de tres digitos
*Salidas: El número en donde la suma de los cubos de los digitos sea igual al número
*Proceso:
Calcular todos los números de tres dígitos tales que la suma de los cubos de
los dígitos es igual al número
*/
#include <stdio.h>

void productos(int);

int main() {

    //Entrada y salidas
    int num=0;
    productos(num);
    return 0;
}

//Desarrollo donde compara y va restando
void productos(int num){
    int i,j,result;
    for(i=2; i<=9; i++){
      for(j=1; i<=10; i++){
          num=i*j;
          printf("%i\n",num);
      }
    }
}