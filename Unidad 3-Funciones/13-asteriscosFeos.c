#include <stdio.h>

void Ipad(float numero, int longitud)
{
	char vector[100]; int i;
	printf("Introducir el numero otra vez\n");
	scanf("%s", vector);
    for(i=1;i<=longitud;i++)
	{
		printf("%d",vector[i]);
	}
}


