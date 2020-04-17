#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct animal
{
    int edad;
    struct animal* siguiente;
}Animal;
typedef Animal *AnimalPtr;

void insertarOrdenado(AnimalPtr*, int);
AnimalPtr borrar(AnimalPtr, int);
void imprimir(AnimalPtr);
void menu();

int main()
{
    AnimalPtr lista=NULL;
    int _edad, opcion; 
    bool aux=false;

    do
    {
        menu();
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            scanf("%d", &_edad);
            insertarOrdenado(&lista, _edad);
        break;

        case 2:
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

void menu()
{
    printf("Menú\n");
    printf("Elige uno de las opciones de acuerdo a su numero para realizar una accion\n");
    printf("1.\tInsertar un elemento\n");
    printf("2.\tBorrar un elemento\n");
    printf("3.\tImprimir la lista\n");
    printf("Para cerrar el programa preciona otro botón\n");
}

void insertarOrdenado(AnimalPtr *sPtr, int valor)
{
    AnimalPtr nuevo;
    AnimalPtr anterior;
    AnimalPtr actual;
    
    nuevo = (Animal*)malloc(sizeof(Animal));
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
        printf("Sorry men");
    }
    
}

AnimalPtr borrar(AnimalPtr actual, int valor)
{
    AnimalPtr paraBorrar = NULL;
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

void imprimir(AnimalPtr actual)
{
    if (actual==NULL)
    {
        printf("Sorry men, no hay elementos");
    }
    else
    {
        printf("Imprimir lista\n");
        while (actual!=NULL)
        {
            printf("%d\n", actual->edad);
            actual=actual->siguiente;
        }
    }
    
}