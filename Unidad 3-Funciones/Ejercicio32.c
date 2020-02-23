/*
Mario Chan Zurita 
Datos de entrada: Dos números que representan dos años
Datos de salida: Cantidad de años bisiestos dentro del rango de los dos años dados
Problema: Dados dos números que representan dos años, determinar la cantidad de años bisiestos
que hay entre los dos años
*/

#include <stdio.h>

//PROTOTIPOS
int entrada();
int calculoAniosBisiestos(int anio1, int anio2);
int salida(int aniosBisiestos);

//MAIN
//Como son dos entradas se llama dos veces la funcion "entrada" para poder ingresar los dos valores
int main(int argc, char** argv) {
	
	int aniobase, aniolimite, resultado, imprimir;
	
	aniobase = entrada();
	aniolimite = entrada();
	
	resultado = calculoAniosBisiestos(aniobase,aniolimite);
	
	imprimir = salida(resultado);
	
	return 0;
}

//FUNCIONES
//Obtiene el valor de anio(entrada)
int entrada(){
	int anio;
	
	scanf("%d", &anio);
	
	return anio;
}
//Verificacion de los años que se encuentran dentro del rango dado para saber cuantos años bisiestos hay
int calculoAniosBisiestos(int anio1, int anio2){
	int aniosBisiestos=0,i;
	for(i=anio1; i<=anio2; i++){
		if(i%4 == 0){
			aniosBisiestos+=1;
		}
	}
	return aniosBisiestos;
}
//Imprime el la cantidad de años Bisiestos(salida)
int salida(int aniosBisiestos){
	printf("%d", aniosBisiestos);
}
