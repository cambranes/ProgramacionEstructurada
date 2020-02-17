//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón
//Programa que recibe un numero N y da los primeros N multiplos de 7
//Entrada: Numero entero positivo
//Salida: N multiplos enteros positivos de 7
using System;

namespace Contador
{
    class Program
    {
        static void Main(string[] args)
        {
            //Entrada
            int n;
            n =Convert.ToInt32(Console.ReadLine());//valor del numero de multiplos deseados

            //Proceso
            for (int i = 7; i <= (7*n); i += 7)//inicio en cero, 7 multiplicado por el valor de n, incrementador
            {
                //Salida
                Console.WriteLine(i);//Impresion de los multiplos de 7 segun n
            }
            Console.ReadLine();
        }
    }
}