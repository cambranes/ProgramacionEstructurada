/*
  Entradas: Los dos ángulos a evaluar que sean enteros positivos.
  Salidas: Los tipos de ángulo que son resultado de la diferencia entre los dos ángulos
  Procedimiento General:Evalúo los dos ángulos que el usuario pone, de forma que queden en ángulos menores de 360, para posteriormente 
  revisar la diferencia entre los dos valores. Para que de positiva la diferencia, uso una variable que guarde el número evaluando el mayor
  diferencia del menor. Después, la variable la evalúo en su valor respecto a los ángulos de un círulo, de  ahí me imprime el tipo de ángulo
  que se forma (Recto, agudo, llano, etc.)
*/
#include <stdio.h>

int main() {
	int angl1;
	int angl2;
	int anglres = 0;
  printf("Poner números enteros positivos\n");
	scanf("%d", &angl1);
	scanf("%d", &angl2);
	while (angl1 >= 360){
		angl1 = angl1 - 360;
	}
	while (angl2 >= 360){
		angl2 = angl2 - 360;
	}
	if (angl1 < angl2){
		anglres = angl2 - angl1;
	}
	if (angl2 < angl1){
		anglres = angl1 - angl2;
	}
	printf("%d\n", anglres);
	if (anglres == 0){
		printf("Los angulos son iguales\n");
	}
	if (anglres < 90){
		printf("El angulo resultante es agudo\n");
	}
	if ((anglres > 90) && (anglres < 180)){
		printf("El angulo resultante es obtuso\n");
	}
	if (anglres == 90){
		printf("El angulo resultante es recto\n");
	}
	if (anglres == 180){
		printf("Él angulo resultante es llano\n");
	}
	if (anglres > 180){
		printf("El angulo resultante es concavo\n");
	}
	return 0;
}
/*
QA: Luis Gerardo Leon Ortega
entradas: Los dos ángulos a evaluar que sean enteros positivos.
salidas: Los tipos de ángulo que son resultado de la diferencia entre los dos ángulos */
