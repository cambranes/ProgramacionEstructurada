/**
 * @file Ada6-Racionales.c
 * @author Giovanni Quintal
 * @brief 
 * @version 0.1
 * @date 2020-04-01
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

typedef struct racional{
    int numerador;
    int denominador;
}racional;

/**
* @brief Se inicializan los prototipos de las funciones
*/
void leerRacionales(racional *, racional *); 
racional sumarRacionales(racional, racional );
racional restarRacionales(racional, racional );
racional multiplicarRacionales(racional, racional);
racional dividirRacionales(racional, racional);
void simplificarRacionales(racional *);
void imprimirRacionales(racional, racional, racional, racional);

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
 * @return racional
 */
int main(){
    racional r1, r2, r3, r4, r5, r6;

    leerRacionales(&r1, &r2);
    r3 = sumarRacionales(r1, r2);
    r4 = restarRacionales(r1, r2);
    r5 = multiplicarRacionales(r1, r2);
    r6 = dividirRacionales(r1, r2);
    imprimirRacionales(r3, r4, r5, r6);

    return 0;
}

/**
 * @brief La función leerRacionales se encarga de pedir los valores para las variables correspondientes.
 * 
 * @param r1 
 * @param r2 
 */
void leerRacionales(racional *r1, racional *r2)
{
    int numerador1, denominador1, numerador2, denominador2;
    printf("Primer numerador: ");
    scanf("%d", &numerador1);
    printf("Primer denominador: ");
    scanf("%d", &denominador1);
    printf("Segundo numerador: ");
    scanf("%d", &numerador2);
    printf("Segundo denominador: ");
    scanf("%d", &denominador2);

    r1->numerador=numerador1;
    r1->denominador=denominador1;
    r2->numerador=numerador2;
    r2->denominador=denominador2;
}

/**
 * @brief  En esta función se suma los racionales.
 * @param r1 
 * @param r2 
 * @return racional 
 */
racional sumarRacionales(racional r1, racional r2)
{
    racional result;
    int numerador, denominador, d1, d2, MCM;

    d1=r1.denominador;
    d2=r2.denominador;

    if (d1%d2==0 || d2%d1==0)
    {
        if (d1>d2)
        {
            MCM=d1;
        }
        else
        {
            MCM=d2;
        }
    }
    else
    {
        MCM=d1*d2;
        if (MCM%2==0)
        {
            if ((MCM/2)%d1==0 && (MCM/2)%d2==0)
            {
                MCM=MCM/2;
            }
        }
        
    }
    
    numerador = (r1.numerador*MCM/r1.denominador)+(r2.numerador*MCM/r2.denominador);
    denominador = MCM;

    result.numerador = numerador;
    result.denominador = denominador;

    simplificarRacionales(&result);

    return result;
}

/**
 * @brief En esta función se resta los racionales.
 * 
 * @param r1 
 * @param r2 
 * @return racional 
 */
racional restarRacionales(racional r1, racional r2)
{
    racional result;
    int numerador, denominador, d1, d2, MCM;

    d1=r1.denominador;
    d2=r2.denominador;

    if (d1%d2==0 || d2%d1==0)
    {
        if (d1>d2)
        {
            MCM=d1;
        }
        else
        {
            MCM=d2;
        }
    }
    else
    {
        MCM=d1*d2;
        if (MCM%2==0)
        {
            if ((MCM/2)%d1==0 && (MCM/2)%d2==0)
            {
                MCM=MCM/2;
            }
        }
        
    }
    
    numerador = (r1.numerador*MCM/r1.denominador)-(r2.numerador*MCM/r2.denominador);
    denominador = MCM;

    result.numerador = numerador;
    result.denominador = denominador;

    simplificarRacionales(&result);

    return result;
}

/**
 * @brief En esta función se multiplica los racionales.
 * 
 * @param r1 
 * @param r2 
 * @return racional 
 */
racional multiplicarRacionales(racional r1, racional r2)
{
    racional result;
    int numerador, denominador;

    numerador = r1.numerador*r2.numerador;
    denominador = r1.denominador*r2.denominador;

    result.numerador=numerador;
    result.denominador=denominador;

    simplificarRacionales(&result);

    return result;
}

/**
 * @brief En esta función se divide los racionales.
 * 
 * @param r1 
 * @param r2 
 * @return racional 
 */
racional dividirRacionales(racional r1, racional r2)
{
    racional result;
    int numerador, denominador;

    numerador = r1.numerador*r2.denominador;
    denominador = r1.denominador*r2.numerador;

    result.numerador=numerador;
    result.denominador=denominador;

    simplificarRacionales(&result);

    return result;
}

/**
 * @brief En esta función se simplifica los racionales.
 * 
 * @param r1 
 */
void simplificarRacionales(racional *r1)
{
    int aux1=0, aux2=2;

    if(r1->numerador<0){
        r1->numerador = r1->numerador*(-1);
        aux1++;
    }
    if(r1->denominador<0){
        r1->denominador = r1->denominador*(-1);
        aux1++;
    }
    while (aux2<=r1->numerador && aux2<=r1->denominador)
    {
        if (r1->numerador%aux2==0 && r1->denominador%aux2==0)
        {
            r1->numerador=r1->numerador/aux2;
            r1->denominador=r1->denominador/aux2;
        }
        else
        {
            aux2++;
        }
    }
    if(aux1==1)
    {
        r1->numerador=r1->numerador*(-1);
    }    
}

/**
 * @brief En esta función se imprime todos los racionales.
 * 
 * @param r3 
 * @param r4 
 * @param r5 
 * @param r6 
 */
void imprimirRacionales(racional r3, racional r4, racional r5, racional r6)
{
    printf("SUMA: %d/%d \n", r3.numerador, r3.denominador);
    printf("RESTA: %d/%d \n", r4.numerador, r4.denominador);
    printf("MULTIPLICACION: %d/%d \n", r5.numerador, r5.denominador);
    printf("DIVISION: %d/%d \n", r6.numerador, r6.denominador);
}