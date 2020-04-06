//Elaborado por: Ángel González
using System;

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
            recorrerMatriz3Ascendente(matr);
        }
        ///<remarks>
        ///la funcion leera el area 3 de manera ascendente y generara una matriz impresa
        ///</remarks>
        static void recorrerMatriz3Ascendente(int[,] rango)
        {
            //se define una constante N en base a la longitud de uno de los parametros de la matriz
            //se define un auxiliar que se utilizara para limitar la matriz
            int N=rango.GetLength(0), aux;
            //ciclo for que lee de manera invetida las filas de la matriz
            for(int fil=(N-1); fil>=0; fil--)
            {
                //ciclo for que lee las columnas de la matriz
                for(int col=0; col<N; col++)
                {
                    //se define al auxiliar como la suma de la cantidad de filas y columnas leidas
                    aux=fil+col;
                    //se utiliza un ciclo if para representar el arreglo deseado para la matriz
                    if(fil<=col && aux>=(N-1))
                    {
                        //se imprime la posicion de la matriz mediante Write en un string
                        Console.Write(rango[fil,col]);
                    }
                }
            }
        }
    }
}