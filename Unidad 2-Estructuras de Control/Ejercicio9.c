#include <stdio.h>

int main(){

    int multiplos = 0, limite = 0;

    scanf("%i", &limite);
    
    if (limite < 5)
    {
        printf("0");
    } else
    {
        multiplos = limite/5;
        printf("%i", multiplos);
    }
    

}