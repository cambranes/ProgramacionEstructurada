using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un numero N
Salidas: Numero multiplos de 5 que se encuentren entre 1 y N
Proceso: Dado un numero N halla los multiplos de 5 entre 1 y N.
*/

namespace Ejercicio9
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int numeroN;
            Console.WriteLine("Ingrese un numero");
            numeroN= Convert.ToInt32(Console.ReadLine());
            return numeroN;
        }
        
        static int multiplosDe5(int numeroN) //Metodo para comprobar uno por uno si los numeros entre 1 y N son multiplos de 5
        {   
            int numeroMultiploDe5=0,i;
            for (i=1;i<numeroN;i++) {
                if (i % 5 ==0){
                    numeroMultiploDe5=numeroMultiploDe5+1;
                    Console.WriteLine("{0} es multiplo de 5 ",i);
                }
            }
            return numeroMultiploDe5;
        }

        static void Main(string[] args) //Salidas
        {
            int numeroN,cantidadNumerosMultiplosDe5;
            numeroN=Read();
            cantidadNumerosMultiplosDe5=multiplosDe5(numeroN);
            Console.WriteLine("Se encontraron {0} numeros multiplos de 5 entre 1 y {1}",cantidadNumerosMultiplosDe5,numeroN);
            Console.ReadKey();
        }
    }
}