/*Sebastian Echeverria
Intruccion:EL programa va a leer dos angulos y determinara si es agudo, llano, obtuso, concavo*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*entrada*/

	int ang1;
	int ang2; 
	int res;
	int res1;
	int res3;
	
	/*procedimiento*/
	printf("intserte dos angulos:");printf("\n");
	scanf("%d", &ang1);
	scanf("%d", &ang2);
	/*Se verifica la medida  de angulo para cada uno de los casos*/
	/*Se guarda una cantidad para verificar el posible resultado*/
	if (ang1 < 90) {
		res = 1; }
	else {
		if (ang1 == 90) {
			res = 2 ;}
		else {
			if (ang1 > 90) {
				res = 3; }
			else{
				if (ang1 == 180)  {
					res = 4; }
			
				else {
					res = 5;}
				}
			}
	}
	/*Se verifica el segundo angulo*/
	if (ang2 < 90) {
		res1 = 1; }
	else{
		if (ang1 == 90){
			res1 = 2  ;}
		else {
			if (ang1 > 90) {
				res1 = 3;}
			else {
				if (ang1 == 180) {
					res1 = 4;}
				else {
					res1 = 5;}
			}
		}	
	}
	/*Se comparan los 2 angulos*/
	if (ang1 == ang2) {
		res3 = 1;
	}
	else{
		res3 = 2;
	}
	
	/*salida*/ 
	/*Con la cantidad guardada para checar los casos y dar un resultado*/
	switch (res) { 
case 1 :
		printf ("El angulo 1 es agudo"); printf("\n");
		break;
case 2:
				printf("El angulo 1 es recto");printf("\n");
		break;
case 3:
					printf("El angulo 1 es obtuso");printf("\n");
		break;
case 4:
						printf("El angulo 1 es llano");printf("\n");
		break;
case 5 :
							printf("El angulo 1 es concavo"); printf("\n");
		break;
	}
	switch (res1) {
case 1 :
			printf ("El angulo 2 es agudo");printf("\n");
			break;
case 2:
				printf("El angulo 2 es recto");printf("\n");
			break;
case 3:
					printf("El angulo 2 es obtuso");printf("\n");
			break;
case 4:
						printf("El angulo 2 es llano");printf("\n");
			break;
case 5 :
							printf("El angulo 2 es concavo");printf("\n");
		break;
	}	
	if (res3 == 1) {
		printf ("Los angulos son iguales");printf("\n");
							}
	else
		printf("Los angulos no son iguales");	printf("\n");				
	return 0;
}
/*QA 
Carlos Alvares
El programa recibe de manera correcta los valores pero al comparar los negativos
Todos los regresa como agudos y los que son equivalentes no los toma como iguales
ademas no detecta bien los angulos concavos
prueba 1>
entrada
20,-340
salida
agudo,agudo,no son iguales
prueba2:
50,50
augo,agudo,son iguales
prueba 3:
210,180
obtuso,obtuso,no son iguales
*/

