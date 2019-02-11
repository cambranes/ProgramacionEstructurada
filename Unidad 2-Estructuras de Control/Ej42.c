#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double n;
	for (n=1;n<=100; n++){
	
	double r = sqrt(n);
	printf("Raiz cuadrada de %lf es %lf\n",n,r);
	}
	return 0;
}
