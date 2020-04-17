#include <stdio.h>

typedef struct racional{
    int numerador;
    int denominador;
}racional;

void leerRacional(racional *, racional *); 
racional sumarRacional(racional, racional );
racional restarRacional(racional, racional );
racional multiplicarRacional(racional, racional);
racional dividirRacional(racional, racional);
void simplificarRacional(racional *);
void imprimirRacional(racional, racional, racional, racional);

int main()
{
    racional r1, r2, r3, r4, r5, r6;

    leerRacional(&r1, &r2);
    r3 = sumarRacional(r1, r2);
    r4 = restarRacional(r1, r2);
    r5 = multiplicarRacional(r1, r2);
    r6 = dividirRacional(r1, r2);
    imprimirRacional(r3, r4, r5, r6);

    return 0;
}

void leerRacional(racional *r1, racional *r2)
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

racional sumarRacional(racional r1, racional r2)
{
    racional resultados;
    int numerador, denominador;

    if(r1.denominador != r2.denominador)
    {
        numerador=(r1.numerador*r2.denominador)+(r2.numerador*r1.denominador);
        denominador=(r1.denominador*r2.denominador);
    }
    else
    {
        numerador=r1.numerador + r2.numerador;
        denominador=r1.denominador;
    }
    resultados.numerador=numerador;
    resultados.denominador=denominador;

    simplificarRacional(&resultados);
    return resultados;
}

racional restarRacional(racional r1, racional r2)
{
    racional resultados;
    int numerador, denominador, num1, num2;

    if(r1.denominador != r2.denominador)
    {
        num1=(r1.numerador*r2.denominador);
        num2=(r2.numerador*r1.denominador);

        numerador=num1-num2;
        denominador=(r1.denominador*r2.denominador);
    }
    else
    {
        
        numerador=r1.numerador-r2.numerador;
        denominador=r1.denominador;
    }
    resultados.numerador=numerador;
    resultados.denominador=denominador;

    simplificarRacional(&resultados);
    return resultados;
}

racional multiplicarRacional(racional r1, racional r2)
{
    racional resultados;
    int numerador, denominador;

    numerador = r1.numerador*r2.numerador;
    denominador = r1.denominador*r2.denominador;

    resultados.numerador=numerador;
    resultados.denominador=denominador;

    simplificarRacional(&resultados);

    return resultados;
}

racional dividirRacional(racional r1, racional r2)
{
    racional resultados;
    int numerador, denominador;

    numerador = r1.numerador*r2.denominador;
    denominador = r1.denominador*r2.numerador;

    resultados.numerador=numerador;
    resultados.denominador=denominador;

    simplificarRacional(&resultados);

    return resultados;
}

void simplificarRacional(racional *r1)
{
    int aux1=0, aux2=2;

    if(r1->numerador<0)
    {
        r1->numerador = r1->numerador*(-1);
        aux1++;
    }
    if(r1->denominador<0)
    {
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

void imprimirRacional(racional r3, racional r4, racional r5, racional r6)
{
    printf("%d/%d \n", r3.numerador, r3.denominador);
    printf("%d/%d \n", r4.numerador, r4.denominador);
    printf("%d/%d \n", r5.numerador, r5.denominador);
    printf("%d/%d \n", r6.numerador, r6.denominador);
}