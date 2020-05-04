#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodo 
{
    char dato; //Caracter en la seccion dato
    struct nodo *siguientePtr; //Puntero al siguiente

}nodo;

typedef nodo *NodoPtr; 

void menu();
int estaVacia (NodoPtr *sPTR);
void imprimeLista(NodoPtr actualPtr);
void insertaOrdenado(NodoPtr*sPtr, char valor);
NodoPtr borrarNodo (NodoPtr actualPtr, char datoA);

int main (){
    NodoPtr inicioPtr=NULL; /*Puntero inicial*/
    int eleccion; /*Seleccion de usuario*/
    char dato; /*char teclado*/ 

    menu(); 
    printf("Selecciona una opcion :)"); 
    scanf("%d", &eleccion); 

    while (eleccion !=3){
        switch (eleccion)
        {
        case 1:
            printf("Introducir un caracter:");
            scanf("\n%c",&dato);
            insertaOrdenado(&inicioPtr, dato); 
            imprimeLista(inicioPtr);
            break;
        case 2: 
            printf("Eliminar el caracter: "); 
            scanf("\n%c",&dato);
            borrarNodo(&inicioPtr, dato); 
            imprimeLista(inicioPtr); 
            break;
        default: 
            printf("opcion invalida.\n\n"); 
            menu(); 
            break;
        }/*Fin Switch*/
        
        printf("Selecciona una opcion nuevamente :)");
        scanf("%d",&eleccion); 
    }/*Fin while*/

    printf("Fin de ejecución\n"); 
    
    return 0; 
}/*Fin del main*/

//Funciones

//Funcion de impresion de menú
void menu(){
    printf("Eleccion: \n"
    "1. Agregar un elemento a la lista. \n"
    "2. Borrar un elemento de la lista. \n"
    "3. Fin del programa.\n");
}//Fin del menu

//Funcion para verificar si la lista esta vacia
int estaVacia (NodoPtr*sPtr){
    return sPtr==NULL; 
}//Fin esta vacia

//Impresion de la lista
void imprimeLista(NodoPtr actualPtr){
    /*Verifica si esta vacia*/ 
    if(actualPtr==NULL){
        printf("Lista vacía. \n\n"); 
    }
    //Si hay datos en la lista 
    else {
        printf("Contenido de la lista: \n");

        /*Mientras no sea el fin de la lista*/ 
        while(actualPtr!=NULL){
            printf("%c-->", actualPtr->dato);
            actualPtr=actualPtr->siguientePtr;
        }
        //Fin de la lista
        printf("\n"); 
    }
}

//Funcion para borrar el Nodo
NodoPtr borrarNodo (NodoPtr actualPtr, char datoA){
    NodoPtr borrNodo = NULL; 
    if (actualPtr !=NULL){
        if (actualPtr ->dato == datoA){
            borrNodo = actualPtr;
            actualPtr= actualPtr->siguientePtr;
            free(borrNodo);
        }
        else {
            actualPtr->siguientePtr = borrarNodo (actualPtr ->siguientePtr, datoA);
        }
    }
}

//Funcion InsertaOrdenado
void insertaOrdenado(NodoPtr*sPtr, char valor){
    NodoPtr nuevoPtr; //Puntero al nodo nuevo
    NodoPtr anteriorPtr; //Puntero al nodo anterior
    NodoPtr actualPtr; //Puntero al nodo actual
    //Creacion de nodo
    nuevoPtr=(nodo*)malloc(sizeof(nodo));
    //Se verifica si hay espacio
    if(nuevoPtr != NULL){
        //Se coloca los datos de escritura
        nuevoPtr->dato=valor;
        nuevoPtr->siguientePtr=NULL;

        anteriorPtr=NULL;
        actualPtr=*sPtr; 

        //While para colocarlo en la lista 
        while (actualPtr != NULL && valor > actualPtr->dato)
        {
            /*Se avanza en el recorrido de la lista*/ 
            anteriorPtr = actualPtr;
            actualPtr = actualPtr->siguientePtr;
        }
        
        //Inserción del nodo al inicio de la lista
        if(anteriorPtr==NULL){
            nuevoPtr->siguientePtr=*sPtr;
            *sPtr=nuevoPtr;
        }
        else{
            //Insesión entre anterior y actual
            anteriorPtr->siguientePtr=nuevoPtr;
            nuevoPtr->siguientePtr=actualPtr;
        }
    }
    else {
        printf("%c No hay memoria disponible \n", valor);
    }
}
