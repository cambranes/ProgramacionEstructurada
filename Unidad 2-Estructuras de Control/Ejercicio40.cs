//Equipo4
//Fecha 04/02/2020
//Autor: Carlos Greene
//Programa que determina si cada n trabajadores debe tener un aumento de 15% si gana menos que $800
//Entrada: Número de trabajadores y sus sueldos
//Salida: Sueldo de cada trabajador con o sin aumento 
using System;

namespace Ejercicio40
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada
            int numTra = 0; 
            //numTra: número de trabajadores
            double su = 0, aum = 0; 
            //su: sueldo, aum: aumento

            int.TryParse(Console.ReadLine(), out numTra); //Se lee el número de trabajadores

            for(int i = 0; i < numTra; i++) //Se inicia un ciclo para todos los trabajadores
            {
                su = Double.Parse(Console.ReadLine()); //Se lee el sueldo de cada trabajador

                //Proceso
                if(su < 800) //Se compara si el sueldo es menor de 800
                { //Si es menor a 800 entonces
                    aum = su * 0.15; //Se calcula el aumento multiplicando el sueldo por 0.15
                    su = su + aum; //Se suma el sueldo con el aumento
                }

                //Salida
                Console.WriteLine(su); //Se imprime el sueldo con o sin aumento
            }
        }
    }
}
