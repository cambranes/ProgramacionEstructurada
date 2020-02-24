#include <stdio.h>
#include <math.h>

int main(void) {
    int x, n, e, f, y,i;

    printf("ingrese el valor de x: ");
    scanf("%d", &x);

    printf("ingrese el valor de n: ");
    scanf("%d", &n);

    e = 1;
    i = 0;
    f = 1;

    while (i < n){
    i = i + 1;
    f = f * i;
    y = (pow(x,i))/f;
    e = e + y;
    }

    printf("el resultado es: ");
    printf("%d", e);
}