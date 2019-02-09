#include <stdio.h>



int main()
{
  int velocidad;
printf("Ingresa una velocidad: " );
scanf("%d", &velocidad );

 if (velocidad >= 100) {
   printf("\n Muy rapido");
 } else if (velocidad == 0){
   printf("\n Detenido");
 }
 return 0;
}
