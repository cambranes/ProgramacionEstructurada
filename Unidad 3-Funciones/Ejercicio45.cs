/// <summary>
///  /Giovanni Quintal
/// Entrada: Un numero entero
/// Salida: "El numero es primo", "El numero no es primo"
/// Descripción: Programa que determina si un numero es primo o no.
/// </summary>
using System;

namespace Ejercicio45
{
	class Program
	{
		/// <summary>
		/// El bloque de abajo es el Main, ahí es donde se ejecutara el código, dentro contiene la variable que se se utilizaron
		/// para el algoritmo. Tambien contiene las funciones de la entrada, proceso y la salida.
		/// </summary>
		/// <param name="args"></param>

		static void Main(string[] args)
		{ 
			//Entrada
			//Se inicializan las variables
			int  a = 0, cont=0;

			//Función que lee la variable
			leerEntrada(ref a);

			//Proceso
			//Funcion que determina los contadores
			cont=calcularContadores(a);

			//Salida
			//Función que imprime la salida
			imprimirSalida(cont);
			
		}
		/// <summary>
		/// La función leerEntrada se encarga de de pedir el valor de la variable a y a traves con el pase de refencia,
		/// la variable del main tendra los mismo valores dado por el usuario
		/// </summary>
		/// <param name="a"></param>Numero entero
		
		static void leerEntrada(ref int a)
		{//Se lee la variable
			a=Convert.ToInt32(Console.ReadLine());

		}

		/// <summary>
		/// La función calcularContadores determinara si calcular la variable mod con i = 0 se determinaran los contadores.
		/// </summary>
		/// <param name="a"></param>
		/// <returns></returns>//int retorna la variable int
		
		static int calcularContadores(int a)
		{
			int conta = 0;		

			for (int i = 1; i <= a; i++)				 
			{
				if (a%i == 0)
				{
					conta = conta + 1;
					
				}
			}
			return conta;
		}

		/// <summary>
		/// La función imprimirSalida, recibe un un pase del valor, una copia del valor cont desde el main y lo pone en la función i para determinar su salida.
		/// </summary>
		/// <param name="cont"></param>Contadores de la función anterior.
		
		static void imprimirSalida(int cont)
		{
			if (cont == 2)
			{
				Console.WriteLine("El numero es primo");
			}
			else
			{
				Console.WriteLine("El numero no es primo");
			}
		}

	}

}