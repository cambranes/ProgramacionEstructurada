#include <stdio.h>

//Prototipos de las funciones
void leerEntrada (int *);
int compararNumeros (int, int);
void imprimirSalida (int, int, int);


int main() {
    int numeroUno = 0, numeroDos = 0, caso = 0;

    leerEntrada(&numeroUno);
    leerEntrada(&numeroDos);
    caso = compararNumeros(numeroUno, numeroDos);
    imprimirSalida(numeroUno, numeroDos, caso);

    return 0;
}

void leerEntrada(int *_entrada){
    scanf ("%d", _entrada);
}

int compararNumeros (int a, int b){
    if(a>b){
            return 1;
        } else if (b>a){
            return 2;
        } else {
            return 3;
        }
}

void imprimirSalida(int x, int y, int z){
    switch (z)
    {
    case 1:
        printf("%i %i", x, y);
        break;
    
    case 2:
        printf("%i %i", y, x);
        break;
    case 3:
    printf("%i %i", x, y);
    break;     
    }
}

