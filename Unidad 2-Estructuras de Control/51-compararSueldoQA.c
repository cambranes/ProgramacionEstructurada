/*
Autor:Zeus Sarmiento 29/Enero/18
Entradas:ID numérico, edad y sueldo de 10 personas
Salidas: Cuántas de llas son mayores a 35 años y ganan entre 5000 y 7500
Procedimiento general: mediante un ciclo, comprarar la edad y el sueldo de cada persona y sumar con un contador

*/
 
#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int contador=0, ID, edad;
	float sueldo;
	/*Entradas*/
	/*Procedimiento*/                     /* En este caso, la entrada se mezcla con el procedimiento */
	for(int i=1;i<=10;i=i+1)
	{
		scanf("%d %d %f",&ID,&edad,&sueldo);
		if(edad>35&&sueldo>=5000.00&&sueldo<=7500.00)
		{
			contador=contador+1;		/*Si cumple las 3 condiciones, sumamos a nuestro contador */
		}
	}
	/*Salidas*/
	printf("%d persona(s) mayor(es) a 35 anios obtuvo entre 5000.00 y 7500.00 pesos",contador);
	return 0;
}
