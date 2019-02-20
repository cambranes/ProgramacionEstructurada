using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Un año
Salidas: Determinar si es bisiesto o no
Proceso: Dado un año cualquiera determina si es bisiesto o no.
*/

namespace Ejercicio5
{
    class Program
    {
        static int Read() //Metodo para leer las entradas
        {
            int anio;
            Console.WriteLine("Ingrese un anio");
            anio= Convert.ToInt32(Console.ReadLine());
            return anio;
        }
        
        static int multiploDe4(int anio) //Metodo para comprobar si un anio es bisiesto
        {   
            int multiploDe4;
            if  (anio % 4 ==0){
                multiploDe4=1;
            }else {
                multiploDe4=0;
            }
            return multiploDe4;
        }

        static void Main(string[] args) //Salidas
        {
            int anio;
            int bisiesto;
            anio = Read();
            bisiesto = multiploDe4(anio);
            if (bisiesto==1){
                Console.WriteLine("El anio {0} es bisiesto", anio);
            }else {
                Console.WriteLine("El anio {0} no es bisiesto", anio);
            }
            Console.ReadKey();
        }
    }
}
/*QA: Jorge Chi
error al compilar:
$mcs *.cs -out:main.exe
Compilation failed: 1 error(s), 0 warnings
main.cs(52,12): error CS1525: Unexpected symbol `Console'*/
