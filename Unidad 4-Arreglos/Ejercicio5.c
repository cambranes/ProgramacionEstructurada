//5. Una empresa de ventas por correo vende cinco diferentes productos, cuyos precios al menudeo
//son: producto1 = $2,98, producto2 = $4,50, producto 3 = $9.98, producto 4 = $4.49 y producto
//5 = $6.87. Escriba el programa que lea una serie de pares de números de la siguiente forma:
//d. Número de producto
//e. Cantidad vendida por día
//Su programa debe calcular y desplegar el valor total al menudeo de los productos vendidos al día.
//Utilice una estructura de selección múltiple (switch) para tal propósito.
//Autor: Rodrigo Hernnadez Gongora

#include <stdio.h>
#define SIZE1 5
#define SIZE2 3

void leerMatriz(float [SIZE1][SIZE2]);
void ventas(float [SIZE1][SIZE2]);
void salidas(float [SIZE1][SIZE2]);

int main() {
    float matriz[SIZE1][SIZE2];
    leerMatriz(matriz);
    ventas(matriz);
    salidas(matriz);
    return 0;
}

void leerMatriz(float matriz[SIZE1][SIZE2]){
    int i=0, j=0;
    for (i=0; i<5; i++) {
        for (j=0; j<2; j++) {
            switch (j) {
                case 0:
                    printf("Introduce el numero de producto\n");
                    break;
                    
                default:
                    printf("Introduce las ventas del dia\n");
                    break;
            }
            scanf("%f", &matriz[i][j]);
        }
    }
}

void ventas(float matriz[SIZE1][SIZE2]){
    int i=0;
    for (i=0; i<5; i++) {
        switch (i) {
            case 0:
                matriz[i][2]=matriz[i][1]*2.98;
                break;
            
            case 1:
                matriz[i][2]=matriz[i][1]*4.50;
                break;
            
            case 2:
                matriz[i][2]=matriz[i][1]*9.98;
                break;
                
            case 3:
                matriz[i][2]=matriz[i][1]*4.49;
                break;
                
            default:
                 matriz[i][2]=matriz[i][1]*6.87;
                break;
        }
    }
}

void salidas(float matriz[SIZE1][SIZE2]){
    int i=0;
    for (i=0; i<5; i++) {
        printf("Las ventas del producto %d fueron %f\n", i+1, matriz[i][2]);
    }
}
