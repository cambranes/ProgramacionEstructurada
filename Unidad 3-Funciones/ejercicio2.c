//Escribe CON MODULOS un programa que reciba 2 numeros y te imprima cual es el numero mayor, cual es el numero menor o si son iguales en caso de que sea necesario.
//Autor: RONSSON RAMIRO MAY SANTOS 16/febrero/2109
//Entradas:Dos numeros enteros
#include <stdio.h>
int max(x,y);

int main(){
int a,b;
//lectura de 2 numeros
printf("Introduce dos numeros: \n");
scanf("%d", &a);
scanf("%d", &b);
if(a != b){
printf("El mayor valor es %d ", max(a,b)); // llamada a la funcion int max(x,y)(solo se ejecuta cuando a y b son diferentes)
}else{
    printf("los valores son equivalentes");
}
return 0;
}

int max(x,y){   //Funcion 1
if(x>y){
    return x;
  }else{
    return y;
  }

}
//Salidas: la comparacion de ambos numeros

/*
QA
Reviso: Guillermo Canto
No compila, faltó agregar el tipo de los parametros al definir la funcion.
*/
