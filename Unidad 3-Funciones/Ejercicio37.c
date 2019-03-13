#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
typedef char bool;

/*
Autor: Alejandro Torre Reyes
Entrada: una cantidad de primeros numeros primos
Salida: la suma de esos numeros primos
Proceso: Determinar la suma de los primeros n números primos.
*/
bool primo();
int read();
int sumaPrimos();

int main()
{
    int num, result;

    num = read();
    result = sumaPrimos(num);
    printf("La suma de los primeros %d numeros primos es %d", num, result);

    return 0;
}

int read(){ //Funcion para leer las entradas
    int r;
    printf("Ingrese la cantidad de numeros primos que quiere sumar \n");
    scanf("%d", &r);
    return r;
}

bool primo(int n){ //Funcion para verificar que sea primo
    int i;
    if(n == 2)
        return true;
    if(n%2 == 0 || n==1 )
        return false;
    for(i=2; i<=n/2; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int sumaPrimos(int y){ //Sumar los numeros que sean primos
    int cont = 0;
    int suma = 0;
    int x = 2;
    while(cont < y){
        if(primo(x)){
            suma = suma + x;
            cont++;
        }
        x++;
    }
    return suma;
}

/*QA:Jorge Chí
Entradas: 3, 2, 0, 10, 5
salidas: OK, devuelven lo esperado*/
