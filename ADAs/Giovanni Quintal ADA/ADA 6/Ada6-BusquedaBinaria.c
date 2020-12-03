/**
 * @file Ada6-Busqueda Binaria
 * @author Giovanni Quintal
 * @brief 
 * @version 0.1
 * @date 2020-04-27
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
void busquedaBinaria(petPtr);
void leerParaBusqueda(int *);
int totalNodos(petPtr);
int compareTo(petPtr, int, int);
void imprimirBusqueda(int, int, int);

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

        case 4:
            leerParaBusqueda(&_edad);
            busquedaBinaria(lista);
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
    printf("4.\tBusqueda\n");
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

/**
 * @brief Funcion que recibe la edad buscada
 * 
 * @param _edad 
 */
void leerParaBusqueda(int *_edad)
{
    printf("Introduce la edad que buscas:");
    scanf("%d", _edad);
}

/**
 * @brief 
 * 
 * @param nptr 
 */
void busquedaBinaria(petPtr nptr)
{
    int derecha, izquierda=0, mitad, _edad, resultado, aux=0, numNodo;

    derecha=totalNodos(nptr);

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
    imprimirBusqueda(numNodo, aux, resultado);
}

/**
 * @brief 
 * 
 * @param nptr 
 * @param _edad 
 * @param mitad 
 * @return int 
 */
int compareTo(petPtr nptr, int _edad, int mitad)
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

/**
 * @brief 
 * 
 * @param nodo 
 * @return int 
 */
int totalNodos(petPtr nodo)
{
    int cont=0;

    while (nodo->siguiente!=NULL)
    {
        cont++;
        nodo=nodo->siguiente;
    }
    return cont;
}

/**
 * @brief Imprime los nodos
 * 
 */
void imprimirBusqueda(_numNodo, _aux, _resultado)
{
    if (_aux== _resultado)
    {
        printf("\nNo existe el dato");
    }
    else
    {
        printf("\nEl dato esta en el nodo %d\n", _numNodo);
    }  
}