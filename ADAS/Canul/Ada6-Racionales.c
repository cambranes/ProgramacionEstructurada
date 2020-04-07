#include <stdio.h>
/* Ejercicio que recibe dos numeros racionales (fracciones) y realiza 4 operaciones basicas:
1.Suma
2.Resta
3.Multiplicacion
4.Division
Para resolverlo utiliza estructura de datos
Autor: Pamela Canul*/

//Se define la estructura del racional 
typedef struct racional
{
    int numerador; 
    int denominador; 
}racional; 

//Prototipos de las fuciones a utilizar
void leerRacional (racional* );
racional sumarRacionales (racional r1, racional r2);
racional restarRacionales (racional r1,racional r2); 
racional multiplicarRacionales (racional r1, racional r2); 
racional dividirRacionales (racional r1, racional r2);
void simplificarRacional (racional *); 
void imprimirRacional (racional r3); 

int main (){
    racional r1, r2, r3; 

    //Funcion para leer los racionales
    leerRacional (&r1);
    leerRacional (&r2);

    /*Funciones para las operaciones*/
    sumarRacionales (r1, r2);
    restarRacionales (r1, r2);
    multiplicarRacionales (r1, r2); 
    dividirRacionales (r1, r2);

    //Simplificar e imprimir los resultados
    printf("Suma: \n"); 
    imprimirRacional(sumarRacionales(r1, r2)); 
    printf("Resta: \n"); 
    imprimirRacional(restarRacionales(r1, r2));
    printf("Multiplicacion: \n"); 
    imprimirRacional(multiplicarRacionales(r1, r2));
    printf("Division: \n"); 
    imprimirRacional(dividirRacionales(r1, r2));

    return 0;    
}

//Leer los racionales
void leerRacional( racional* raci){
	printf("Ingrese el numerador: \n");
    scanf("%d",&raci->numerador);
    printf("Ingrese el denominador: \n");
    scanf("%d",&raci->denominador);
} 

//Sumar los racionales
racional sumarRacionales (racional r1, racional r2) {
    racional r3;
    int numerador, denominador; 
    numerador= (r1.numerador*r2.denominador)+(r1.denominador*r2.numerador); 
    denominador=r1.denominador*r2.denominador; 
    r3.numerador=numerador; 
    r3.denominador=denominador;
    simplificarRacional(&r3);
    return r3; 
}

//Restar los racionales
racional restarRacionales (racional r1, racional r2) {
    racional r3;
    int numerador, denominador; 
    numerador= (r1.numerador*r2.denominador)-(r1.denominador*r2.numerador); 
    denominador=r1.denominador*r2.denominador; 
    r3.numerador=numerador; 
    r3.denominador=denominador;
    simplificarRacional(&r3);
    return r3; 
}

//Multiplicar los racionales 
racional multiplicarRacionales (racional r1, racional r2) {
    racional r3;
    int numerador, denominador; 
    numerador= r1.numerador*r2.numerador; 
    denominador=r1.denominador*r2.denominador; 
    r3.numerador=numerador; 
    r3.denominador=denominador;
    simplificarRacional(&r3);
    return r3; 
}

//Dividir racional
racional dividirRacionales (racional r1, racional r2) { 
    racional r3; 
    int numerador, denominador; 
    numerador= r1.numerador * r2.denominador;
    denominador= r1.denominador * r2.numerador; 
    r3.numerador=numerador; 
    r3.denominador=denominador; 
    simplificarRacional(&r3); 
    return r3; 
}

//simplificar el racional resultante 
void simplificarRacional (racional *raci) {
    int simp=2;
    while (simp<=(*raci).numerador  || simp<=(*raci).denominador){
        if ((*raci).numerador%simp==0 && (*raci).denominador%simp==0){
            (*raci).numerador=(*raci).numerador/simp;
            (*raci).denominador=(*raci).denominador/simp;
        }
        else {
            simp++;
        }
    }
}

//Imprimir el racional resultante 
void imprimirRacional (racional r3) { 
    //Para imprimirlo se considerara todos los casos, por ejemplo si el numerador es igual a cero o si el denominador es igual a uno o si el numerador y el denominador son iguales
    //Numerador igual a cero
    if(r3.numerador==0){
        printf("0\n");
        //si el numerador es igual al denominador, si el denominador es igual a 1 o el resultado simplivicado
    }else {
        if(r3.numerador==r3.denominador){
            printf("1\n");
    }else if(r3.denominador==1){
        printf("%d\n",r3.numerador);
    }else { 
        printf("%d/%d\n",r3.numerador,r3.denominador);
    }
}
