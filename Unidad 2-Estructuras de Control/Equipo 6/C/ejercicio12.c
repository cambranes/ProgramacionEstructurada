/*ejercicio 12.-Escribir el programa que lea 2 números y los imprima de mayor a menor. */

#include<stdio.h> //librerias
#include<math.h>

int main(){
   int a,b ;                                                                    //se declaran los 2 valores
   printf("Digite 2 numeros , asi el programa los ordenara de mayor a menor: ");//se solicitan 2 valores al usuario
   scanf("%i %i",&a,&b);
   ascendente(a,b);


return 0;
}
void ascendente(int a, int b){                                                  //se procede a llamar a la funcion ascendente
if (a>=b){
        printf("%i %i",a,b);                                                    // se imprimen los valores
}else{
   printf("%i %i",b,a);
}
}
