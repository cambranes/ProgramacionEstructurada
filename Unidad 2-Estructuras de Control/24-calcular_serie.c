/*
ejercicio 24.
Calcular la suma de los términos de la serie : (1/2)+(2/2^2)+(3/2^3)...+(n/2^n)
Autor: Esteban Abraham Madrazo Parra 31/01/18
 entradas
numero
contador
operacion
suma
denominador
 salidas 
resultado
comentarios: para la resolucion del problema utilice un contador que vaya de 1 hasta el numero
solicitado ya que era necesario en la operacion y para sacar las potencias de 2 (denominador)
inicialice el denominador como uno y cada vez que el contador vaya aumentando, el denominador se multiplicaba
por 2. una vez hecho eso ice la operacion y lego la fui sumando con la variable suma para poder imprimir el esultado
QA
+Victor Ortiz Garcia 01/02/18
+Entradas|      Salidas    |Resultado
+	5   |      1.78125    |    +     
+	7   |     1.9296875   |    +      
+	8   |     1.9609375   |    +
+	10  |     1.98828125  |    +
+
+Comentarios: No deben haber variables no usadas, en este caso "resultado" no fue usada
+
+*/
#include <stdio.h>

int main() {
	/* entradas*/
	float numero=0;
	float contador;
	float operacion=0;
	float suma=0;
	float denominador=1;
	/* salidas */
	float resultado=0;
	printf("ingrese un numero ");
	scanf("%f",&numero);
	for(float contador=1;contador<=numero;contador++) {
		denominador=denominador*2;
		operacion=contador/denominador;
		suma=suma+operacion;
	}
	resultado=suma;
	printf("el resulatdo es %f",resultado);
	return 0;
}
