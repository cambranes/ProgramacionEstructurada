#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//Estructuras de datos
typedef struct racional{
    int numerador;
    int denominador;
}racional;

//Prototipos
void leerRacional(racional *); 
racional sumarRacional(racional, racional );
racional restarRacionales(racional, racional );
racional multiplicarRacionales(racional, racional);
racional dividirRacionales(racional, racional);
void simplificarRacional(racional *);
void imprimirRacional(racional);

//Main
int main(){
    racional r1, r2;
    leerRacional(&r1);
    leerRacional(&r2);
    imprimirRacional(sumarRacional(r1,r2));
    imprimirRacional(restarRacionales(r1,r2));
    imprimirRacional(multiplicarRacionales(r1,r2));
    imprimirRacional(dividirRacionales(r1,r2));
    return 0;
}

//Funciones

/*Funcion que otorga valores a la dirección de memoria de una racional*/
void leerRacional(racional *r)
{
    int numerador, denominador;
    scanf("%d", &numerador);
    scanf("%d", &denominador);
   

    r->numerador=numerador;
    r->denominador=denominador;

}

void simplificarRacional(racional *r)
{
    int numerador, denominador;
    numerador = r->numerador;
    denominador = r->denominador;
    if (numerador>denominador)
    {
        for (int i = 2; i <= numerador; i++)
        {
            while (numerador%i == 0 && denominador%i == 0)
            {
                 numerador = numerador/i;
                 denominador = denominador/i;
            }  
        }
    }
    else
    {
        for (int i = 2; i <= denominador; i++)
        {
            while (numerador%i == 0 && denominador%i == 0)
            {
                numerador = numerador/i;
                denominador = denominador/i;
            }  
        }
    }
    r->numerador=numerador;
    r->denominador=denominador;
    
}

/*Función que suma dos racionales*/
racional sumarRacional(racional r1, racional r2)
{
    racional resultado;    
    resultado.denominador = (r1.denominador)*(r2.denominador);
    resultado.numerador = ((resultado.denominador/r1.denominador)*r1.numerador)+((resultado.denominador/r2.denominador)*r2.numerador);
    simplificarRacional(&resultado); 
    return resultado;
}

/*Función que resta un racional a otro racional*/
racional restarRacionales(racional r1, racional r2)
{
    racional resultado;
    resultado.denominador = (r1.denominador)*(r2.denominador);
    resultado.numerador = ((resultado.denominador/r1.denominador)*r1.numerador)-((resultado.denominador/r2.denominador)*r2.numerador);
    simplificarRacional(&resultado);

    return resultado;
}

racional multiplicarRacionales(racional r1, racional r2)
{
    racional resultado;
    resultado.numerador = (r1.numerador)*(r2.numerador);
    resultado.denominador = (r1.denominador)*(r2.denominador);
    simplificarRacional(&resultado);
    return resultado;
}

racional dividirRacionales(racional r1, racional r2)
{
    racional resultado;
    resultado.numerador = (r1.numerador)*(r2.denominador);
    resultado.denominador = (r1.denominador)*(r2.numerador);

    simplificarRacional(&resultado);
    return resultado;
}



void imprimirRacional(racional r)
{
    printf("%d/%d\n", r.numerador, r.denominador);
}