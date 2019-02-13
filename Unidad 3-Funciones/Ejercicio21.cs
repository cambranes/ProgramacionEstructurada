using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor:. Alejandro Torre Reyes
Entradas: Un numero n entero positivo
Salidas: El factorial de n
Proceso: Dado un numero entero n determina su factorial.
*/
namespace Ejercicio21
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int leer;
            Console.WriteLine("Ingrese n para calcular su factorial");
            leer = Convert.ToInt32(Console.ReadLine());
            return leer;
        }
        
        static int Fact(int x) //Metodo para calcular el factorial
        {
            int factorial = 1;
            int i;
            if (x != 0)
            {
                for (i = 1; i <= x; i++)
                {
                    factorial = factorial * i;
                }
            }
            return factorial;
        }

        static void Main(string[] args)
        {
            int n;
            int res;
            n = Read();
            res = Fact(n);
            Console.WriteLine("El factorial de {0} es {1}", n, res);
            Console.ReadKey();
        }
    }
}
