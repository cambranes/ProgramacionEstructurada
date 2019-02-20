#include <stdio.h>

/*
Autor: Jose Eduardo Mendez Verdejo 16/Febrero/19
Entradas: Ninguna
Salidas: aquel numero talque la suma de de los cubos de cada digito sea igual al numero
Procedimiento: Mostrara aquellos numeros talque la suma de los cubos de los digitos que componen al numero, sean igual al mismo numero
*/

int proceso(int,int,int,int);
void salida(int);

int main() {
	int num = 100;
    int x=1, y=0, z=0;
	while (num < 1000)
	{

		num = proceso(num,x,y,z);
		num++;
		z++;

	}
	return 0;
}

int proceso(int numero, int x, int y, int z)
{
	int s1 = 1, s2 = 1, s3 = 1;
	int suma = 1;
	while(x <= 9){
		while(y <= 9){
			while(z <= 9){

				//calculando los cubos de cada digito
				s1 = x*x*x;
				s2 = y*y*y;
				s3 = z*z*z;
                
				//la suma de los cubos de los digitos
				suma = s1+s2+s3;

				if(suma == numero){
					salida(numero);
				}
				numero++;
				z++;
			}
			z=0;
			y++;
		}
		y=0;
		x++;
	}
}

void salida(int num){
	printf("El numero %i cumple con la condicion \n",num);
}
