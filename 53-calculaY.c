/*Bustamante Rigel
introduccion: El programa va a lees muchos valores de n y calculara una expresion*/ 
#include<stdio.h>
#include<math.h>

int main() {
	/*Declaro variables*/ 
	float a;
	float c;
	float n;
	float p;
	float r;
	float x;
	printf("Este programa te muestra iteraciones de nx^n / n!\n");
	printf("Hasta que iteracion desea llegar\n");
	scanf("%f",&n);
	printf("Cual es le valor de X\n");
	scanf("%f",&x);
	printf("1\n");
	for (c=1;c<=n;c+=1) {
		/*se iteran las n veces*/
		a = pow(x,c); /* exponente*/
		a = a*c; 
		r = 1;
		for (p=1;p<=c;p+=1) {
			r = r*p; /* se saca Fectorial*/
		}
		p = a/r;
		printf("%f\n",p); /*se imprime resultado*/
	}
	return 0;
}

