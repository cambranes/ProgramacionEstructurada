using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Emmanuel Azcorra
Entradas: El codigo no requiere entradas
Salidas: El valor de la raiz cuadrada de los primeros 100 numeros naturales
Proceso: Mediante un ciclo for, se imprimen los primeros 100 numeros naturales junto con sus raices
cuadradas correspondientes
*/

namespace Ej42
{
    class Program
    {
        static void Main(string[] args)
        {
            double n;
            for (n = 1; n <= 100; n++)
            {

                double r = Math.Sqrt(n); //Funcion matematica para hallar la raiz cuadrada de n
                Console.WriteLine("Raiz cuadrada de {0} es {1}", n, r);
            }
            Console.ReadKey();
        }
    }
}
