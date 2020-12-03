#include <stdio.h>

struct racional{
    int numerador;
    int denominador;
};

void leerRacional(struct racional *r1, struct racional *r2); 
struct racional sumarRacional(struct racional r1, struct racional r2);
struct racional restarRacionales(struct racional r1, struct racional r2);
struct racional multiplicarRacionales(struct racional r1, struct racional r2);
struct racional dividirRacionales(struct racional r1, struct racional r2);
void simplificarRacional(struct racional *r1);
void imprimirRacional(struct racional r3, struct racional r4, struct racional r5, struct racional r6);

main(){
    struct racional r1, r2, r3, r4, r5, r6;

    leerRacional(&r1, &r2);
    r3 = sumarRacional(r1, r2);
    r4 = restarRacionales(r1, r2);
    r5 = multiplicarRacionales(r1, r2);
    r6 = dividirRacionales(r1, r2);
    imprimirRacional(r3, r4, r5, r6);

    return 0;
}

void leerRacional(struct racional *r1, struct racional *r2)
{
    int numerador1, denominador1, numerador2, denominador2;
    scanf("%d", &numerador1);
    scanf("%d", &denominador1);
    scanf("%d", &numerador2);
    scanf("%d", &denominador2);

    r1->numerador=numerador1;
    r1->denominador=denominador1;
    r2->numerador=numerador2;
    r2->denominador=denominador2;

}

struct racional sumarRacional(struct racional r1, struct racional r2)
{
    struct racional resultados;
    int numerador, denominador, d1, d2, mcm;

    d1=r1.denominador;
    d2=r2.denominador;

    if (d1%d2==0 || d2%d1==0)
    {
        if (d1>d2)
        {
            mcm=d1;
        }
        else
        {
            mcm=d2;
        }
    }
    else
    {
        mcm=d1*d2;
        if (mcm%2==0)
        {
            if ((mcm/2)%d1==0 && (mcm/2)%d2==0)
            {
                mcm==mcm/2;
            }
        }        
    }
    
    numerador = (r1.numerador*mcm/r1.denominador)+(r2.numerador*mcm/r2.denominador);
    denominador = mcm;

    resultados.numerador = numerador;
    resultados.denominador = denominador;

    simplificarRacional(&resultados);

    return resultados;
}

struct racional restarRacionales(struct racional r1, struct racional r2)
{
    struct racional resultados;
    int numerador, denominador, d1, d2, mcm;

    d1=r1.denominador;
    d2=r2.denominador;

    if (d1%d2==0 || d2%d1==0)
    {
        if (d1>d2)
        {
            mcm=d1;
        }
        else
        {
            mcm=d2;
        }
    }
    else
    {
        mcm=d1*d2;
        if (mcm%2==0)
        {
            if ((mcm/2)%d1==0 && (mcm/2)%d2==0)
            {
                mcm==mcm/2;
            }
        }
        
    }
    
    numerador = (r1.numerador*mcm/r1.denominador)-(r2.numerador*mcm/r2.denominador);
    denominador = mcm;

    resultados.numerador = numerador;
    resultados.denominador = denominador;

    simplificarRacional(&resultados);

    return resultados;
}

struct racional multiplicarRacionales(struct racional r1, struct racional r2)
{
    struct racional resultados;
    int numerador, denominador;

    numerador = r1.numerador*r2.numerador;
    denominador = r1.denominador*r2.denominador;

    simplificarRacional(&resultados);

    return resultados;
}

struct racional dividirRacionales(struct racional r1, struct racional r2)
{
    struct racional resultados;
    int numerador, denominador;

    numerador = r1.numerador*r2.denominador;
    denominador = r1.denominador*r2.numerador;

    simplificarRacional(&resultados);

    return resultados;
}

void simplificarRacional(struct racional *r1)
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

void imprimirRacional(struct racional r3, struct racional r4, struct racional r5, struct racional r6)
{
    printf("%d/%d \n", r3.numerador, r3.denominador);
    printf("%d/%d \n", r4.numerador, r4.denominador);
    printf("%d/%d \n", r5.numerador, r5.denominador);
    printf("%d/%d \n", r6.numerador, r6.denominador);
}