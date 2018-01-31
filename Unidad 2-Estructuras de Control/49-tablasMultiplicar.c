#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, j;
	for(i=2;i<=9;i++)
	{
		printf("Tabla del %d\n", i);
		for(j=2;j<=9;j++)
		{
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}

