/*
Autor: Alexis Ake

Problema: Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +... + n.
Entrada: "n" como un numero natural
Salida: la suma de los naturales hasta "n"
*/

#include <stdio.h>

//Prototipos
int leerEntrada();
int calcularResultado(int a);
void imprimirSalida(int b);

int main(){
    //Asignamos a la variable "numero", el valor obtenido de la funcion leerEntrada
    int numero = leerEntrada();

    //Asignamos a la variable "resultado", el valor obtenido de la funcion calcularResultado como imagen de "numero"
    int resultado = calcularResultado(numero);

    //Llamamos a la funcion imprimirSalida con el valor de resultado
    imprimirSalida(resultado);
}
int leerEntrada(){
    int entrada = 0;
    scanf("%i", &entrada);
    return entrada;
}
int calcularResultado(int a){
    /*Calculamos la suma con la formula n(n+1)/2
    donde n es el valor de "a", el cual es el de "numero" del main
    */
    int suma = a*(a+1)/2;
    return suma; //Regresamos el valor de "suma"
}
void imprimirSalida(int b){
    //Imprimimos "b" que en realidad es "resultado" del main
    printf("%i", b);
}