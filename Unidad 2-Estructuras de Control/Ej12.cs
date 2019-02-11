/*ejercicio 12.-Escribir el programa que lea 2 números y los imprima de mayor a menor.
*/
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
/* QA
Autor QA:Daniel Eduardo Gutierrez Delfin
Entradas: (4, 2), (-3, -10), (-1 0)
salidas: 4 2 correcto, -3-10 correcto, 0 -1 correcto
Proceso: Es correcto, aunque la representación no tiene espacios
*/