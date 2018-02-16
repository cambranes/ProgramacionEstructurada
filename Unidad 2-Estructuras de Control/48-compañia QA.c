/* Bustamante rigel
Introduccion: El programa efectuara calculos para su reparto de utilidades*/
#include<stdio.h>
/*QA Erick Cardenas
EL programa hara el calculo de las utilidades de n trabajadores. funciona sin errores.
Prueba 1
E:250, 5
S:257.50
Preuba 2
E: 15000 25
S:16050
Prueba 3:
E: 50000, 11
53500 
  */
int main() {
	int a=1;
	float d=0;
	float n=0;
	int t=0;
	int re=0;
	float r=0;
	do {
		printf("Buen dia Trabajador %d, digame cual es su sueldo base\n",a);/*sueldo base*/
			scanf("%f",&d);
			printf("Cual es su antiguedad\n");/*antigueda*/
			scanf("%d",&t);
		if (t>7) {/*valida antiguedad y descuentos*/
			if (t>9) {
				r=(d*.07);
				n = d+r;
			} else {
				r=(d*.05);
				n = d+r;
			}
		} else {
			if (t>4) {
				r=(d*.03);
				n = d+r;
			} else {
				r=(d*.01);
					n = d+r;
				
			}
		}
		printf("\n");
		printf("Su sueldo base es %f\n por atiguedad le corresponde un aumento de %f\n Por lo que usted ganara %f\n",d,r,n);/*  se imprime todos los datos*/
		printf("hay otro cliente, 1 si, 0 no\n");
		scanf("%d",&re);
a=a+a;
	} while (re!=0);
	return 0;
}

