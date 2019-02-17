/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: un numero entero
Salidas: la suma de la serie (1/2) + (2/4) + (3/8) + ... + (n/2^n)
Procedimiento general:
1.-Leemos un numero del usuario
2.-Realizamos la serie hasta el numero establecido, sumando cada resultado a la variable "suma"
3.-Retornamos el resultado
4.-Asignamos el resultado a otra variable "sumaDeSerie"
5.-Imprimimos el resultado
*/
#include <stdio.h>

void entradas(int*);
float exponencial(int, int);
float serie(int);

int main()
{
    int numero;
    float sumaDeSerie;

    printf("Introduce un numero para realizar la suma de la serie \n");
    entradas(&numero);
    sumaDeSerie = serie(numero);
    printf("La suma de la serie es: %f", sumaDeSerie);

	return 0;
}

void entradas(int* numero){
    scanf("%i", numero);
}

float serie(int repeticiones){
    float suma = 0;
    // Repetimos la serie n cantidad de veces
    for(int i = 1; i <= repeticiones; i++){
        suma += (i/exponencial(2, i));
    }
    // Retornamos la suma
    return suma;
}

float exponencial(int base,int exponente){
    int resultado = 1;
    // Elevamos la base la cantidad de veces establecidas por la variable "exponente"
    for(int i = exponente; i > 0; i--){
        resultado *= base;
    }
    return resultado;
}




