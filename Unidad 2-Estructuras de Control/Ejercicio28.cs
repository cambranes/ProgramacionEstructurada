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
        {   //Entrada
            int nmayor; 
            int nmenor; 
            int numero;
            nmayor = -999;
            nmenor = 999;
            //Proceso
            do
            {
                numero = Convert.ToInt32(Console.ReadLine()); //Ingreso de la serie de numeros

                if(numero > nmayor)//Si el numero es mayor que el numero mayor actual
                {            
                    if (numero != 999)//Mientras sea distinto de 999
                    {
                        nmayor = numero;//Se sustituye el anterior numero mayor por el nuevo
                    }
                }
                if(numero < nmenor)//Si el numero es menor que el numero menor actual
                {
                    if (numero != 999)//Mientras sea distinto de 999
                    {
                    nmenor = numero;//Se sustituye el anterior numero menor por el nuevo
                    }
                }
            } while (numero != 999);//Mientras sea distinto de 999

            //Salida
            Console.WriteLine(nmayor);//Impresion del numero mayor
            Console.WriteLine(nmenor);//Impresion del numero menor
        }

    }
}