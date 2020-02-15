//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón

//Programa que lee secuencia indeterminada de numeros y termina 
//cuando se ingresa el numero 999, entrega numero mayor y menor
//de la serie

//Entrada: Numero entero
//Salida: Numero mayor y menor de la serie indeterminada de numeros


using System;
/// <summary>
/// .Leer una secuencia de números no determinada (finalizará la lectura cuando
///  el último número sea igual a 999) y calcular la media aritmética
/// </summary>
namespace Ejercicio28
{
    class Program
    {
        static void Main(string[] args)
        {
            int nmayor; int nmenor; int numero;
            nmayor = -999;
            nmenor = 999;

            do
            {

                numero = Convert.ToInt32(Console.ReadLine()); //Ingreso del primer numero

                if (numero > nmayor)
                {
                    if (numero != 999)
                    {
                        nmayor = numero;
                    }
                }
                if (numero < nmenor)
                {
                    nmenor = numero;
                }
            } while (numero != 999);
            Console.WriteLine(nmayor);
            Console.WriteLine(nmenor);

        }

    }
}