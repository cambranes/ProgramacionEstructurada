#include <stdio.h>
#include <stdlib.h>

/////////////////////////////
/* Definiciones de Structs */
/////////////////////////////

typedef struct Nodo {
  int ID;
  struct Nodo  *sig;
} Nodo;

typedef struct Lista {
  Nodo  *cabeza;
  int longitud;
} Lista;

//////////////////////////////
/* Declaración de funciones */
//////////////////////////////

// Menú
void menu();

// Creación de un Nodo
Nodo *crearNodo(int ID);

// Eliminación de un Nodo
void eliminarNodo(Nodo *nodo);

// ¿Está vacia la lista?

int estaVacia(Lista *lista);

// Inserción de un Nodo (al principio)
void insertarNodo_principio(Lista *lista, int ID);

// Inserción de un Nodo (al final)
void insertarNodo_final(Lista *lista, int ID);

// Inserción de un Nodo (después del elemento N)
void insertarNodo_despuesN(Lista *lista, int ID, int n);

// Obtención de un Nodo (N)
int obtenerNodo_N(Lista *lista, int n);

// Obtener número de elementos en la Lista
int obtenerLargo();

// Eliminación de un Nodo (al principio)
void eliminarNodo_principio(Lista *lista);

// Eliminación de un Nodo (al final)
void eliminarNodo_final(Lista *lista);

// Eliminación de un Nodo (N)
void eliminarNodo_N(Lista *lista, int n);

////////////////////////////
/* Bloque MAIN del código */
////////////////////////////

int main() {

  // Opción Deseada

  return 0;
}

/////////////////////////////
/* Definición de funciones */
/////////////////////////////

// Creación de un Nodo
Nodo *crearNodo(int ID) {
  Nodo *nodo = (Nodo *) malloc(sizeof (Nodo));
  nodo -> ID = ID;
  nodo -> sig = NULL;
  return nodo;
}

// Eliminación de un Nodo
void eliminarNodo(Nodo *nodo) {
  free(nodo);
};

// ¿Está vacia la lista?

int estaVacia(Lista *lista) {
  return lista -> cabeza == NULL;
};

// Inserción de un Nodo (al principio)
void insertarNodo_principio(Lista *lista, int ID) {
  Nodo *nodo = crearNodo(ID);
  nodo -> sig = lista -> cabeza;
  lista -> cabeza = nodo;
  lista -> longitud ++;
};

// Inserción de un Nodo (al final)
void insertarNodo_final(Lista *lista, int ID) {
  Nodo *nodo = crearNodo(ID);
  if (lista -> cabeza == NULL) {
    lista -> cabeza = nodo;
  } else {
    Nodo *puntero = lista -> cabeza;
    while (puntero -> sig) {
      puntero = puntero -> sig;
    }
    puntero -> sig = nodo;
  }
  lista -> longitud ++;
};

// Inserción de un Nodo (después del elemento N)
void insertarNodo_despuesN(Lista *lista, int ID, int n) {
  Nodo *nodo = crearNodo(ID);
  if (lista -> cabeza == NULL) {
    lista -> cabeza = nodo;
  } else {
    Nodo *puntero = lista -> cabeza;
    int posicion = 0;
    while (posicion < n && puntero -> sig) {
      puntero = puntero -> sig;
      posicion ++;
    }
    nodo -> sig = puntero -> sig;
    puntero -> sig = nodo;
  }
  lista -> longitud ++;
};


// Obtención de un Nodo (N)
int obtenerNodo_N(Lista *lista, int n) {
  if (lista -> cabeza == NULL) {
    return NULL;
  } else {
    Nodo *puntero = lista -> cabeza;
    int posicion = 0;
    while (posicion < n && puntero -> sig) {
      puntero = puntero -> sig;
      posicion ++;
    }
    if (posicion != n) {
      return NULL;
    } else {
      return puntero -> ID;
    }
  }
}

// Obtener número de elementos en la Lista
int obtenerLargo(Lista *lista) {
  return lista -> longitud;
}

// Eliminación de un Nodo (al principio)
void eliminarNodo_principio(Lista *lista) {
  if (lista -> cabeza) {
    Nodo *eliminado = lista -> cabeza;
    lista -> cabeza = lista -> cabeza -> sig;
    eliminarNodo(eliminado);
    lista -> longitud --;
  }
}

// Eliminación de un Nodo (al final)
void eliminarNodo_final(Lista *lista) {
  if (lista -> cabeza) {
    if (lista -> cabeza -> sig) {
      Nodo *puntero = lista -> cabeza;
      while (puntero -> sig -> sig) {
        puntero = puntero -> sig;
      }
      Nodo *eliminado = puntero -> sig;
      puntero -> sig = NULL;
      eliminarNodo(eliminado);
      lista -> longitud --;
    } else {
      Nodo *eliminado = lista -> cabeza;
      lista -> cabeza = NULL;
      eliminarNodo(eliminado);
      lista -> longitud --;
    }
  }
};

// Eliminación de un Nodo (N)
void eliminarNodo_N(Lista *lista, int n) {
  if (lista -> cabeza) {
    if (n == 0) {
      Nodo *eliminado = lista -> cabeza;
      lista -> cabeza = lista -> cabeza -> sig;
      eliminarNodo(eliminado);
      lista -> longitud --;
    } else if (n < lista -> longitud) {
      Nodo *puntero = lista -> cabeza;
      int posicion = 0;
      while (posicion < (n-1)) {
        puntero = puntero -> sig;
        posicion ++;
      }
      Nodo *eliminado = puntero -> sig;
      puntero -> sig = eliminado -> sig;
      eliminarNodo(eliminado);
      lista -> longitud --;
    }
  }
}
