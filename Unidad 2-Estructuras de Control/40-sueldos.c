/*
Autor: César Alejandro González Ortega
Entradas: int numeroTrabajadores, float sueldoInicial
Salidas: float sueldoFinal
Descripción general del proceso:
Se declaran un par de arreglos de tamaño 25 donde se guardarán los sueldos
iniciales y finales de los trabajadores.
Si uno de los sueldos es menor a 800, entonces su sueldo final se guarda como
el anterior multiplicado por 1.15
*/
#include <stdio.h>
int leerNumeroTrabajadores();
float leerSueldoInicial(int);
float calcularSueldoFinal(float);
void imprimir(float,int);
int main(int argc, char *argv[]) {
	int numeroTrabajadores, contador;
	float sueldoInicial[25], sueldoFinal[25];
	numeroTrabajadores=leerNumeroTrabajadores();
	for(contador=0;contador<numeroTrabajadores;contador++){
		sueldoInicial[contador]=leerSueldoInicial(contador+1);
		sueldoFinal[contador]=calcularSueldoFinal(sueldoInicial[contador]);
	}
	for(contador=0;contador<numeroTrabajadores;contador++)
		imprimir(sueldoFinal[contador],contador+1);
	return 0;
}
/*
Se lee el número de trabajadores y se valida que el valor ingresado sea un
entero positivo no mayor a 25
@param:
@return: int numeroTrabajadores
*/
int leerNumeroTrabajadores(){
	int numeroTrabajadores;
	do{
		printf("Ingresar número de trabajadores. Debe ser un entero positivo no mayor a 25\n");
		scanf("%d",&numeroTrabajadores);
	} while(numeroTrabajadores<=0 || numeroTrabajadores>25);
	return numeroTrabajadores;
}
/*
Se llena el vector de sueldos iniciales
@param: int numeroDeTrabajador
@return: float sueldoInicial
*/
float leerSueldoInicial(int numeroDeTrabajador){
	float sueldoInicial;
	printf("Ingresar el sueldo del trabajador %d\n",numeroDeTrabajador);
	scanf("%f",&sueldoInicial);
	return sueldoInicial;
}
/*
Se llena el vector de sueldos finales con los datos de los sueldos iniciales.
Si el sueldo inicial es menor a 800, a su sueldo final se le va a asignar
el valor del inicial multiplicado por 1.15
@param: float sueldoInicial
@return: float sueldoFinal
*/
float calcularSueldoFinal(float sueldoInicial){
	float sueldoFinal=sueldoInicial;
	if (sueldoInicial<800)
		sueldoFinal=sueldoFinal*1.15;
	return sueldoFinal;
}
/*
Se imprime el sueldo final de cada trabajador
@param: float sueldoFinal, int numeroDeTrabajador
@return:
*/
void imprimir(float sueldoFinal,int numeroDeTrabajador){
	printf("El sueldo final del trabajador %d es de %f pesos\n",numeroDeTrabajador,sueldoFinal);
}
