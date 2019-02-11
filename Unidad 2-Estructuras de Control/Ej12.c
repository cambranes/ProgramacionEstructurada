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
//Prueba QA//
/*
Autor QA: Daniel Eduardo Gutiérrez Delfin
Entradas: *******
Salidas:**********
Proceso: Tuvo los siguiente inconvenientes
Ej12.c:10:4: error:implicit declaration of fuction 'ascendente' [-Wimplicit-declaration] 
Ej12.c:15:6: error conflicting types for 'ascendente'
Ej12.c:23:1: error: unterminated comment 
"La funcion está declarada de forma implicita, deberia estar declarada fuera del main"
/*
