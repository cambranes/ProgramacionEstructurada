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
/*QA Erick Cardenas
El programa debe recibir un valor de n que denomina la extension de la expresion
y x que es una variable de la expresion no se vieron problemas con excepcion de que 
se repetia el ultimo valor en varias ocasiones.
Prueba 1
E:6, 5
S:
1
5.000000
25.000000
62.500000
104.166664
130.208328
130.208328
Prueba 2
E: 2,2
S:
1
2.000000
4.000000
4.000000
Prueba 3
E: 12, 4
S:
1
4.000000
16.000000
32.000000
42.666668
42.666668
34.133335
22.755556
13.003175
6.501587
2.889594
1.155838
0.420305
*/
