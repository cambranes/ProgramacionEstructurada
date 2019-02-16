/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: Una "n" cantidad de trabajadores
Salidas: El sueldo de cada trabajador con el aumento (de haber uno)

Procedimiento general:
1.-Leemos la cantidad de trabajadores
2.-Preguntamos el sueldo de cada trabajador
3.-Imprimimos el sueldo de cada uno con el aumento (de haber uno)
*/
#include <stdio.h>

void entradas(int*);
void procedimiento(int);
void impresionSueldo(float, float);

int main()
{
    int numeroTrabajadores;

    printf("Introduce el numero de trabajadores");
    entradas(&numeroTrabajadores);

    printf("Ingrese el sueldo de el/los %i empleado(s) \n", numeroTrabajadores);
    procedimiento(numeroTrabajadores);

	return 0;
}

void entradas(int* numeroTrabajadores){
    scanf("%i", numeroTrabajadores);
}

void impresionSueldo(float sueldo, float aumento){
    // Si el aumento es mayor a 0, entonces imprimimos el sueldo con el aumento
    if(aumento > 0){
        printf("El sueldo es de %f y el aumento fue de %f \n", sueldo, aumento);
    }else {
        printf("El sueldo es de %f \n", sueldo);
    }
}

void procedimiento(int numeroTrabajadores){
    // Definimos el porcentaje de aumento
    float porcentajeAumento = .15;

    // Preguntamos a cada trabajador su sueldo
    for(int i = 0; i < numeroTrabajadores; i++){
        float sueldo = 0;
        float aumento = 0;
        scanf("%f", &sueldo);

        // De ser menor a 800, determinamos un aumento
        if(sueldo < 800){
            aumento = sueldo*porcentajeAumento;
            sueldo += aumento;
        }
        impresionSueldo(sueldo, aumento);
    }
}




