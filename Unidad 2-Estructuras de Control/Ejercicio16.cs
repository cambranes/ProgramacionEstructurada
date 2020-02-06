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
            double  entrada = 0, salida = 0, cont = 0, sum = 0;;
            //entrada: número pósitivo diferente de 0, salida: media de la serie de números ingresados//
            //cont: contador de ciclos realizados durante la ejecución del programa, sum: variable para almacenar el valor de la suma de todas las entradas//

            Console.WriteLine("Por favor ingrese un número positivo, recuerde que cuando desee terminar la ejecución debera ingresar 0.");
            double.TryParse(Console.ReadLine(), out entrada);//se lee el número de entrada//

            //Proceso//
            while(entrada != 0)
            {
                {
                    if(entrada > 0)//Se analiza si la entrada es un número pósitivo//
                    {
                        cont = cont + 1;//se suma un ciclo al contador//
                        sum = sum + entrada;//se guarda el valor de la entrada en una variable para usarse mas tarde//
                        Console.WriteLine("Número guardado, por favor ingrese otro número, recuerde que cuando desee terminar la ejecución debera ingresar 0.");
                        double.TryParse(Console.ReadLine(), out entrada);//se solicita otra entrada para continuar el ciclo//
                    }
                    else
                    {
                        Console.WriteLine("Número no valido, ingrese un número pósitivo por favor:");//si la entrada no espositiva, se solicita la entrada adecuada para el ciclo//
                        double.TryParse(Console.ReadLine(), out entrada);
                        cont = cont + 1;
                        sum = sum + entrada;
                    }
                }

            }
            salida = (sum / cont);//se realiza el calculo de la media//

            //salida//
            if(salida > 0)//si la salida es mayor a 0 se escribe el resultado obtenido//
            {
                Console.WriteLine("La media de los números ingresados es:");
                Console.WriteLine(salida);
            }
            else//en caso de que el ciclo se haya cerrado sin entradas validas, la salida sera menor a 0, por lo tanto://
            {
                Console.WriteLine("No hay una media valida para esa entrada");
            }
        }

    }
}