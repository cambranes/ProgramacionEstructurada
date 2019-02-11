using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ej6
{
    class Program
    {
        static void Main(string[] args)
        {
            //declaracion de variables
            int hipo, cateto1, cateto2, resultado, lados, hipotenusa;

            //entradas de datos
            Console.WriteLine("Este programa calcula la suma de los cuadrados de 2 catetos \n y los compara con el cuadrado de la hipotenusa\n");
            Console.WriteLine("para testear nuestro programa en catetos puedes usar los valores 3,4\n");
            Console.WriteLine("y para la hipotenusa puedes usar el valor 5\n");
            Console.WriteLine("Digite los 2 catetos separados por un espacio: ");
            cateto1= Convert.ToInt32(Console.ReadLine());
            cateto2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Ahora digite la hipotenusa : ");
            hipo = Convert.ToInt32(Console.ReadLine());

            //proceso de informacion
            lados = ((cateto1*cateto1) + (cateto2*cateto2));
            hipotenusa = hipo * hipo;
            Console.WriteLine("-----------------------------------------------------\n");

            //comparar a2=b2+c2
            if (lados == hipotenusa)
            {
                Console.WriteLine("Los datos introducidos corresponden a un triangulo Rectangulo");
                Console.ReadKey();
            }
            else
            {
                Console.WriteLine("Los valores introducidos NO corresponden a un triangulo rectangulo");
                Console.ReadKey();
            }


        }
    }
}
