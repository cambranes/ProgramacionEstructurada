#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero, i, divisores;
	divisores=0;
	printf("Introducir el numero: \n");
	scanf("%d", &numero);
	for (i=1;i<=numero;i++)
	{
		if(numero%i==0)
		{
			divisores++;
		}
	}
	if (divisores==2)
	{
		printf("El numero %d es primo.", numero);
	}
	else
		{
		printf("El número %d no es primo.", numero);
    	}

	return 0;
}

