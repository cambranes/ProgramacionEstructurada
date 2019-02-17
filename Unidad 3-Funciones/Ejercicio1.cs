using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un numero N
Salidas: Determinar si es par o impar
Proceso: Dado un numero entero n determina si es par o impar.
*/

namespace Ejercicio1
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int leer;
            Console.WriteLine("Ingrese n para comprobar su paridad");
            numeroN= Convert.ToInt32(Console.ReadLine());
            return numeroN;
        }

        static int Paridad(int paridad) //Metodo para comprobar paridad
        {
            if (numeroN % 2 ==0){
                paridad=1;
            }else {
                paridad=0;
            }
            return paridad;
        }

        static void Main(string[] args) //Salidas
        {
            int n;
            int res;
            N = Read();
            par = Paridad(numeroN);
            if (par==1){
                Console.WriteLine("El numero {0} es par", numeroN);
            }else {
                Console.WriteLine("El numero {0} es impar", numeroN);
            }
            Console.ReadKey();
        }
    }
}
