#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct Nodo {
  int ID;
  struct Nodo  *sig;
} Nodo;

typedef struct Lista {
  Nodo  *cabeza;
  int longitud;
} Lista;

// Prototipado de funciones
Nodo *crearNodo(int ID);
// Funciones de busqueda
int estaVacia(Lista *lista);
int obtenerNodo_N(Lista *lista, int n);
int obtenerTamaño();

// Funciones de inserción
void insertarNodo_principio(Lista *lista, int ID);
void insertarNodo_final(Lista *lista, int ID);
void insertarNodo_despuesN(Lista *lista, int ID, int n);

// Funciones de eliminación
void eliminarNodo_principio(Lista *lista);
void eliminarNodo_final(Lista *lista);
void eliminarNodo_N(Lista *lista, int n);

int main(){

  // Ejecute la función que quiera usar.

}

int estaVacia(Lista *lista) {
  
  return lista -> cabeza == NULL;

};

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

int obtenerTamaño(Lista *lista) {
  return lista -> longitud;
}

void insertarNodo_principio(Lista *lista, int ID) {
  Nodo *nodo = crearNodo(ID);
  nodo -> sig = lista -> cabeza;
  lista -> cabeza = nodo;
  lista -> longitud ++;
};

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

void eliminarNodo_principio(Lista *lista) {
  if (lista -> cabeza) {
    Nodo *eliminado = lista -> cabeza;
    lista -> cabeza = lista -> cabeza -> sig;
    eliminarNodo(eliminado);
    lista -> longitud --;
  }
}

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