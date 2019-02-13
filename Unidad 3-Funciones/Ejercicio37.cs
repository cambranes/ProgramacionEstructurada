using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Alejandro Torre Reyes
Entrada: una cantidad de primeros numeros primos
Salida: la suma de esos numeros primos
Proceso: Determinar la suma de los primeros n números primos.
*/

namespace Ejercicio37
{
    class Program
    {
        static int Read() //Funcion para leer las entradas
        {
            int r;
            Console.WriteLine("Ingrese la cantidad de numeros primos que quiere sumar");
            r = Convert.ToInt32(Console.ReadLine());
            return r;
        }
        static int Primo(int n) //Funcion para verificar que sea primo
        {
            int i;
            if (n == 2)
                return 1;
            if (n % 2 == 0 || n == 1)
                return 0;
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                    return 0;
            }
            return 1;
        }

        static void Main(string[] args)
        {
            int num, result;
            int cont = 0;
            int suma = 0;
            int x = 2;

            num = Read();
            result = Primo(num);

            while (cont < num)
            {
                if (Primo(x) == 1) //Ir sumando si son primos
                {
                    suma = suma + x; 
                    cont++;
                }
                x++; 
            }
            Console.WriteLine("La suma de los primeros {0} numeros primos es {1}", num, suma);
            Console.ReadKey();
        }
    }
}

