#include <stdio.h>

struct fracciones
{
    int nominador;
    int denominador;
};

void reduccion(struct fracciones *fracc);
void suma(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2);
void resta(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2);
void mult(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2);
void div(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2);

int main () {
    struct fracciones fraccionPrim, fraccionSec, fraccionRes;

    printf("\n");
    printf("Escribe la fracción en formato <Numerador> <Denominador>, respetando los espacios y dejando un salto de línea entra cada fracción: \n");
    scanf("%d %d", &fraccionPrim.nominador, &fraccionPrim.denominador);
    scanf("%d %d", &fraccionSec.nominador, &fraccionSec.denominador);


    printf("\n");

    suma(&fraccionRes, &fraccionPrim, &fraccionSec);

    resta(&fraccionRes, &fraccionPrim, &fraccionSec);

    mult(&fraccionRes, &fraccionPrim, &fraccionSec);

    div(&fraccionRes, &fraccionPrim, &fraccionSec);

    printf("\n");
}

void reduccion(struct fracciones *fracc) {

    int flag = 1;

    if ((*fracc).nominador == 0) {
        printf("\n\033[32m0\033[0m\n");
        return;
    } else if ((*fracc).denominador == 0) {
        printf("\n\033[32mIndef\033[0m\n");
        return;
    } else {
        while(flag == 1) {
            if ((*fracc).nominador % 2 == 0 && (*fracc).denominador % 2 == 0) {
                (*fracc).nominador /= 2;
                (*fracc).denominador /= 2;     
            } else if ((*fracc).nominador % 3 == 0 && (*fracc).denominador % 3 == 0) {
                (*fracc).nominador /= 3;
                (*fracc).denominador /= 3;
            } else if ((*fracc).nominador % 5 == 0 && (*fracc).denominador % 5 == 0) {
                (*fracc).nominador /= 5;
                (*fracc).denominador /= 5;
            } else if ((*fracc).nominador % 7 == 0 && (*fracc).denominador % 7 == 0) {
                (*fracc).nominador /= 7;
                (*fracc).denominador /= 7;
            } else if ((*fracc).nominador % 11 == 0 && (*fracc).denominador % 11 == 0) {
                (*fracc).nominador /= 11;
                (*fracc).denominador /= 11;
            } else {
                flag = 0;
            }
        }
    }

    if ((*fracc).denominador == 1) {
        printf("\033[32m\n%d\033[0m\n", (*fracc).nominador);
    } else {
        printf("\033[32m\n%d\033[35m/\033[32m%d\033[0m \n", (*fracc).nominador, (*fracc).denominador);
    }

    return;
}

void suma(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2) {
    printf("La suma de las fracciones es: ");
    (*fracc).nominador = ((*fracc1).nominador * (*fracc2).denominador) + ((*fracc2).nominador * (*fracc1).denominador);
    (*fracc).denominador = (*fracc1).denominador * (*fracc2).denominador;
    reduccion(fracc);
}

void resta(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2) {
    printf("La resta de las fracciones es: ");
    (*fracc).nominador = ((*fracc1).nominador * (*fracc2).denominador) - ((*fracc2).nominador * (*fracc1).denominador);
    (*fracc).denominador = (*fracc1).denominador * (*fracc2).denominador;
    reduccion(fracc);
}

void mult(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2) {
    printf("La multiplicación de las fracciones es: ");
    (*fracc).nominador = (*fracc1).nominador * (*fracc2).nominador;
    (*fracc).denominador = (*fracc1).denominador * (*fracc2).denominador;
    reduccion(fracc);
}

void div(struct fracciones *fracc, struct fracciones *fracc1, struct fracciones *fracc2) {
    printf("La división de las fracciones es: ");
    (*fracc).nominador = (*fracc1).nominador * (*fracc2).denominador;
    (*fracc).denominador = (*fracc1).denominador * (*fracc2).nominador;
    reduccion(fracc);
}