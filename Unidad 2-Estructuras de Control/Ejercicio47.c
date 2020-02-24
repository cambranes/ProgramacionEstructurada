#include <stdio.h>

#include <conio.h>

main()

{

float sueldo, afp, isss, renta, sn;

char nombre[50];

clrscr();

printf("Introduzca el Nombre del empleado:\n");

scanf("%s", nombre);

printf("Su sueldo es:\n");

scanf("%f", &sueldo);

afp=sueldo*0.07;

isss=sueldo*0.05;

renta=sueldo*0.10;

sn=sueldo-(afp+isss+renta);

printf("El empleado %s\n", nombre);

printf("Posee un sueldo neto de %.2f\n", sn);

getch();

return 0;

}