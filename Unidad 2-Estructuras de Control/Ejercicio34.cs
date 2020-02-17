//Equipo 4//
//Fecha: 05/02/2020//
//Un programa que imprima las filas://
//1//
//1 2//
//1 2 3 //
//...//
//1 2 3 ... n//
using System;

namespace Ejercicio34
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada//
            int  entrada = 0;//Se define la entrada del programa//
            String salida = "";//se define la salida del programa//

            //Proceso//
            int.TryParse(Console.ReadLine(), out entrada);//Se ingrese la cantidad de filas a imprimir, representadas por la salida//
            Console.WriteLine(" ");
            //Proceso//
            for(int i=0; i<entrada; i++)
            {
                salida = salida + (i+1) + " ";//se realiza la alineacion de los datos//
                //Salida//
                Console.WriteLine(salida);//se imprime la salida de datos alineados por cada fila//

            }
        }
    }
}