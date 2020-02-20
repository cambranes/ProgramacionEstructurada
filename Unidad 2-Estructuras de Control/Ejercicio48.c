#include <stdio.h>
/* Programa que lee el suldo base y antiguedad del empleado
# Calcula el incentivo con base a ello
# e imprime el sueldo base, incentivo y sueldo a pagar
#  Audny D. Correa Ceballos (Equipo: 'about:blank') */

//PROTOTIPOS DE LAS FUNCIONES
void leerEntradas(int* , int*);
int calcularIncentivo(int, int );
int calcularSueldoAPagar (int , int );
void imprimirSalidas(int, int, int);

int main(){
	//Definir las varianles
	int sueldoBase, antiguedad, incentivoGenerado, sueldoAPagar;
	//Leer entradas
	leerEntradas(&sueldoBase, &antiguedad);
	//Proceso
	incentivoGenerado= calcularIncentivo(sueldoBase, antiguedad);
	sueldoAPagar = calcularSueldoAPagar (sueldoBase, incentivoGenerado);
	//Salidas
	imprimirSalidas(sueldoBase, incentivoGenerado, sueldoAPagar);
	
	return 0;
}

void leerEntradas(int*_sueldoBase, int*_antiguedad){
	scanf("%d", "%d", _sueldoBase, _antiguedad);
}

int calcularIncentivo(int _sueldoBase, int _antiguedad){
	int incentivo=0;
	if (_antiguedad >= 1 && _antiguedad <= 3);{
		incentivo = _sueldoBase * 0.01;
	}if (_antiguedad >= 4 && _antiguedad <= 6);{
		incentivo = _sueldoBase * 0.03;
	}if (_antiguedad >= 7 && _antiguedad <= 9);{
		incentivo = _sueldoBase * 0.05;
	}if (_antiguedad >= 10);{
		incentivo = _sueldoBase * 0.07;
	}
	return incentivo;
}

int calcularSueldoAPagar (int _sueldoBase, int _incentivoGenerado){
	int sueldoAFuturo;
	sueldoAFuturo = _sueldoBase + _incentivoGenerado;
	return sueldoAFuturo;
}

void imprimirSalidas(int _sueldoBase, int _incentivoGenerado, int _sueldoAPagar){
	printf("%d", "%d", "%d", _sueldoBase, _incentivoGenerado, _sueldoAPagar);
}
