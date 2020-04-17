#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Mascota
{
    int edad;
    struct Mascota* siguiente;
}Mascota;
typedef Mascota *MascotaPtr;

void insertarOrdenado(MascotaPtr*, int);
MascotaPtr borrar(MascotaPtr, int);
void imprimirLista(MascotaPtr);
void menu();

int main()
{
    MascotaPtr lista=NULL;
    int _edad, opcion;
    bool auxiliar=false;

    do
    {
        menu();
        scanf("%d", &opcion);

        switch(opcion)
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
                imprimirLista(lista);
                break;
            default:
                auxiliar=true;
                break;
        }
    } while(auxiliar==false);
    return 0;
}

void menu()
{
    printf("Bienvenido al menu de opciones, porfavor elige una de acuerdo al numero en pantalla\n");
    printf("1.\n Insertar un elemento en la lista\n");
    printf("2.\n Borrar un elemento de la lista\n");
    printf("3.\n Imprimir todos los elementos de la lista\n");
    printf("En caso de desear cerrar el programa, porfavor pulse cualquier otro boton\n");
}

void insertarOrdenado(MascotaPtr *nPtr, int val)
{
    MascotaPtr nuevo;
    MascotaPtr anterior;
    MascotaPtr actual;

    nuevo = (Mascota*)malloc(sizeof(Mascota));
    if (nuevo!=NULL)
    {
        nuevo->edad=val;
        nuevo->siguiente=NULL;

        anterior=NULL;
        actual=*nPtr;

        while(actual!=NULL && val>actual->edad)
        {
            anterior=actual;
            actual=actual->siguiente;
        }
        if(anterior==NULL)
        {
            nuevo->siguiente=*nPtr;
            *nPtr=nuevo;
        }
        else
        {
            anterior->siguiente=nuevo;
            nuevo->siguiente=actual;
        }
    }
    else
    {
        printf("lo siento, no se encontro el elemento deseado\n");
    }
}

MascotaPtr borrar(MascotaPtr actual, int val)
{
    MascotaPtr opborrar=NULL;
    if(actual=NULL)
    {
        if(actual->edad==val)
        {
            opborrar=actual;
            actual=actual->siguiente;
            free(opborrar);
        }
        else
        {
            actual->siguiente=borrar(actual->siguiente, val);
        }
    }
    return actual;
}

void imprimirLista(MascotaPtr actual)
{
    if(actual==NULL)
    {
        printf("Lo sentimos, no existe ningun elemento\n");
    }
    else
    {
        printf("Lista de elementos:\n");
        while (actual!=NULL)
        {
            printf("%d\n",actual->edad);
            actual=actual->siguiente;
        }
    }
}