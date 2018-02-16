/*
Autor: Rodrigo Vera
Entradas: float valorPresente, float interes, int periodos
Salidas: float valorFuturo
Procedimiento general:
Se leen los valores necesarios para el cálculo de una cantidad futura.
Se hace el cálculo del interés compuesto y se multiplica por la cantidad invertida.
Se imprime el resultado obtenido.
*/
#include <stdio.h>
void leerValores(float*,float*,int*);
float calcularValorFuturo(float,float,int);
void imprimirValorFuturo(float);
int main(int argc, char *argv[]) {
	float valorPresente=0,interes=0,valorFuturo;
	int periodos=0;
	leerValores(&valorPresente,&interes,&periodos);
	valorFuturo=calcularValorFuturo(valorPresente,interes,periodos);
	imprimirValorFuturo(valorFuturo);
	return 0;
}
/*
Se lee el valor invertido, el porcentaje de interés y el número de periodos,
validando que éste último sea un entero positivo.
Los valores se guardan en las variables del main por el uso de apuntadores.
@param: float*presente, float*interes, int*periodos
@return:
*/
void leerValores(float*presente,float*interes,int*periodos){
	printf("Ingresar valor presente invertido\n");
	scanf("%f",presente);
	printf("Ingresar porcentaje de interés\n");
	scanf("%f",interes);
	do{
	printf("Ingresar número de periodos. Debe ser un entero positivo\n");
	scanf("%d",periodos);
	}while(*periodos<=0);
}
/*
Se calcula el interés compuesto mediante un for para después multiplicar
tal valor con el valor presente para obtener el valor futuro.
@param: float presente, float interes, int periodos
@return: float valorFuturo
*/
float calcularValorFuturo(float presente, float interes, int periodos){
	float valorFuturo,interesCompuesto=1;
	int contador;
	for(contador=0;contador<periodos;contador++)
		interesCompuesto=interesCompuesto*(1+interes/100);
	valorFuturo=presente*interesCompuesto;
	return valorFuturo;
}
/*
Se imprime el valor futuro.
@param: float valorFuturo
@return:
*/
void imprimirValorFuturo(float valorFuturo){
	printf("El valor futuro de la inversión es %f",valorFuturo);
}
