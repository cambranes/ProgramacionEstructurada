#include<stdio.h>
// Bustamante rigel
void lectura();
void operacion();
void escribir();
int a=1;
float d=0;
float n=0;
int t=0;
int re=0;
float r=0;

//Operaciones basicas
int main() {
	
	do {
		lectura();
		operacion();
		escribir();
		a=a+a;//Numero de empleado
	} while (re!=0);
	return 0;
}
//Lectura de las variables
void lectura(){
	printf("Buen dia Trabajador %d, digame cual es su sueldo base\n",a);//sueldo base
	scanf("%f",&d);
	printf("Cual es su antiguedad\n");//antigueda
	scanf("%d",&t);
}
//Operaciones sobre la antiguedad y el sueldo
void operacion(){
	if (t>7) {//valida antiguedad y descuentos
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
}}
//Se escriben los resultados
void escribir(){
		printf("\n");
		printf("Su sueldo base es %f\n por atiguedad le corresponde un aumento de %f\n Por lo que usted ganara %f\n",d,r,n);//  se imprime todos los datos
		printf("hay otro cliente, 1 si, 0 no\n");
		scanf("%d",&re);
	}
