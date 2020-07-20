#include <stdio.h>
//Codigo que recibe don numeros racionales, utilizando estructuras de datos y 
//devuelve el resultado de las cuatro operaciones basicas 

//Definir la estructura
typedef struct racional{
    int numerador;
    int denominador;
} racional;

//Prototipos
void leerRacional(racional* );
racional sumarRacionales( racional, racional);
racional restarRacionales( racional, racional);
racional multiplicarRacionales( racional, racional);
racional dividirRacionales(racional, racional);
void simplificarRacional(racional* );
void imprimirRacional(racional ); 

int main(){
    struct racional r1, r2;
    //Funciones de lectura de datos
    leerRacional(&r1);
    leerRacional(&r2);
    //Funciones de operacion
    sumarRacionales(r1,r2);
    restarRacionales(r1,r2);
    multiplicarRacionales(r1,r2);
    dividirRacionales(r1,r2);
    //Funciones de impresion
    printf("Resultado de la suma: \n");
    imprimirRacional(sumarRacionales(r1,r2));
    printf("Resultado de la resta: \n");
    imprimirRacional(restarRacionales(r1,r2));
    printf("Resultado de la multiplicacion: \n");
    imprimirRacional(multiplicarRacionales(r1,r2));
    printf("Resultado de la division: \n");
    imprimirRacional(dividirRacionales(r1,r2));

}

void leerRacional( racional* rac){
	printf("Ingrese el numerador: \n");
    scanf("%d",&rac->numerador);
    printf("Ingrese el denominador: \n");
    scanf("%d",&rac->denominador);
}


racional sumarRacionales(racional r1, racional r2){
    racional resultado;
    int numerador, denominador;
    numerador=r1.numerador*r2.denominador+r1.denominador*r2.numerador;
    denominador=r1.denominador*r2.denominador;
    resultado.numerador=numerador;
    resultado.denominador=denominador;
    simplificarRacional(&resultado);
    return resultado;
}

racional restarRacionales(racional r1, racional r2){
    racional resultado;
    int numerador, denominador;
    numerador=r1.numerador*r2.denominador-r1.denominador*r2.numerador;
    denominador=r1.denominador*r2.denominador;
    resultado.numerador=numerador;
    resultado.denominador=denominador;
    simplificarRacional(&resultado);
    return resultado;
}

racional multiplicarRacionales(racional r1, racional r2){
    racional resultado;
    int numerador, denominador;
    numerador=r1.numerador*r2.numerador;
    denominador=r1.denominador*r2.denominador;
    resultado.numerador=numerador;
    resultado.denominador=denominador;
    simplificarRacional(&resultado);
    return resultado;
}

racional dividirRacionales(racional r1, racional r2){
    racional resultado;
    int numerador, denominador;
    numerador=r1.numerador*r2.denominador;
    denominador=r1.denominador*r2.numerador;
    resultado.numerador=numerador;
    resultado.denominador=denominador;
    simplificarRacional(&resultado);
    return resultado;
}

void simplificarRacional(racional* rac){
    int aux=2;
    while (aux<=rac->numerador || aux<=rac->denominador)
    {
        if (rac->numerador%aux==0 && rac->denominador%aux==0)
        {
            rac->numerador=rac->numerador/aux;
            rac->denominador=rac->denominador/aux;
        }else{
            aux++;
        }
        
    }
    
}

void imprimirRacional(racional resultado){
	//Si el numerador es 0, independientemente del valor del denominador el numero va ser 0
	if(resultado.numerador==0){
		printf("0\n");
	}else{
		// Si el numeraador es igual al denominador significa que es un entero con valor igual a 1
		if (resultado.numerador==resultado.denominador){
        	printf("1\n");
    	}else if (resultado.denominador==1){ 
    		//Si el denominador es 1 significa que es un entero con valor igual al numerador
    		printf("%d\n",resultado.numerador);
		}else{
			//Este es un racional reducido en su maxima expresion 
        	printf("%d/%d\n", resultado.numerador, resultado.denominador);
    	}
	}
    	
}
