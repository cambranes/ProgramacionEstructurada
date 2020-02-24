#include <stdio.h>

//Prototipos de las funciones
void leerEntrada (int *);
int compararNumeros (int, int);
void imprimirSalida (int);


int main() {
    int numeroUno = 0, numeroDos = 0, caso = 0;

    leerEntrada(&numeroUno);
    leerEntrada(&numeroDos);
    caso = compararNumeros(numeroUno, numeroDos);
    imprimirSalida(caso);

    return 0;
}

void leerEntrada(int *_entrada){
    scanf ("%d", _entrada);
}

int compararNumeros (int a, int b){
    if(a%b == 0){
            return 1;
        } else {
            return 2;
        }
}

void imprimirSalida(int c){
    switch (c)
    {
    case 1:
        printf("Si es multiplo");
        break;
    
    case 2:
        printf("No es multiplo");
        break;   
    }
}

