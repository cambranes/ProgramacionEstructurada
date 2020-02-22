using System;

namespace ejercicio33
{
    class Program
    {
        static void Main()
        {
            //Declaracion de variables
            int numTabla = 0, inicio = 0, fin = 0;
            //Entrada
            leerNum(ref numTabla);
            leerNum(ref inicio);
            leerNum(ref fin);

            //proceso
            numTabla = diferenteCero(numTabla);

            //Salida
            salida(ref numTabla, ref inicio, ref fin);

        }
        static void leerNum(ref int _num)//Funcion para leer numeros 
        {
            _num = Convert.ToInt32(Console.ReadLine());
        } 
        static int diferenteCero(int num)//Funcion para evitar que sea cero la tabla
        {
            if (num == 0) 
            {
                num = 1;
            }
            return num;
        }
        static void salida(ref int _num, ref int _j, ref int _k) //funcion de Salida para imprimir n numeros y sus respectivas tablas
        {
            int cont=1; int res=0;
           
            if (_j>_k)
            {
                 cont = -1;
            }
            
            for (int h = 1; h <= _num; h++)
            {
                for (int i = _j; i <= _k; i = i + cont)
                {
                    res = h * i;

                   Console.WriteLine(res);
                }
            }

        }
    }
}
