//Programa que almacena la lista con las expresiones booleanas, ordenadas de acuerdo a 
// la fecha en las cuales se registraron

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fecha{
    int dd;
    int mm;
    int aaaa;
}Fecha;

typedef struct dato{
    char expresion[121];
    Fecha FECHA;
}Dato;

typedef struct nodo{
    Dato info;
    struct nodo *siguienteNodo;
}Nodo;

typedef Nodo *nodoApuntador;

int seleccionarMenu();
void leerFecha(int*, int*, int*);
int EsBisiesto(int );
void insertarOrdenada(nodoApuntador *, int, int, int, char*);
void continuar(int *);
void borrarLista(nodoApuntador *, int* );
void imprimirLista(Nodo);
void busquedaBinaria(nodoApuntador *);
int contarNodos(nodoApuntador *);
void seleccionarFecha(int *,int *, int *);
void definirMitad(int *, int *, int *);
int compareTo(nodoApuntador* ,int *, int*, int*); //////////////////////
void imprimirNodBuscado(nodoApuntador);

return main(){
    nodoApuntador nodoCabecera=NULL;
    int opcionSeleccionada,dia,mes,anio,tamanio,cont=0, bandera=1, cantidad;
    char cad[121], *cadena;
    opcionSeleccionada=seleccionarMenu();
    while (opcionSeleccionada != 1 && cont==0)
    {
        if (opcionSeleccionada == 2)
        {
            printf("No hay listas que borrar\n");

        }else
        {
            printf("No hay listas que imprimir\n");
        }
        
    }
    if (opcionSeleccionada == 1){
        while(bandera==1){
            leerFecha(&dia,&mes,&anio);
            printf("Ingrese la expresion booleana\n");
            gets(cad);
            tamanio= strlen(cad);
            cadena =(char* )malloc((tamanio+1)* sizeof(char));
            strcpy(cadena,cad);
            insertarOrdenado(&nodoCabecera,dia,mes,anio,&cadena);
            cont +=1;
            continuar(&bandera);
        }
    }
    if (opcionSeleccionada == 2 && cont!= 0 ){
        borrarLista(&nodoCabecera,&cont);
    }
    //Busqueda binaria
    busquedaBinaria(&nodoCabecera);

    imprimirLista(nodoCabecera);

    return 0;
}


int seleccionarMenu(){
    int opcion;
    printf("\t MENU \t");
    printf("1 Añadir a la lista\n");
    printf("2 Borrar lista\n");
    printf("3 Imprimir lista\n");
    printf("Selecciona una opcion\n");
    scanf("%d",&opcion);

    while (opcion<1 || opcion>3){
        printf("Opcion no valida, seleccione otra opcion\n");
        scanf("%d", &opcion);
    }
    return opcion;
}

void leerFecha(int *dia, int *mes, int *anio){
    int respuesta;
    printf("Ingrese año(aaaa):");
    scanf("%d",anio);
    while (*anio<0 || *anio>2020){
        printf("Año invalido, ingrese otro:");
        scanf("%d",anio);
    }
    printf("Ingrese mes (mm):");
    scanf("%d",mes);
    while(*mes<1 || *mes>12){
        printf("Mes invalido, ingrese otro:");
        scanf("%d", mes);
    }
    printf("Inserte dia (dd):");
    scanf("%d",dia);
    respuesta=EsBisiesto(anio);
    if (respuesta==0){
        if(*mes==2){
            while (*dia<1 || *dia>28){
                printf("Inserte dia (dd):");
                scanf("%d",dia);
            }
        }else if (*mes >= 1 || *mes<=7 && *mes !=2){
            if (*mes%2==1){
                while (*dia<1 || *dia>31){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }else{
                while (*dia<1 || *dia>30){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }
            
        }else if( *mes>7 || *mes<=12 && *mes != 2){
            if (*mes%2==1){
                while (*dia<1 || *dia>30){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }else{
                while (*dia<1 || *dia>31){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }

        }
        

    }else{
        if(*mes==2){
            while (*dia<1 || *dia>29){
                printf("Inserte dia (dd):");
                scanf("%d",dia);
            }
        }else if (*mes >= 1 || *mes<=7 && *mes !=2){
            if (*mes%2==1){
                while (*dia<1 || *dia>31){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }else{
                while (*dia<1 || *dia>30){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }
            
        }else if( *mes>7 || *mes<=12 && *mes != 2){
            if (*mes%2==1){
                while (*dia<1 || *dia>30){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }else{
                while (*dia<1 || *dia>31){
                    printf("Inserte dia (dd):");
                    scanf("%d",dia);
                }
            }

        }

    }
}

int EsBisiesto(int anio_){
    if (anio_%4==0){
        if (anio_%100==0){
            if (anio_%400==0){
                return 1;
            }else{
                return 0;
            }
    else{
        return 0;
    }
}

void insertarOrdenado(nodoApuntador *nodoPtr, int dd_, int mm_, int aaaa_, char *exp){
    nodoApuntador nuevoNodo, nodoActual = *nodoPtr , antiguoNodo = NULL;
    nuevoNodo =(Nodo*)malloc(sizeof(Nodo));
    if (nuevoNodo != NULL){
        strcpy(nuevoNodo ->info.expresion,exp);
        nuevoNodo -> info.FECHA.dd = dd_;
        nuevoNodo -> info.FECHA.mm = mm_;
        nuevoNodo -> info.FECHA.aaaa = aaaa_;
        nuevoNodo -> siguienteNodo=NULL;

        if (aaaa_!= nodoActual-> info.FECHA.aaaa){
            while (nodoActual != NULL && aaaa_>nodoActual-> info.FECHA.aaaa){
                antiguoNodo = nodoActual;
                nodoActual = nodoActual-> siguienteNodo;
            }
            if (antiguoNodo==NULL){
                nuevoNodo ->siguienteNodo = *nodoPtr;
                *nodoPtr = nuevoNodo;
            }else{
                antiguoNodo->siguienteNodo = nuevoNodo;
                nuevoNodo ->siguienteNodo = nodoActual;
            }
        }else if(mm_ != nodoActual->info.FECHA.mm){
            while (nodoActual != NULL && mm_>nodoActual-> info.FECHA.mm){
                antiguoNodo = nodoActual;
                nodoActual = nodoActual-> siguienteNodo;
            }
            if (antiguoNodo==NULL){
                nuevoNodo ->siguienteNodo = *nodoPtr;
                *nodoPtr = nuevoNodo;
            }else{
                antiguoNodo->siguienteNodo = nuevoNodo;
                nuevoNodo ->siguienteNodo = nodoActual;
            }
        }else{
            while (nodoActual != NULL && dd_>nodoActual-> info.FECHA.dd){
                antiguoNodo = nodoActual;
                nodoActual = nodoActual-> siguienteNodo;
            }
            if (antiguoNodo==NULL){
                nuevoNodo ->siguienteNodo = *nodoPtr;
                *nodoPtr = nuevoNodo;
            }else{
                antiguoNodo->siguienteNodo = nuevoNodo;
                nuevoNodo ->siguienteNodo = nodoActual;
            }
        }
    }else{
        printf("No hay memoria\n");
    }
}

void continuar(int *bandera){
    int eleccion;
    printf("Desea insertar otra expresion?\n");
    prinf("Seleccione un numero: 1. Sí/ 2. No\n");
    scanf("%d", &eleccion);
    while (eleccion<1 || eleccion>2){
        printf("Eleccion invalida, seleccione un numero\n");
        scanf("%d", &eleccion);
    }
    if (eleccion==1){
        *bandera =1;
    }else{
        *bandera=0;
    }
    

}
void borrarLista(nodoApuntador *nodoPtr, int* cont_){
    Nodo nodoTemporal, nodoActual = *nodoPtr;
    int aaaa,mm,dd;
    printf("Ingrese la fecha de la expresion que desea borrar\n");
    printf("Año(aaaa):");
    scanf("%d",&aaaa);
    printf("Mes(mm):");
    scanf("%d",&mm);
    printf("Dia(dd):");
    scanf("%d",&dd);
    if(nodoActual->info.FECHA.aaaa==aaaa && nodoActual->info.FECHA.mm==mm && nodoActual->info.FECHA.dd==dd){
        nodoTemporal=nodoActual;
        *nodoPtr=nodoActual->siguienteNodo;
        nodoTemporal->siguienteNodo = NULL;
        free(nodoTemporal);
        *cont-=1;
    }else{
        printf("No existe esa fecha\n");
    }
}

void imprimirLista(nodoActual){
    if (nodoActual == NULL){
        printf("Lista vacia\n");
    }else{
        printf("\t LISTA\t");
        while(nodoActual != NULL){
            printf("Expresion: %s\n",nodoActual->info.expresion);
            printf("Fecha: %d / %d / %d", nodoActual->info.FECHA.dd,nodoActual->info.FECHA.mm, nodoActual->info.FECHA.aaaa);
            nodoActual = nodoActual->siguienteNodo;
        }
        printf("\n");
    }
}

int contarNodos(nodoContador *nodoPtr){
    int cantidadNodos=0;
    while(nodoPtr->siguienteNodo != NULL){
        cantidadNodos +=1;
        nodoPtr = nodoPtr->siguienteNodo;
    }
    return cantidadNodos;
}

void busquedaBinaria(nodoApuntador *nodoPtr){
    int i,cantidad, dd, mm, aaaa, izq, der, mitad, acomodador, bandera =0;
    cantidad = contarNodos(&nodoPtr);
    der = cantidad;
    mitad=(izq+der)/2;
    seleccionarFecha(&aaaa,&mm,&dd);
    
    while(izq<=der){
        acomodador = compareTo(&nodoPtr,&aaaa,&mm, &dd);  
        if (acomodador==1){
            izq = mitad + 1;
            definirmitad(&mitad, &izq, &der);
        } else if(acomodador== -1){
            der = mitad -1;
            definirmitad(&mitad, &izq, &der);
        }else if( acomodador ==0){
            for(i=0;i<mitad;i++){
                nodoPtr= nodoPtr->siguienteNodo;
            }
            bandera =0;
            break;
        }
    }
    if (bandera==0){
        imprimirNodoBuscado(nodoPtr);
    }else{
        imprimirNodoBuscado(NULL);
    }
    
}
void definirMitad(int *mid, int *izquierda, int *derecha){
    *mid = *(izquierda + derecha)/2;
}
void seleccionarFecha(int *aaaa_, int *mm_, int *dd_){
    printf("Ingrese la fecha que busca\n");
    printf("aaaa:");
    scanf("%d",&aaaa_);
    printf("mm:");
    scanf("%d",&mm_);
    printf("dd:");
    scanf("%d", &dd_);
}
int compareTo(nodoApuntador *nodoPtr, int *aaaa_, int *mm_, int *dd_, int *mid_){
    int i, resultado; //Mis listas estan ordenadas de mayor a menor fecha
    for (i=0; i<mid; i++){
        nodoPtr = nodoPtr -> siguienteNodo;
    }
    if (aaaa_ != nodoPtr->info.FECHA.aaaa){
        if(aaaa_ < nodoPtr->info.FECHA.aaaa){
            resultado = 1;
        }else{
            resultado = -1;
        }

    }else if(mm_ != nodoPtr->info.FECHA.mm){
        if(mm_ < nodoPtr->info.FECHA.mm){
            resultado = 1;
        }else{
            resultado = -1;
        }
    }else if(dd_ != nodoPtr->info.FECHA.dd){
        if(dd_ < nodoPtr->info.FECHA.dd){
            resultado = 1;
        }else if(dd_ > nodoPtr->info.FECHA.dd){
            resultado = -1;
        }else{
            resultado = 0;
        }

    }
    return resultado;
}

void imprimirNodoBuscado(nodoApuntador nodoBuscado){
    if (nodoBuscado == NULL){
        printf("No se encontraron resultados para su busqueda\n");
    }else{
        printf("\t ENCONTRADO!!!\t");
        printf("Expresion: %s", nodoBuscado->info.expresion);
        printf("Fecha: %d / %d / %d", nodoBuscado->info.FECHA.dd,nodoBuscado->info.FECHA.mm, nodoBuscado->info.FECHA.aaaa);
    }
}