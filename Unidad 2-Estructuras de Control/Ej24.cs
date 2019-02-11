using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
 *Autor: Alejandro Torre Reyes
Entradas: un numero n natural
Salida: la suma de 1/2^1 + 2/2^2...+ n/2^n
Proceso: Calcular la suma de los terminos 1/2^1 + 2/2^2...+ n/2^n
 */

namespace Ej24
{
    class Program
    {
        static int power(int bas, int x) //Metodo de potencia
        {
            int j;
            int p = 1;
            for(j=1; j<=x; j++)
            {
                p = p * bas;
            }
            return p;
        }
        static void Main(string[] args) //Clase Main
        {
            int n;
            int i;
            double sum = 0.0;
            int pot;
            double rec;
            Console.WriteLine("Ingresar n");
            n = Convert.ToInt32(Console.ReadLine());
            
            for(i=1; i<=n; i++) //Ciclo for para realizar la suma despues de cada iteracion
            {
                pot = power(2,i);
                rec = (1.0 / pot);
                sum = (sum + (rec * i));
            }

            Console.WriteLine("La suma es de {0}", sum); //Imprimir el resultado
            Console.ReadKey();
        }
    }
}
/* QA
Autor QA:Eyder Antonio Concha Moreno
Entradas: 1, 2, 10
salidas: .5 correcto, 1 correcto, 1.98828125 correcto
Proceso: Funciona correctamente
*/