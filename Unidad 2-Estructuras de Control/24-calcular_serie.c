/*
ejercicio 24.
Calcular la suma de los términos de la serie : (1/2)+(2/2^2)+(3/2^3)...+(n/2^n)
Autor: Esteban Abraham Madrazo Parra 31/01/18
 entradas
numero
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

void lectura(int *);
float potencia(int,int);
float sumaserie(int);
void imprimir(float);

int main(){
	int numero;
	float resultado;
	lectura(&numero);
	resultado=sumaserie(numero);
	imprimir(resultado);
	return 0;
}
/* 
Funcion para la lectura de variables
@param variable, 
*/
void lectura(int* variable){
	scanf("%i",variable);
}
/* 
Funcion para la potencia
@param base,exponente
@return potencia
*/
float potencia(int base,int exponente){
	int i, numero=1;
	for(i=1;i<=exponente;i++){
		numero=numero*base;
	}
	return numero;
}
/* 
Funcion para calcular la suma de los terminos de la serie
@param numero; hasta donde llega la serie
@return suma; suma de los terminos de la serie
*/
float sumaserie(int numero){
	float i, operacion, suma;
	for(i=1;i<=numero;i++){
		operacion=i/potencia(2,i);
		suma=suma+operacion;
	}
	return suma;
}
/*
Funcion para imprimir valores
@param valor
*/
void imprimir(float valor){
	printf("El resultado es: %f\n", valor);
}
