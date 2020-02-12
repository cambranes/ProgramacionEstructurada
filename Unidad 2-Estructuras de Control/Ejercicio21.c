//Equipo 3
//Diego De Gante
//Programa que dado un número entero n determina su factorial.
//Entrada:num (numero deseado por el usuario ha sacar factorial)
//Salida:factorial (resultado de la factorial del numero dado)

#include <stdio.h>

int main()
{
    int num = 0, factor = 1;
    printf("Ingresa el número a sacar factorial\n");
    scanf("%i", &num);

    while(num != 0){
     factor *= num;
     num --;
   }
   printf("%i\n", factor);
   return 0;
}