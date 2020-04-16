//Elaborado por: Ángel González
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ejemplo1
{
    /*
    ///<sumary>
    ///La clase program denota el tipo de proyecto en el que se trabaja
    ///en este caso, un programa
    ///</sumary>
    */
    class program
    {
        //sirve como base para el pase por valor de la matriz
        static void Main(string[] args)
        {
           //el int Matriz representa el tamaño total de la matriz a crear
            int[,] Matriz = new int [3,3];
            //pase por valor hacia la funcion asignaciodeMatriz
            asginaciondeMatriz (Matriz);
        }
        ///<remarks>
        ///sirve para asignar los valores que tendra cada posicion de la matriz
        ///</remarks>
        static void asginaciondeMatriz(int[,] matr)
        {
            //num nos servira como la base de la asignacion de valores
            int num=1;
            //ciclo for que lee las filas
            for(int f=0; f<matr.GetLength(0); f++)
            {
                //ciclo for que lee las columnas
                for(int c=0; c<matr.GetLength(1); c++)
                {
                    //se asigna un valor del 1 al 9 a cada posicion de la matriz
                    matr[f,c]=num++;
                    
                }
            }
            //pase por valor a la funcion del ejemplo solicitado
            elegirFuncion(matr);
        }
        ///<remarks>
        ///sirve para elegir la funcion a representar por el sistema
        ///</remarks>
        static void elegirFuncion(int[,] funcion)
        {
            //lineas de escritura para solicitar que funcion se desea obtener
            Console.WriteLine("Elige que función deseas obtener:");
            Console.WriteLine("Opción 1: Matriz de las secciones 2-4");
            Console.WriteLine("Opción 2: Matriz de las secciones 1-3");
            //definicion de la variable opcion, la cual servira para definir la funcion a representar
            int opcion=int.Parse(Console.ReadLine());
            //condicional switch que sirve para elegir entre los casos de la funcion a representar
            switch(opcion)
            {
                //el caso 1 hace un pase por referencia a la funcion recorrerMatriz2_4
                case 1:
                    recorrerMatriz2_4(funcion);
                    break;
                //el caso 2 hace un pase por referencia a la funcion recorrerMatriz1_3
                case 2:
                    recorrerMatriz1_3(funcion);
                    break;
                //en caso de que la variable opcion no sea ninguno de los casos posibles, se volvera a solicitar mediante un mensaje de error
                default:
                    Console.WriteLine("Porfavor ingrese una opción valida");
                    break;
            }
        }
        ///<remarks>
        ///representa la funcion del caso 1 recorrerMatriz2_4
        ///</remarks>
        static void recorrerMatriz2_4(int[,] rango)
        {
            //se define N como uno de los parametros de la matriz, en este caso N representa 3
            //se define a una variable auxiliar que ayudara con la representacion de la función después
            int N=rango.GetLength(0), aux;
            //ciclo for que lee las filas de la matriz para el caso 1
            for(int fil=0; fil<N; fil++)
            {
                //ciclo for que lee las columnas de la matriz para el caso 1
                for(int col=0; col<N; col++)
                {
                    //se define al auxiliar como la suma de las filas y las columnas leidas por el sistema hasta ese momento
                    aux=fil+col;
                    //se inicia un condicional if tomando en cuenta al auxiliar para limitar la matriz
                    if(fil<=col && aux<=(N-1))
                    {
                        //se imprime la posicion solicitada de la matriz mediante un Write
                        Console.Write(" " + rango[fil,col]);
                    }
                    //el condicional else seguido de un if, se utiliza en esta caso para limitat de nuevo la matriz
                    else if(aux>=(N-1) && fil>=col)
                    {
                        //se imprime la posicion solicitada de la matriz mediante un Write
                        Console.Write(" " + rango[fil,col]);
                    }
                    //el condicional else se usa para ayudar a la representación grafica de la matriz
                    else
                    {
                        //se imprime un Write vacion para ayudar a la representación grafica de la matriz
                        Console.Write("  ");
                    }
                }
                //se imprime un WriteLine vacio para generar un espaciado entre lineas
                Console.WriteLine("  ");
            }
        }
        ///<remarks>
        ///representa la funcion del caso 2 recorrerMatriz1_3
        ///</remarks>
        static void recorrerMatriz1_3(int[,] rango)
        {
            //se define N como uno de los parametros de la matriz, en este caso N representa 3
            //se define a una variable auxiliar que ayudara con la representacion de la función después
            int N=rango.GetLength(0), aux;
            //ciclo for que lee las filas de la matriz para el caso 2
            for(int fil=0; fil<N; fil++)
            {
                //ciclo for que lee las columnas de la matriz para el caso 2
                for(int col=0; col<N; col++)
                {
                    //se define al auxiliar como la suma de las filas y las columnas leidas por el sistema hasta ese momento
                    aux=fil+col;
                    //se inicia un condicional if tomando en cuenta al auxiliar para limitar la matriz
                    if(fil>=col && aux<=(N-1))
                    {
                        //se imprime la posicion solicitada de la matriz mediante un Write
                        Console.Write(" " + rango[fil,col]);
                    }
                    //el condicional else se usa para ayudar a la representación grafica de la matriz
                    else if(aux>=(N-1) && fil<=col)
                    {
                        //se imprime la posicion solicitada de la matriz mediante un Write
                        Console.Write(" " + rango[fil,col]);
                    }
                    //el condicional else se usa para ayudar a la representación grafica de la matriz
                    else
                    {
                        //se imprime un Write vacion para ayudar a la representación grafica de la matriz
                        Console.Write("  ");
                    }
                }
                //se imprime un WriteLine vacio para generar un espaciado entre lineas
                Console.WriteLine("  ");
            }
        }
    }
}