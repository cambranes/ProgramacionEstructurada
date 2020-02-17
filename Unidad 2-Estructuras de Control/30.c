#include <stdio.h>

int main()
{

    int num1, num2;
    int residuo,mcd;

    printf("ingrese numero 1");
    scanf("%d",&num1);
    printf("ingrese numero 2");
    scanf("%d", &num2);

    do{
            residuo =num1 % num2;
    if (residuo != 0)
    {

        num1=num2;
        num2=residuo;
    }
     else
     {
         mcd=num2;
     }
    }while (residuo !=0);

    printf ("MCD: %d", mcd);
    return 0;
}
