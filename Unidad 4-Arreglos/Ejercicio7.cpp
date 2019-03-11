/*
Autor: Alejandro Torre
Entradas: un vector de 50 elementos
Salidas: la media, mediana y moda de los elementos de ese vector
Proceso: Escribir un programa que llene un vector de tamaño n llena con números aleatorios del 0
al 50. El programa debe calcular:
La media de los datos
La moda de los datos
La mediana de los datos.
*/

#include <iostream>
#include <cstdlib>

using namespace std;
const int MAX = 12;

void llenar_vector(int vec[]){ //Funcion para asignar elementos al vector
    int i;
    for(i=0;i<MAX;i++){
            vec[i] = 1+(rand()%MAX);
            cout << vec[i] << "  ";
    }
}
float media(int x[]){ //Funcion para calcular la media
    int i;
    float sum = 0;
    float prom = 0;
    for(i=0;i<MAX;i++){
        sum = sum + x[i]; //se obtiene la suma de los elementos
    }
    prom = sum/MAX; //se promedian entre el numero de datos
    return prom;
}
int moda(int y[]){ //Funcion para calcular la moda
    int aux,i,j;
    int frecuencia = 0;
    int frecuencia_moda = 0;
    int moda = -1;

    for(i=0;i<MAX-1;i++)
        for(j=0;j<MAX-i;j++){
            if(y[j]>y[j+1]){
                aux=y[j];
                y[j]=y[j+1];
                y[j+1]=aux;
            }
        }
    for(i=0;i<MAX-1;i++){
        if(y[i]==y[i+1]){
            if(++frecuencia>frecuencia_moda){
                frecuencia_moda=frecuencia;
                moda=y[i];
            }
            else{
                frecuencia=0;
            }
        }
    }
    return moda;
}
int mediana(int z[]){ //Funcion para calcular la mediana
    int mitad;
    mitad = (((MAX/2) + ((MAX/2)+ 1))/2); //Formula de la mediana
    return z[mitad];
}
int main()
{
    int arr[MAX];
    float med;
    int mod;
    int medium;

    llenar_vector(arr);
    med = media(arr);
    mod = moda(arr);
    medium = mediana(arr);

    cout << endl;
    cout << "La media es " << med << "\n";
    cout << "La moda es " << mod << "\n";
    cout << "La mediana es " <<medium;
    return 0;
}
