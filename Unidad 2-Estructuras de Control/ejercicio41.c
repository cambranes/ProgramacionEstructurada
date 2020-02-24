//Escriba el programa que lea N números y calcule cual es el mayor y el
//menor de esos números. Utilice una estructura de repetición Para…hasta.
//autor:suemy tuyu
#include<stdio.h>
int main(int argc, char *argv[]) {
	int numn=0 ,n=0;
	int i=0, mayor=0, menor=0;
	printf ("ingrese cantidad de numeros");
	scanf("%d",&n);
	for (i=1; 1<=n; i++){
		printf("ingrese numero");
	scanf("%d",numn);
		mayor=numn;
		menor=numn;
	if (numn > mayor)
	{
		mayor=numn;}

	if (numn < menor){
		menor=numn;
		
	}
	}
	printf("el mayor es: ", mayor);
	printf("el menor es: ",  menor);
	
}

