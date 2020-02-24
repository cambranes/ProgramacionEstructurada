#include <stdio.h>
#include <math.h>

// Variables Globales

float initialNumber, acum, i;

void entrada() {
    scanf("%f", &initialNumber);
}

void proceso() {
    acum = 0;
    for (int i = 0; i <= initialNumber; i++)
    {
        acum = acum + ((i)/ (pow(2,i)));
    }
    
}
void salida() {
    printf("%f", acum);
}

int main() {
    entrada();
    proceso();
    salida();
}