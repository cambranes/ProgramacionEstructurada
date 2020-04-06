#include <stdio.h>

struct frac
{
    int firstNumber;
    int secondNumber;
};

void redo(struct frac *frac);
void add(struct frac *frac, struct frac *fracO, struct frac *fracT);
void sus(struct frac *frac, struct frac *fracO, struct frac *fracT);
void mult(struct frac *frac, struct frac *fracO, struct frac *fracT);
void div(struct frac *frac, struct frac *fracO, struct frac *fracT);

int main()
{
    struct frac frac1, frac2, result;
    printf("Escribe las fracciones de la siguiente forma: -Numerador- -Denominador-");

    scanf("%d %d", &frac1.firstNumber, &frac1.secondNumber);
    scanf("%d %d", &frac2.firstNumber, &frac2.secondNumber);

    printf("\n");
    add(&result, &frac1, &frac2);
    printf("\n");
    sus(&result, &frac1, &frac2);
    printf("\n");
    mult(&result, &frac1, &frac2);
    printf("\n");
    div(&result, &frac1, &frac2);
}
void redo(struct frac *frac)
{
    int marker = 1;
    if ((*frac).firstNumber == 0)
    {
        printf("0");
        return;
    }
    else if ((*frac).secondNumber == 0)
    {
        printf("Error (Not defined)");
        return;
    }
    else
    {
        while (marker == 1)
        {
            if ((*frac).firstNumber % 2 == 0 && (*frac).secondNumber % 2 == 0)
            {
                (*frac).firstNumber /= 2;
                (*frac).secondNumber /= 2;
            }
            else if ((*frac).firstNumber % 3 == 0 && (*frac).secondNumber % 3 == 0)
            {
                (*frac).firstNumber /= 3;
                (*frac).secondNumber /= 3;
            }
            else if ((*frac).firstNumber % 5 == 0 && (*frac).secondNumber % 5 == 0)
            {
                (*frac).firstNumber /= 5;
                (*frac).secondNumber /= 5;
            }
            else if ((*frac).firstNumber % 7 == 0 && (*frac).secondNumber % 7 == 0)
            {
                (*frac).firstNumber /= 7;
                (*frac).secondNumber /= 7;
            }
            else if ((*frac).firstNumber % 11 == 0 && (*frac).secondNumber % 11 == 0)
            {
                (*frac).firstNumber /= 11;
                (*frac).secondNumber /= 11;
            }
            else
            {
                marker = 0;
            }
        }
    }

    if ((*frac).secondNumber == 1)
    {
        printf("%d", (*frac).firstNumber);
    }
    else
    {
        printf("%d, %d", (*frac).firstNumber, (*frac).secondNumber);
    }

    return;
}
void add(struct frac *frac, struct frac *fracO, struct frac *fracT)
{
    printf("La suma es: ");
    (*frac).firstNumber = ((*fracO).firstNumber * (*fracT).secondNumber) + ((*fracT).firstNumber * (*fracO).secondNumber);
    (*frac).secondNumber = (*fracO).firstNumber * (*fracT).secondNumber;
    redo(frac);
}
void sus(struct frac *frac, struct frac *fracO, struct frac *fracT)
{
    printf("La resta es: ");
    (*frac).firstNumber = ((*fracO).firstNumber * (*fracT).secondNumber) - ((*fracT).firstNumber * (*fracO).secondNumber);
    (*frac).secondNumber = (*fracO).secondNumber * (*fracT).secondNumber;
    redo(frac);
}
void mult(struct frac *frac, struct frac *fracO, struct frac *fracT)
{
    printf("La multiplicación es: ");
    (*frac).firstNumber = (*fracO).firstNumber * (*fracT).firstNumber;
    (*frac).secondNumber = (*fracO).secondNumber * (*fracT).secondNumber;
    redo(frac);
}
void div(struct frac *frac, struct frac *fracO, struct frac *fracT)
{
    printf("La división es: ");
    (*frac).firstNumber = (*fracO).firstNumber * (*fracT).secondNumber;
    (*frac).secondNumber = (*fracO).secondNumber * (*fracT).firstNumber;
    redo(frac);
}
