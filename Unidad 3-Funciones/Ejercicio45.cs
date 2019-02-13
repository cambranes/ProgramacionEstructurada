using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Alejandro Torre Reyes
Entrada: un numero n entero positivo
Salida: Comprueba si el numero ingresado es primo o no
Proceso: Se desea saber si un número dado es primo o no. Escribir el programa. (Un
número es primo si sólo se puede dividir entre el mismo y la unidad, si el
número es divisible por otros números entonces no es primo).
*/

namespace Ejercicio45
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int w;
            Console.WriteLine("Ingrese n"); 
            w = Convert.ToInt32(Console.ReadLine());
            return w;
        }
        static int Validacion(int x) //Metodo para verificar si es primo o no
        {
            int i;
            int cont = 0;
            for (i = 1; i <= x; i++)
            {
                if (x % i == 0)
                {
                    cont += 1;
                }
            }
            return cont;
        }
        static void Main(string[] args)
        {
            int n, primo;
            n = Read();
            primo = Validacion(n);

            if (primo == 2) 
            {
                Console.WriteLine("{0} Es un numero primo", n);
                Console.ReadKey();
            }
            else
            {
                Console.WriteLine("{0} No es un numero primo", n);
                Console.ReadKey();
            }
        }
    }
}
