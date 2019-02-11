using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ej12
{
    class Program
    {
        static void ascendente(int a, int b) //Crear Método de ordenamiento
        {                                             
            if (a >= b)
            {
                Console.WriteLine("{0}{1}", a, b);        
            }
            else
            {
                Console.WriteLine("{0}{1}", b, a);
            }
        }
        static void Main(string[] args)
        {
                int a, b;                                                                    //se declaran los 2 valores
                Console.WriteLine("Digite 2 numeros , asi el programa los ordenara de mayor a menor: ");//se solicitan 2 valores al usuario
                a = Convert.ToInt32(Console.ReadLine());
                b = Convert.ToInt32(Console.ReadLine());
                ascendente(a, b);
            Console.ReadKey();
            
        }
    }
}
