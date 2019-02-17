/*
Autor:Jorge Chí 16/Febrero/19
Entradas: numero (colección de números).
Salidas: media (de la suma de numero)
Procedimiento general: Se ingresan numeros que se suman en la variable numero y luego se
calcula la media de estos. Si se teclea un 0 se deja de tomar entradas. si se teclea un negativo se informa de esto.
*/


#include <stdio.h>

int lecturaValores(float* sumaValores, int contadorSuma);
float media(float sumaValores, int contadorSuma);
void impresion(float mediaAImprimir);

int main(void){

//se inicia la variable que lee los numeros, la suma de estos y un contador

float mediaFinal = 0;
float suma = 0;
int contador = 0;

//Entradas: se solicitan los numeros del conjunto, se cuentan los numeros en total y se suman

contador = lecturaValores(&suma, contador);

/*Proceso : si ningun dato fue ingresado se infor de ello, en otro caso
se calcula la media y se imprime */

mediaFinal = media(suma, contador);

//salida: la media impresa

impresion(mediaFinal);

return 0;

}

int lecturaValores(float* sumaValores, int contadorSuma){

//entradas: la suma de valores y el contador

  float numero = 0;

  //proceso: se leen los números y despues se pasa por referencia la suma y el contador aumenta

  while (1){

    printf("Ingresa un numero del conjunto al cual quieres sacar media(teclea 0 para terminar):\n");
    scanf("%f", &numero);

    if (numero == 0){

        break;

    } else if (numero < 0){

        printf("ERROR, numero menor que 0\n");

    } else {
        *sumaValores = *sumaValores + numero;
        contadorSuma++;

    }

}
//salidas: el contador
 return contadorSuma;

}

float media(float sumaValores, int contadorSuma){

   //entradas: la suma del conjunto y el contador

    float media = 0;

    //proceso: si la suma no es 0 se saca la media

    if (sumaValores != 0){

    media = sumaValores / contadorSuma;

    }

    return media;
}

void impresion(float mediaAImprimir){

    //entradas: la media a imprimir

    //proceso: se imprime la media si no es cero, y si lo es se informa de ello

    if (mediaAImprimir == 0)
    {
        printf("Ningun dato fue ingresado");

    } else {

        printf("La media es %f", mediaAImprimir);

    }


}
