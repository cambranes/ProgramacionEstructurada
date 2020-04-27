#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct animal
{
    int edad;
    struct animal* siguiente;
}Animal;
typedef Animal *AnimalPtr;

void menu(int *);
void leerParaInsertar(int*);
void insertarOrdenado(AnimalPtr*, int);
void leerParaBorrar(int*);
AnimalPtr borrar(AnimalPtr, int);
void imprimirLista(AnimalPtr);
void busquedaBinaria(AnimalPtr);
void leerParaBusqueda(int *);
int totalNodos(AnimalPtr);
int compareTo(AnimalPtr, int, int);
void imprimirBusqueda(int, int);


int main()
{
    AnimalPtr lista=NULL;
    int _edad, opcion; 
    bool aux=false;

    do
    {
        menu(&opcion);

        switch (opcion)
        {
        case 1:
            leerParaInsertar(&_edad);
            insertarOrdenado(&lista, _edad);
        break;

        case 2:
            leerParaBorrar(&_edad);
            lista = borrar(lista, _edad);
        break;
        
        case 3:
            imprimirLista(lista);
        break;

        case 4:
            busquedaBinaria(lista);
        break;

        default:
            aux=true;
        break;
        }
        
    } while (aux==false);
    return 0;
}

void menu(int *opcion)
{
    printf("Menú\n");
    printf("Elige uno de las opciones de acuerdo a su numero para realizar una accion\n");
    printf("1.\tInsertar un elemento\n");
    printf("2.\tBorrar un elemento\n");
    printf("3.\tImprimir la lista\n");
    printf("Para cerrar el programa preciona otro botón\n");
    scanf("%d", opcion);
}

void leerParaInsertar(int *_edad)
{
    printf("\nIntroduce el dato que quieras insertar");
    scanf("%d", _edad);
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
        printf("\nSorry men");
    }    
}

void leerParaBorrar(int *_edad)
{
    printf("\nIntroduce el dato que quieras borrar");
    scanf("%d", _edad);
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

void imprimirLista(AnimalPtr actual)
{
    if (actual==NULL)
    {
        printf("\nSorry men, no hay elementos\n");
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

void busquedaBinaria(AnimalPtr nptr)
{
    int derecha, izquierda=0, mitad, _edad, resultado, aux=0, numNodo;

    derecha=totalNodos(nptr);

    leerParaBusqueda(&_edad);

    while (izquierda<=derecha)
    {
        mitad=(izquierda+derecha)/2;
        resultado=compareTo(nptr, _edad, mitad);

        if (resultado==0)
        {
            numNodo=mitad;
            aux=1;
            break;
        }
        else if (resultado==1)
        {
            izquierda=derecha+1;
        }
        else if (resultado==-1)
        {
            derecha=mitad-1;
        }
    }
    imprimirBusqueda(numNodo, aux);
}

int compareTo(AnimalPtr nptr, int _edad, int mitad)
{
    int resultado;

    for(int i=0; i<mitad; i++)
    {
        nptr=nptr->siguiente;
    }

    if (_edad==nptr->edad)
    {
        resultado=0;
    }
    else if (_edad>nptr->edad)
    {
        resultado=1;
    }
    else
    {
        resultado=-1;
    }

    return resultado;
}

void leerParaBusqueda(int *_edad)
{
    printf("Introduce la edad que buscas:");
    scanf("%d", _edad);
}

int totalNodos(AnimalPtr nodo)
{
    int cont=0;

    while (nodo->siguiente!=NULL)
    {
        cont++;
        nodo=nodo->siguiente;
    }
    return cont;
}

void imprimirBusqueda(_numNodo, _aux)
{
    if (_aux==0)
    {
        printf("\nNo existe el dato que buscas");
    }
    else
    {
        printf("\nEl dato esta en el nodo %d", _numNodo);
    }  
}