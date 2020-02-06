//Equipo4
//Fecha 04/02/2020
//Autor: José Mirón
//Programa que recibe un numero N y da los primeros N multiplos de 7
//Entrada: Numero entero positivo
//Salida: N multiplos enteros positivos de 7
using system;
namespace Ejercicio10
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;

            Console.WriteLine("Imprime numeros del 0 a n, de 7 en 7");

            Console.WriteLine("Ingrese valor para n");
            n =Convert.ToInt32(Console.ReadLine());//valor del numero de multiplos deseados

            for (int i = 0; i <= (7*n); i += 7)//inicio en cero, 7 multiplicado por el valor de n, incrementador
            {
                Console.WriteLine("i= " + i);//Impresion de los multiplos de 7 segun n
            }
            Console.ReadLine();
        }
    }
}