#include <stdio.h>

typedef struct animal
{
    char especie[15];
    char raza[15];
    char sexo[6];
    int edad;
    float peso;
} animal;

void insertarOrdenado(animal *);
void borrar(animal);
void imprimir(animal);
void recorrerLista(animal);

int main()
{
    animal _animal;
    scanf("%s", _animal.especie);
    scanf("%s", _animal.raza);
    scanf("%s", _animal.sexo);
    scanf("%d", _animal.edad);
    scanf("%f", _animal.peso);


    return 0;
}

