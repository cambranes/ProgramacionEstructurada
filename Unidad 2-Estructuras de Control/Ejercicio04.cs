//Equipo4
//Fecha 04/02/2020
//Autor: Carlos Greene
//Programa que redondea un número a la centena próxima
//Entrada: Numero entero positivo
//Salida: Número redondeado a la centena próxima
using System;

namespace Ejercicio4
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada
            int entrada = 0, r = 0, salida = 0;
            //entrada: número introducido, d: residuo de módulo 100, salida: número redondeado a la centena próximo

            Console.WriteLine("Escribe un número");
            int.TryParse(Console.ReadLine(), out entrada); //Se lee la entrada

            r = entrada%100; //Se hace módulo 100 de la entrada para obtener el residuo

            //Proceso
            if(r>50) //Se compara si el residuo es mayor que 50
            {   //Si es mayor a 50 entonces
                salida = ((entrada/100)+1)*100; //Se divide la entrada entre 100, se suma 1 y se mutiplica por 100 
            }                                   //para redondear el número a centena mayor
            else
            {   //Si es menor o igual a 20
                salida = (entrada/100)*100; //Se divide la entrada entre 100 y se divide entre 100
            }                               //para redondearlo a la centena menor

            //Salida
            Console.WriteLine("El número {0} redondeado a centenar es:", entrada);
            Console.WriteLine(salida); //Se imprime el número redondeado 

        }
    }
}
