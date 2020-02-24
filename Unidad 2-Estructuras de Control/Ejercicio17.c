#include <stdio.h>

int main(void) {
    int angulo1=0, angulo2=0;

    scanf("%d", &angulo1);
    scanf("%d", &angulo2);

    if (angulo1==angulo2){

            printf("Los angulos son iguales");
        }
        if ((angulo1)<90 && (angulo2)<90){

            printf("Los angulos son agudos");
        }
        if ((angulo1)==90 && (angulo2)==90){

            printf("Los angulos son iguales");
        }
        if ((angulo1)>90 && (angulo2)>90){

            printf("Los angulos son obtusos");
        }
        if ((angulo1)==180 && (angulo2)==180){

            printf("Los angulos son llanos");
        }
        if ((angulo1)>180 && (angulo2)>180){

            printf("Los angulos son concavos");
        }
}