/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Eliges una funcion a, b ó c, ingresas 180 numeros para cualquiera de las funciones.
Salidas: En la funcion a te señala el menor de los numeros ingresados, en la funcion b te devuelve la suma de los numeros de las primeras
5 primeras filas y en la funcion c te devuelve el valor de la suma de las 5 ultimas columnas.
Proceso:  
*/

#include <iostream>

using namespace std;

void funcionA();
void funcionB();
void funcionC();
void ingresarDatosMatriz();
int matriz[15][12];

int main()
{
    ingresarDatosMatriz();
    funcionA();
    funcionB();
    funcionC();
    return 0;
}

void ingresarDatosMatriz(){
    for (int i=0;i<15;i++){
        for (int j=0;j<12;j++){
            cout<<"Ingresa un numero para ["<<i+1<<"]["<<j+1<<"]\n";
            cin>>matriz[i][j];
        }
    }
}

void funcionA(){
    int menor;
    for (int i=0;i<15;i++){
        for (int j=0;j<12;j++){
            if (i==0 & j==0){
                menor=matriz[0][0];
            }else{
                if (matriz[i][j]<menor){
                    menor=matriz[i][j];
                }
            }
        }
    }
    cout<<"El numero menor es "<<menor<<endl;
}

void funcionB(){
    int menor,sumaFilas=0;
    for (int i=0;i<15;i++){
        for (int j=0;j<12;j++){
            if (i<5){
                sumaFilas=sumaFilas+matriz[i][j];
            }
        }
    }
    cout<<"La suma de los elementos de las 5 primeras filas es "<<sumaFilas<<endl;
}

void funcionC(){
    int menor,sumaFilas=0;
    for (int i=0;i<15;i++){
        for (int j=0;j<12;j++){
            if (j>=(12-5)){
                sumaFilas=sumaFilas+matriz[i][j];
            }
        }
    }
    cout<<"La suma de los elementos de las 5 ultimas columnas es "<<sumaFilas<<endl;
}


/*
QA: Jose Mendez Verdejo

Main():
Entradas: matriz de numeros de 180 elementos

Salidas:el menor de la matriz: -798
		suma de las primeras 5 filas:34
		suma de las ultimas 5 columnas: 38

funcionA() : Funciona correctamente, buscando el numero menor de la matriz


funcionB(): Suma las primeras 5 filas de manera correcta.

funcionC(): Suma las ultimas 5 columnas de manera correcta

Comentarios generales:

No se pedia un menu de opciones, inicialmente era ingresar una matriz, y que realize
las tres funciones disponibles, asi evitamos tener que ingresar la matriz cada vez que
se llama a una funcion.

De igual manera, por que una funcion solo para desplegar el menu, pero no solicitar
la opcion dentro de la misma funcion???

En general, cumple con los requisitos iniciales dados.

Muy bien  :)

Jimmy Ojeda: Correcciones realizadas.

*/

