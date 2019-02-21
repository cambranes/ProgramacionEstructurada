using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un numero entero N
Salidas: Determinar si es par o impar
Proceso: Dado un numero entero n determina si es par o impar.
*/

namespace Ejercicio1
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int numeroN;
            Console.WriteLine("Ingrese un numero entero para comprobar su paridad");
            numeroN= Convert.ToInt32(Console.ReadLine());
            return numeroN;
        }

        static int Paridad(int numeroN) //Metodo para comprobar paridad
        {
            int paridad;
            if (numeroN % 2 ==0){
                paridad=1;
            }else {
                paridad=0;
            }
            return paridad;
        }

        static void Main(string[] args) //Salidas
        {
            int numeroN = Read();
            int par=Paridad(numeroN);
            if (par==1){
                Console.WriteLine("El numero {0} es par", numeroN);
            }else {
                Console.WriteLine("El numero {0} es impar", numeroN);
            }
            Console.ReadKey();
        }
    }
}

/* QA: Jorge Chí
error al compilar:
 
Result

$mcs *.cs -out:main.exe
Compilation failed: 9 error(s), 0 warnings
main.cs(21,13): error CS0103: The name `numeroN' does not exist in the current context
main.cs(22,20): error CS0103: The name `numeroN' does not exist in the current context
main.cs(27,17): error CS0103: The name `numeroN' does not exist in the current context
main.cs(39,13): error CS0103: The name `N' does not exist in the current context
main.cs(40,27): error CS0103: The name `numeroN' does not exist in the current context
main.cs(40,13): error CS0103: The name `par' does not exist in the current context
main.cs(41,17): error CS0103: The name `par' does not exist in the current context
main.cs(42,59): error CS0103: The name `numeroN' does not exist in the current context
main.cs(44,61): error CS0103: The name `numeroN' does not exist in the current context

*/
