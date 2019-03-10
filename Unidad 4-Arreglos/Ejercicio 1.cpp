#include <iostream>

using namespace std;

int main()
{
    int opcion;
    while (opcion!=4){
        cout<<"Elige una opcion: \n";
        cout<<"1. El menor elemento de la matriz.\n";
        cout<<"2. La suma de los elementos que esten en las primeras 5 filas.\n";
        cout<<"3. La suma de los elementos que esten en las ultimas 5 columnas.\n";
        cout<<"4. Salir.\n";
        cin>>opcion;
        if (opcion==1){
            int matriz[15][12];
            int menor;
            for (int i=0;i<15;i++){
                for (int j=0;j<12;j++){
                    cout<<"Ingresa un numero para ["<<i+1<<"]["<<j+1<<"]\n";
                    cin>>matriz[i][j];
                    if (i==0 & j==0){
                        menor=matriz[0][0];
                    }else{
                        if (matriz[i][j]<menor){
                            menor=matriz[i][j];
                        }
                    }
                }
            }
            cout<<"El elemento menor de la matriz es "<<menor;
        }else {
            if (opcion==2){
                int matriz[15][12];
                int menor,sumaFilas=0;
                for (int i=0;i<15;i++){
                    for (int j=0;j<12;j++){
                        cout<<"Ingresa un numero ["<<i+1<<"]["<<j+1<<"]\n";
                        cin>>matriz[i][j];
                        if (i<5){
                            sumaFilas=sumaFilas+matriz[i][j];
                        }
                    }
                }
                cout<<"La suma de los elementos de las 5 primeras filas es "<<sumaFilas<<"\n";
                }else {
                    if (opcion==3){
                        int matriz[15][12];
                        int menor,sumaFilas=0;
                        for (int i=0;i<15;i++){
                           for (int j=0;j<12;j++){
                               cout<<"Ingresa un numero ["<<i+1<<"]["<<j+1<<"]\n";
                               cin>>matriz[i][j];
                               if (j>=(12-5)){
                                   sumaFilas=sumaFilas+matriz[i][j];
                               }
                           }
                       }
                       cout<<"La suma de los elementos de las 5 ultimas columnas es "<<sumaFilas;
                    }else {
                        cout<<"Vuelve pronto";
                    }
                }
            }
        }
    return 0;
}
