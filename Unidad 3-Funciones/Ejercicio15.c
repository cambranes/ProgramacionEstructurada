/**
 * @file Ejercicio15.c
 * @author Carlos Greene
 * Entrada: Dos fechas con tres numeros enteros cada una
 * Salida: La fecha mayor o un texto con "Son iguales"
 * @brief Descripción: Programa que lee dos fechas (día-mes-año) con tres cantidades enteras e imprima la mayor, si son la misma imprima son iguales.
 * @version 0.1
 * @date 2020-02-21
 * 
 * @copyright Copyright (c) 2020
 */
#include <stdio.h>

/**
 * @brief Se inicializan los prototipos
 */
void leerEntradas(int *, int *, int*, int *, int *, int *);
int determinarDiaMayor(int, int, int, int, int, int);
int determinarMesMayor(int, int, int, int);
int determinarAnioMayor(int, int);
int determinarSiSonIguales(int, int, int, int, int, int);
void imprimirSalidas(int, int, int, int);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecuta el código, dentro contiene las variables que se utilizaron
 * para algoritmo. Tambien contiene las funciones que se encargan de la entrada, procesos y salida.
 * @return int 
 */
int main()
{
    //Entradas
    //Se inicializan las variables
    int day=0, month=0, year=0, day2=0, month2=0, year2=0, dayH=0, monthH=0, yearH=0, aux=0; 

    //Se lee las entradas
    leerEntradas(&day, &month, &year, &day2, &month2, &year2);

    //Proceso 
    dayH=determinarDiaMayor(day, month, year, day2, month2, year2);

    monthH=determinarMesMayor(month, year, month2, year2);

    yearH=determinarAnioMayor(year, year2);

    aux=determinarSiSonIguales(day, month, year, day2, month2, year2);

    //Salida
    imprimirSalidas(dayH, monthH, yearH, aux);

    return 0;
}

/**
 * @brief La función leerEntrada se encarga de que el usuario dé los valores a las variables y luego, a travez de pase por 
 * referencia, las varieble del Main tengran los mismos valores de los que se introdujeron en la función
 * @param _day Dia de la primera fecha
 * @param _month Mes de la primera fecha
 * @param _year Año de la primera fecha
 * @param _day2 Dia de la segunda fecha
 * @param _month2 Mes de la segunda fecha
 * @param _year2 Año de la segunda fecha
 */
void leerEntradas(int *_day, int *_month, int *_year, int *_day2, int *_month2, int *_year2)
{//Se lee las variables
    scanf("%d", _day);
    scanf("%d", _month);
    scanf("%d", _year);
    scanf("%d", _day2);
    scanf("%d", _month2);
    scanf("%d", _year2);
}

/**
 * @brief La función determinarDiaMayor determina el dia de la fecha mayor, comparando los años, meses y días.
 * @param dia Dia de la primera fecha
 * @param mes Mes de la primera fecha
 * @param anio Año de la primera fecha
 * @param dia2 Dia de la segunda fecha
 * @param mes2 Mes de la segunda fecha
 * @param anio2 Año de la segunda fecha
 * @return int Retorna un valor entero que contiene el dia de la fecha mayor
 */
int determinarDiaMayor(int dia, int mes, int anio, int dia2, int mes2, int anio2)
{//Se determina cual dia es mayor 
int diaM=0;
    if(anio>anio2)//Se verifica si el primer año es mayor que el segundo
    { 
      diaM=dia; 
    }
    else if(anio2>anio)//Se verifica si el segundo año es mayor que el primero
    {
        diaM=dia2;
    }
    else if(anio==anio2)//Se verifica si tienen el mismo año
    {
        if(mes>mes2)//Se verifica si el primer mes es mayor que el segundo
        {
            diaM=dia;
        }
        else if(mes2>mes)//Se verifica si el segundo mes es mayor que el primero
        {
            diaM=dia2;
        }
        else if(mes==mes2)//Se verifica si tienen el mismo mes
        {
            if(dia>dia2)//Se verifica si el primer dia es mayor que el segundo
            {
                diaM=dia;
            }
            else if(dia2>dia)//Se verifica si el segundo dia es mayor que el primero
            {
                diaM=dia2;
            }
        }
    }
    return diaM;
}

/**
 * @brief La función determinarMesMayor determina el mes de la fecha mayor, comparando los años y meses.
 * @param mes Mes de la primera fecha
 * @param anio Año de la primera fecha
 * @param mes2 Mes de la segunda fecha
 * @param anio2 Año de la segunda fecha
 * @return int Retorna un valor entero que contiene el mes de la fecha mayor
 */
int determinarMesMayor(int mes, int anio, int mes2, int anio2)
{//Se determina cual dia es mayor 
    int mesM=0;
    if(anio>anio2)//Se verifica si el primer año es mayor que el segundo
    { 
      mesM=mes; 
    }
    else if(anio2>anio)//Se verifica si el segundo año es mayor que el primero
    {
        mesM=mes2;
    }
    else if(anio==anio2)//Se verifica si tienen el mismo año
    {
        if(mes>mes2)//Se verifica si el primer mes es mayor que el segundo
        {
            mesM=mes;
        }
        else if(mes2>mes)//Se verifica si el segundo mes es mayor que el segundo
        {
            mesM=mes2;
        }
        
    }
    return mesM;
}

/**
 * @brief La función determinarAnioMayor determina el año de la fecha mayor, comparando los años.
 * @param anio Año de la primera fecha
 * @param anio2 Año de la segunda fecha
 * @return int Retorna un valor entero que contiene el año de la fecha mayor
 */
int determinarAnioMayor(int anio, int anio2)
{//Se determina cual año es mayor 
    int anioM=0;
    if(anio>anio2)//Se verifica si el primer año es mayor que el segundo
    { 
      anioM=anio; 
    }
    else if(anio2>anio)//Se verifica si el segundo año es mayor que el primero
    {
        anio=anio2;
    }
    return anioM;
}

/**
 * @brief La función determinarSiSonIguales
 * @param dia Dia de la primera fecha
 * @param mes Mes de la primera fecha
 * @param anio Año de la primera fecha
 * @param dia2 Dia de la segunda fecha
 * @param mes2 Mes de la segunda fecha
 * @param anio2 Año de la segunda fecha
 * @return int Retorna un auxiliar que indica que las dos fechas se repiten
 */
int determinarSiSonIguales(int dia, int mes, int anio, int dia2, int mes2, int anio2)
{//Determina si las fechas son iguales
    int _aux=0;
    if(dia==dia2 && mes==mes2 && anio==anio2)
    {
        _aux=1;
    }
    return _aux;
}

/**
 * @brief La función imprimirSalida recibe, a travez de pase por valor, una copia del valor que está en el Main que contiene
 * la cadena de texto con la fecha mayor o iguales, la función sólo se encargará de imprimirlo.
 * @param _dayH  Dia de la fecha mayor
 * @param _monthH Mes de la fecha mayor
 * @param _yearH Año de la fech mayor
 * @param auxf auxiliar que indica que las dos fechas se repiten
 */
void imprimirSalidas(int _dayH, int _monthH, int _yearH, int auxf)
{//Se imprime la salida
    if(auxf==0)//Si el auxiliar es 0, se imprime las fecha mayor
    {
        printf("%d\n", _dayH);
        printf("%d\n", _monthH);
        printf("%d", _yearH);
    }
    else
    {//Si el auxiliar es 1, te envia mesaje que "Son iguales"
        printf("Son iguales");
    }
    
}