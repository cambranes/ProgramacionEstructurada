/*
Autor: Alejandro Torre
Entradas: la cantidad de productos vendidos de un cierto tipo
Salidas: El desglose de los tipos de productos y su total vendido
Proceso: Una empresa de ventas por correo vende cinco diferentes productos, cuyos precios al menudeo
son: producto1 = $2,98, producto2 = $4,50, producto 3 = $9.98, producto 4 = $4.49 y producto
5 = $6.87. Escriba el programa que lea una serie de pares de números de la siguiente forma:
d. Número de producto
e. Cantidad vendida por día
Su programa debe calcular y desplegar el valor total al menudeo de los productos vendidos al día.
Utilice una estructura de selección múltiple (switch) para tal propósito.
*/

#include <iostream>

using namespace std;

void ventas_menudeo(double lista_precios[]){ //Funcion para calcular las ventas totales

    double venta[5];
    int i, cantidad;

    for(i=1;i<=5;i++){
    cout << "Ingrese la cantidad vendida del producto " << i <<"\n";
    cin >> cantidad;

    switch(i){
    case 1:
        venta[0] = ((venta[0]) + (lista_precios[0]*cantidad));
        break;
    case 2:
        venta[1] = ((venta[1]) + (lista_precios[1]*cantidad));
        break;
    case 3:
        venta[2] = ((venta[2]) + (lista_precios[2]*cantidad));
        break;
    case 4:
        venta[3] = ((venta[3]) + (lista_precios[3]*cantidad));
        break;
    case 5:
        venta[4] = ((venta[4]) + (lista_precios[4]*cantidad));
        break;
    }
}
    for(i=0;i<5;i++){
        cout << "Producto " << i+1 << "- Venta Total: " << venta[i] << "\n";
    }
}
int main()
{
    double precio[5] = {2.98,4.50,9.98,4.49,6.87};
    ventas_menudeo(precio);

    return 0;
}
/*QA
Autor:Daniel Eduardo Gutiérrez Delfín
Compila
Entradas: 300,300,300,300,300
Salidas: 894,1350,1.2018e+262,1347,2061
Comentarios:La Tercera salida falla con el calculo del resultado, del resto todo bien*/
