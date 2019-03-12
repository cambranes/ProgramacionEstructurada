//13. Escribir un programa que lea dos cadenas de caracteres numéricos (únicamente
//dígitos) de longitud máxima 256. El programa debe calcular la suma de los dos vectores y
//almacenar el resultado en un vector de caracteres numéricos.
//Autor: Rodrigo Hernandez Gongora

#include <stdio.h>
#include <string.h>

#define SIZE 256

void leerCadenas(char[SIZE], char[SIZE] );
void sumarCadenas(char[SIZE], char [SIZE]);
int tamañoCadena(char [SIZE]);
int tamañoCadena2(int [SIZE]);

int main(){
    char cad1[SIZE];
    char cad2[SIZE];
    leerCadenas(cad1, cad2);
    sumarCadenas(cad1, cad2);
    return 0;
}

void leerCadenas(char cad1[SIZE], char cad2[SIZE]){
    printf("Introduce la primera cadena\n");
    scanf("%s", cad1);
    printf("Introduce la segunda cadena\n");
    scanf("%s", cad2);
}

void sumarCadenas(char cad1[SIZE], char cad2[SIZE]){
    int cd1=0, cd2=0, i=0, tamReal, size1, size2;
    int suma[SIZE];
    size1=tamañoCadena(cad1);
    size2=tamañoCadena(cad2);
    if (size1<=size2) {
        tamReal=size1;
    }
    else{
        tamReal=size2;
    }
    for (i=0; i<tamReal; i++) {
        cd1=cad1[i]-'0';
        cd2=cad2[i]-'0';
        suma[i]=cd1+cd2;
    }
    for (i=0; i<tamReal; i++) {
        printf("%d", suma[i]);
    }
    printf("\n");
}

int tamañoCadena(char cad[SIZE]){
    int i=0, tamReal=0;
    for (i=0; cad[i]; i++) {
        tamReal++;
    }
    return tamReal;
}

