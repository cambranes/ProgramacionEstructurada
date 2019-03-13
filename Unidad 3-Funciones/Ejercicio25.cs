using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Alejandro Torre Reyes
Entradas: una letra, minuscula o mayuscula
Salidas: El codigo ASCII para esa letra
Proceso: Escribir un programa para mostrar los códigos ASCII de las letras
mayúsculas y minúsculas.
*/

namespace Ejercicio25
{
    class Program
    {
        static char entrada()
        {
            char letter;
            Console.WriteLine("Ingresa una letra");
            letter = Convert.ToChar(Console.ReadLine());
            return letter;
        }
        static int C_ascii(char x)
        {
            int y = Convert.ToInt32(x);
            return y;
        }    
        static void Main(string[] args)
        {
            char letra;
            int cod;
            
            letra = entrada();
            cod = C_ascii(letra);
            
            Console.WriteLine("El codigo ASCII para {0} es {1}", letra, cod);
            Console.ReadKey();
        }
    }
}
//QA realizado por Rodrigo Hernandez Gongora
//Entradas probadas: r, a, T, F
//Salidas: 114, 97, 84, 70
//El algoritmo funciona, pero no es modular, que es lo que se solicito para esta entrega, por lo que esta mal

