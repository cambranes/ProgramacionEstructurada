/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Se generan 2500 numeros al azar y se guardan en la matriz "matriz" de 50 por 50
Salidas: Se imprimen los numeros pares encontrados en "matriz" y se da el valor de numeros impares contenidos en "matriz"
Proceso: Se verifica uno por uno si los elementos de "matriz" son pares o impares, en caso de ser par se imprime, en caso de ser impar
se guarda en un contador de numeros impares
*/ 

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int matriz[50][50];
void numerosMatriz();
void pares(int&);

int main()
{
    srand(time(NULL));
    int sumaImpares=0;
    numerosMatriz();
    pares(sumaImpares);
    cout<<"\nSe encontraron "<<sumaImpares<<" numeros impares";
    return 0;
}

void numerosMatriz(){
    //Se generan los 2500 numeros al azar del 1 al 100
    for (int i=0;i<50;i++){
        for (int j=0;j<50;j++){
            matriz[i][j] = rand()%101;
        }
    }
}

void pares(int &sumaImpares){
    //Se verifica uno por uno si los elementos de la matriz son pares o impares
    for (int i=0;i<50;i++){
        for (int j=0;j<50;j++){
            if (matriz[i][j]%2==0){
                //Si es par se imprime
                cout<<matriz[i][j]<<" ";
            }else {
                //Si es impar se aumenta el contador
                sumaImpares=sumaImpares+1;
            }
        }
    }
}

/*
QA: Jose Mendez Verdejo

Entradas: ninguna
Salidas:
todos los numeros pares de la matriz de forma correcta

Se encontraron 1284 numeros impares Correcto

funcion numerosMatriz(): Añade todos los elemtos de forma correcta dentro dentro
							del rando establecido (0-100).

funcion pares(): Imprimte todos los numeros pares y cuenta de manera correcta
					todos los numeros impares de la matriz.

comentarios: Funciona de manera correcta, aunque seria mas interesante tener
			  una constante para definir el tamaño y los limites en los ciclos for.

Muy bien hecho  :)
*/
