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