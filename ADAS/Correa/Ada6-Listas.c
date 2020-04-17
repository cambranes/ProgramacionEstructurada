
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo
{
    char expresion;
    struct nodo *sigPuntero;
}Nodo;

typedef Nodo *NodoPuntero;

void insertarNodo(NodoPuntero *, char);
void borrarLista(NodoPuntero* );
void imprimirLista(NodoPuntero* );
void iniciarVacia(NodoPuntero*);

int main(){
    NodoPuntero inicioPuntero;
    int eleccion;
    char cad[121];
    iniciarVacia(&inicioPuntero);
    printf("Ingrese expresion\n");
    gets(cad);
    insertarNodo(&inicioPuntero, cad);
    imprimirLista(inicioPuntero);
    borrarlista(&inicioPuntero); 

    return 0;
}

void iniciarVacia(NodoPuntero* SPuntero){
    return SPuntero == NULL;
}
void insertarNodo(NodoPuntero* SPuntero, char cadena[]){
    lon= strlen(cadena);
    NodoPuntero nuevoPuntero;
    NodoPuntero anteriorPuntero;
    NodoPuntero actualPuntero;

    nuevoPuntero=(Nodo*)malloc((lon+1)*sizeof(char));
    if(nuevoPuntero != NULL){ 
        // Si no esta vacio se colocan los datos
        nuevoPuntero->expresion=cadena;
        nuevoPuntero->sigPuntero =NULL;
    }
    anteriorPuntero=NULL;
    actualPuntero= *SPuntero;
    //INCOMPLETO

}

void imprimirLista(NodoPuntero SPuntero){
    if (SPuntero != NULL){
        printf("Lista\n");
        while (SPuntero != NULL){
            printf("%c->",SPuntero->expresion);
            SPuntero=SPuntero->sigPuntero;
        }
        printf("Fin de la lista\n");
    }else{
        printf("Esta lista no tiene elementos\n");
    }

}

void borrarLista(NodoPuntero *SPuntero){
    free(SPuntero);
}