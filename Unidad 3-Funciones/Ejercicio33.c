/**
 * @file Ejercicio33.c
 * @author Manuel peraza
 * @brief Imprimir las primeras n tablas de multiplicar que incluyan desde el valor j hasta el valor k. 
 * Entrada: numeros enteros n, j y k
 * Salida: Primeras n tablas de multiplicar de j a K
 * Ejemplo:
 * Entrada 1 2 3
 * Salida: 2 3 4 6
 * @version 0.1
 * @date 2020-02-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */


#include <stdio.h>

// incializador de prototipos de las funciones 
void leerNum(int *);
int diferenteCero(int);
void imprimirSalida(int , int , int );

int main()
{
    //Entrada
    //Se inicializan los valores
    int numTabla=0, inicio=0, fin=0;
    //funcion para lectura de datos de entrada 
  leerNum(&numTabla);
  leerNum(&inicio);
  leerNum(&fin);
  //Proceso
  //Funcion para verificar que el numTabla se diferente a 0
  numTabla = diferenteCero(numTabla);
  //Salida
  //Funcion para imprimir los resultados 
  imprimirSalida(numTabla, inicio, fin);
    return 0;
}
void leerNum(int *_num)//Funcion para leer los datos de entrada
{
    scanf("%d", _num);
}
 int diferenteCero(int num) //Funcion que verifica si la tabla sea diferente a 0
 {
    if (num == 0) //condicional en caso de detectar 0 convierte el valor en 1
    {
        num = 1;
    }
    return num;
 }
 void imprimirSalida( int num, int j,  int k) //funcion de Salida para imprimir n numeros y sus respectivas tablas
        {
            //se inicializan las variables 
            int cont=1; int res=0;
           //condicional para modificar el contador
            if (j>k)
            {
                 cont = -1;
            }

            //ciclo para hacer el recorrido y realizar la impresion de los resultados 
            for (int h = 1; h <= num; h++)
            {
                for (int i = j; i <= k; i = i + cont)
                {
                    res = h * i;

                printf("%d""\n", res);
                }
            }
            
        }
