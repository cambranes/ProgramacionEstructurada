//Equipo 4//
//Fecha: 02/02/2020//
//Un programa que calcule la media de una serie de números pósitivos leidos desde una terminal, donde al ingresar 0 se termina el ciclo de lectura de entradas//

using System;

namespace Ejercicio16
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada//
            double  entrada = 0, salida = 0, cont = 0, sum = 0;
            //entrada: número pósitivo diferente de 0, salida: media de la serie de números ingresados//
            //cont: contador de ciclos realizados durante la ejecución del programa, sum: variable para almacenar el valor de la suma de todas las entradas//

            double.TryParse(Console.ReadLine(), out entrada);//se lee el número de entrada//

            //Proceso//
            while(entrada != 0)
            {
            cont = cont + 1;//se suma un ciclo al contador//
            sum = sum + entrada;//se guarda el valor de la entrada en una variable para usarse mas tarde//
            double.TryParse(Console.ReadLine(), out entrada);//se lee el número de entrada//
            }
            salida = (sum / cont);//se realiza el calculo de la media//

            //salida//
            Console.WriteLine(salida);
        }

    }
}