//AVISO: EN MI CASO PERSONAL USE EL LENGUAJE C# Y EL IDE VisualStudio

/*
Autor:Ricardo Kú Equipo #7 29/01/17
Programación Estructurada
Instrucción:  
Escribir el programa que lea dos fechas (día-mes-año) 
con tres cantidades enteras e imprima la mayor
si son la misma imprima son iguales.
Entradas: dia1(int), mes1(int), año1(int) y dia2(int), mes2(int), año2(int)
Salidas: comparación de dos fechas (Se imprimira la mayor(int) o si son iguales(string)) 
Procedimiento general: Se introducen los enteros que conforman las dos fechas y luego se comparan
con varios if
*/
//Esto se declara para saber que librerias se usarán en C#
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            /*Definimos las variables para las fechas
            Que van a ser día, mes y año para cada una*/

            int dia1;
            int mes1;
            int año1;
            int dia2;
            int mes2;
            int año2;

            //Entrada para la primera fecha
            Console.WriteLine("Comparación de dos fechas");
            Console.WriteLine("- Introduzca la primera fecha-");

            Console.WriteLine("Introduzca una día: ");
            dia1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Introduzca un mes: ");
            mes1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Introduzca un año");
            año1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("La primera fecha es: " + dia1 + "/" + mes1 + "/" + año1);

            //Entrada para la segunda fecha
            Console.WriteLine("-Introduzca la segunda fecha-");
            Console.WriteLine("Introduzca una día: ");
            dia2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Introduzca un mes: ");
            mes2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Introduzca un año");
            año2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("La segunda fecha es: " + dia2 + "/" + mes2 + "/" + año2);
            Console.WriteLine();

            //Procedimiento y salida para cuando la primera fechas es mayor
            if ((dia1 > dia2) & (mes1 > mes2) & (año1 > año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 +"/"+ mes1 +"/"+ año1);
                return;
            }
            if ((dia1 >= dia2) & (mes1 > mes2) & (año1 > año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }
            if ((dia1 > dia2) & (mes1 >= mes2) & (año1 > año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }
            if ((dia1 > dia2) & (mes1 > mes2) & (año1 >= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }
            if ((dia1 >= dia2) & (mes1 >= mes2) & (año1 > año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }
            if ((dia1 >= dia2) & (mes1 > mes2) & (año1 >= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }
            if ((dia1 > dia2) & (mes1 >= mes2) & (año1 >= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia1 + "/" + mes1 + "/" + año1);
                return;
            }

            //Procedimiento y salida para cuando la segunda fecha es mayor
            if ((dia1 < dia2) & (mes1 < mes2) & (año1 < año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if ((dia1 <= dia2) & (mes1 < mes2) & (año1 < año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if((dia1 < dia2) & (mes1 <= mes2) & (año1 < año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if((dia1 < dia2) & (mes1 < mes2) & (año1 <= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if ((dia1 <= dia2) & (mes1 <= mes2) & (año1 < año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if ((dia1 <= dia2) & (mes1 < mes2) & (año1 <= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }
            if ((dia1 < dia2) & (mes1 <= mes2) & (año1 <= año2))
            {
                Console.WriteLine("La fecha mayor es: " + dia2 + "/" + mes2 + "/" + año2);
                return;
            }

            //procedimiento y salida para cuando las fechas son iguales
            if ((dia1 == dia2) & (mes1 == mes2) & (año1 == año2)){
                Console.WriteLine("Las fechas introducidas son iguales.");
                return;
            }
            Console.ReadKey();

/*           
Bloque de Pruebas
El programa funciona correctamente.
Las variables estan bien declaradas y las salidas tambien.
Probé el programa utilizando 12/15/19 y 12/15/16
y me imprimio que 12/15/19 era la mayor
Probé el programa utilizando 2/6/19 y 2/6/19
y me imprimio que las fechas son iguales
Probé el programa utilizando 3/6/19 y 2/6/19
y me imprimio que 3/6/19 era la mayor.

Lo que le agregaría sería ponerle una condicional que me diga 
que los días son menores a 30 o 31 dependiendo del mes que sea, o 29; 
y también que los meses sean menores o iguales a 12.

Prueba realizada por Ulises Ancona del equipo 2
*/
        }
    }
}
