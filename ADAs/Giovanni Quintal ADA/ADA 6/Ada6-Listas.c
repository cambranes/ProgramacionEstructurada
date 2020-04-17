/**
 * @file Ada6-Listas.c
 * @author Giovanni Quintal
 * @brief 
 * @version 0.1
 * @date 2020-04-16
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pet
{
    int edad;
    struct pet* siguiente;
}pet;
typedef pet *petPtr;

/**
 * @brief Se inicializan los prototipos de las funciones
 * 
 */
void insertarOrdenado(petPtr*, int);
petPtr borrar(petPtr, int);
void imprimir(petPtr);
void menu();

/**
 * @brief El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
 * para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
 * 
 * @return int 
 */
int main()
{
    petPtr lista=NULL;
    int _edad, opcion; 
    bool aux=false;

    do
    {
        menu();
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n¿Cuál es la edad del animal?\n");
            scanf("%d", &_edad);
            insertarOrdenado(&lista, _edad);
        break;

        case 2:
            printf("\n¿Cuál elemento deseas eliminar?\n");
            scanf("%d", &_edad);
            lista = borrar(lista, _edad);
        break;
        
        case 3:
            imprimir(lista);
        break;

        default:
            aux=true;
            break;
        }
        
    } while (aux==false);
    return 0;
}

/**
 * @brief Sección donde se pregunta al usuario que desea hacer.
 * 
 */
void menu()
{
    printf("\nMenú\n");
    printf("Elige uno de las opciones:(Solo el número)\n");
    printf("1.\tInsertar un elemento\n");
    printf("2.\tBorrar un elemento\n");
    printf("3.\tImprimir la lista\n");
    printf("Para terminar presiona algún otro botón\n\n");
}

/**
 * @brief La varriable actual guarda el dato.
 * 
 * @param sPtr 
 * @param valor 
 */
void insertarOrdenado(petPtr *sPtr, int valor)
{
    petPtr nuevo;
    petPtr anterior;
    petPtr actual;
    
    nuevo = (pet*)malloc(sizeof(pet));
    if (nuevo!=NULL)
    {
        nuevo->edad=valor;
        nuevo->siguiente= NULL;

        anterior=NULL;
        actual=*sPtr;
   
        while (actual!=NULL && valor>actual->edad)
        {
            anterior=actual;
            actual=actual->siguiente;
        }

        if (anterior==NULL)
        {
            nuevo->siguiente=*sPtr;
            *sPtr=nuevo;
        }
        else
        {
            anterior->siguiente=nuevo;
            nuevo->siguiente=actual;
        }
    }
    else
    {
        printf("Error");
    }
    
}

/**
 * @brief En esta función podremos borrar los datos provenientes las variable actual.
 * 
 * @param actual 
 * @param valor 
 * @return petPtr 
 */
petPtr borrar(petPtr actual, int valor)
{
    petPtr paraBorrar = NULL;
    if (actual!=NULL)
    {
        if (actual->edad==valor)
        {
            paraBorrar=actual;
            actual=actual->siguiente;
            free(paraBorrar);
        }
        else
        {
            actual->siguiente=borrar(actual->siguiente, valor);
        }        
    }
    return actual;
}

/**
 * @brief Esta función imprime la lista final.
 * 
 * @param actual 
 */
void imprimir(petPtr actual)
{
    if (actual==NULL)
    {
        printf("No hay elementos aún");
    }
    else
    {
        printf("\nLista:\n");
        while (actual!=NULL)
        {
            printf("%d\n", actual->edad);
            actual=actual->siguiente;
        }
    }
    
}