/*
Ejercicio 13 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Eyder Antonio Concha Moreno
Fecha: 4 de Febrero 2019
Entradas: La hora en formato militar
Salidas: La hora en formato estándar
---------------------------------------
Instrucción:
Escribir el programa para convertir una hora leída en horario militar (número de cuatro dígitos)
y la imprima a una hora en formato estándar (hh:00am/pm).
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se comprueba que la hora ingresada por el usuario sea valida
2.-De serlo, obtenemos los primeros y últimos dos caracteres del horario militar
3.-Comprobamos que los primeros y últimos dos caracteres (las horas y minutos) sean validos
4.-De ser validos, comprobamos si las horas son mayor o igual a 12,
   de serlo definimos el sufijo como "pm", de no serlo lo definimos como "am"
5.-Comprobamos si las horas son mayores a 12, de serlo definimos las horas en formato estándar
   como (las horas militares - 12), de otra forma las horas estándar son iguales a las militares.
---------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Entradas*/

    // Definimos las variables requeridas para el horario militar
    int militarTime;
    char unFormatedMilitarTime[4];
    int formatedHours;
    int formatedMinutes;

    // Definimos las variables requeridas para el tiempo estándar
    int standardHours;
    char * timeSuffix;

    // Definimos una variable para encontrar errores
    int notValid = 0;
    int numberOfDigits = 0;

    /*Procedimiento*/

    //Escaneamos el horario militar
    printf("Enter a militar time \n");
    scanf("%s", unFormatedMilitarTime);

    //Verificamos el largo del horario militar
    for(int i = 0; unFormatedMilitarTime[i] != '\0'; i++){
        numberOfDigits++;
    }

    //Transformamos el horario (string) a un entero
    militarTime = atoi(unFormatedMilitarTime);

    //Probamos los casos en los cuales la hora proporcionada por el usuario es incorrecta
    if(militarTime < 0 || numberOfDigits != 4) {
        notValid = 1;
    }

    //Encontrmos las horas y los minutos
    formatedHours = militarTime / 100;
    formatedMinutes = militarTime % 100;

    //Comprobamos la horas y los minutos son valores adecuados
    if(formatedHours > 23 || formatedMinutes > 59){
        notValid = 1;
    }

    //Verificamos si la hora es mayor a las 11, de serlo entonces el sufijo es "PM", de otra manera es "AM"
    timeSuffix = (formatedHours > 11) ?  "PM" : "AM";
    //Verificamos si las horas son mayores a 12, de serlo le restamos 12 para añadirlas al formato estándar
    standardHours = (formatedHours > 12) ? (formatedHours - 12) : formatedHours;

    /*Salidas*/

    //De ser valido, se ejecuta normalmente, de otra manera se imprime "invalid value"
    if(!notValid){
            //Si los minutos son menores a 10, entonces les añadimos un cero para formar el horario adecuado, Ejemplo: de 12:1 a 12:01
        if(formatedMinutes < 10){
            printf("%d:0%d %s", standardHours, formatedMinutes, timeSuffix);
        }else {
            printf("%d:%d %s", standardHours, formatedMinutes, timeSuffix);
        }
    } else {
        printf("Invalid value");
    }

    return 0;
}
/*
Autor QA: Alejandro Torre Reyes
Entradas: 0400, 1600
Salidas: 4:00 AM y 4:00 pm
Proceso. OK
*/
