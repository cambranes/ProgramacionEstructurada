//Autor: Farid Espadas Escalante
#include <stdio.h> //Algoritmo en C donde introduzcas un número y te diga si es primo o no es primo;

//Entrada | int numero;
//Procesos | Determinar si el número es primo o no; 
//Salida || str "Es primo" or "No es primo"

int read();
int proceso (int esprimo);

int main(){ //Función principal

    int num, es_Primo;

    num = read(); 
    es_Primo = proceso(num);

    if (es_Primo == 1){ //Condicion que determina si es primo o no el número
        printf("Es primo");
    }
    else{
        printf("No es primo");
    }

    return 0;
}


int read(){ //Función donde se lee la variable a determinar si es primo o no

    int num_Scan;

    scanf("%d",&num_Scan);

    return num_Scan;
}


int proceso(int esprimo){  //Función donde se determina si el número se divide entre 2 números enteros nada más, recorriendo de 1 hasta ese núm con un ciclo for. 

    int i, j, cont = 0;

    for (i = 1; i <= esprimo; i++){
        if (esprimo % i == 0){
            cont++;
        }
    }

    if (cont == 2){
        esprimo = 1;
    }
    else{
        esprimo = 0;
    }

    return esprimo;
}