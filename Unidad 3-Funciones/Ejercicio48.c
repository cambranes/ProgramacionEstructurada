/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: sueldo base, antiguedad en la empresa
Salidas: Incentivo, sueldo total y sueldo base, o error por entradas incorrectas

Procedimiento general:
1.-Preguntamos el número de años de antiguedad
2.-Preguntamos antiguedad del empleado
3.-Verificamos si los datos ingresados son válidos
4.-Con su antiguedad, determinamos el porcentaje a otorgar
5.-Definimos el incentivo con el porcentaje obtenido
6.-Calculamos el sueldo total
7.-Asignamos un mensaje de salida de acuerdo a lo escrito por el usuario
*/

#include <stdio.h>
#include <stdlib.h>

void entradas(float*, int*);
int validacionValores(float, int);
float calculoIncentivo(float, int);
float calculoSueldoTotal(float, float);
void salidas(int, float, float, float);

int main()
{
    /*Entradas*/

    float sueldoBase;
    int antiguedad;

    float incentivo;
    float sueldoTotal;

    int cantidadValida;

    /*Procedimiento*/
    printf("Ingresa el sueldo base y la antiguedad en la empresa respectivamente\n");
    entradas(&sueldoBase, &antiguedad);

    //Comprobamos si valores ingresados son validos
    cantidadValida = validacionValores(sueldoBase, antiguedad);

    //Determinamos incentivo y sueldo total
    incentivo = calculoIncentivo(sueldoBase, antiguedad);
    sueldoTotal = calculoSueldoTotal(sueldoBase, incentivo);

    //Con base a la validación, determinamos la salida
    salidas(cantidadValida, sueldoTotal, sueldoBase, incentivo);

    return 0;
}

void entradas(float* sueldoBase, int* antiguedad){
    scanf("%f", sueldoBase);
    scanf("%d", antiguedad) !=2;
}

void salidas(int cantidadValida, float sueldoTotal, float sueldoBase, float incentivo){
    if(cantidadValida){
        printf("El sueldo total es de: $ %f \nEl sueldo base es de: $ %f \nEl incentivo es de: %f", sueldoTotal, sueldoBase, incentivo);
    } else {
        printf("Entrada invalida");
    }
}

float calculoSueldoTotal(float sueldoBase, float incentivo){
    float suma = sueldoBase + incentivo;
    return suma;
}

float calculoIncentivo(float sueldoBase, int antiguedad){
    float porcentajeIncentivo;
    float incentivo;

    // Determinamos el incentivo con base a la antiguedad
    if(antiguedad < 1){
      porcentajeIncentivo = 0;

    } else if(antiguedad < 4){
      porcentajeIncentivo = .01;

    } else if(antiguedad < 7){
      porcentajeIncentivo = .03;

    } else if(antiguedad < 10){
      porcentajeIncentivo = .05;

    } else {
      porcentajeIncentivo = .07;
    }

    incentivo = porcentajeIncentivo * sueldoBase;
    return incentivo;
}

int validacionValores(float sueldoBase, int antiguedad){
    // Se valida si las entradas leidas son validas
    int cantidadValida = 1;
    if(antiguedad <= 0 || sueldoBase <= 0){
        cantidadValida = 0;
    }
    return cantidadValida;
}
