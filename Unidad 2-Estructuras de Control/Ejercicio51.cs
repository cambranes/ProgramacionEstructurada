//Equipo 4//
//Fecha 05/02/2020//
//Un programa que lea la ID numerica, edad y sueldo de 10 personas y que determine cuantos mayores de 35 años tuvieron salarios comprendidos entre $5000 y $7500//
using System;

namespace Ejercicio51
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada//
            int id = 0, edad = 0, cont = 0, salida = 0;
            double sueldo = 0;
            //id: es la ID numerica de la persona, edad: es la edad de la persona, cont: es el contador de ciclos realizados, salida: es el contador de trabajadores que cumplen los estandares solicitados por el problema//
            //sueldo: es el sueldo de la persona, adémas al tener la posibilidad de tener centavos es la unica variable double//

            //Proceso//
           while(cont < 10)//se incia el ciclo//
           {
              int.TryParse(Console.ReadLine(), out id);
              int.TryParse(Console.ReadLine(), out edad);
              double.TryParse(Console.ReadLine(), out sueldo);
              cont= cont + 1;
              if(edad > 35)
              {
                if(sueldo >= 5000 & sueldo <= 7500)//se valida si el sueldo ingresado cumple los estandares de sueldo requeridos por el problema//
                {
                  salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
                }
              }
            }
            Console.WriteLine(salida);//se imprime como salida final, la cantidad de personas que cumplieron los estandares establecidos por el problema//
        }
    }
}