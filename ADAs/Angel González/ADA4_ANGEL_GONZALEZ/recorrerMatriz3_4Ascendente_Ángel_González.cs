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
            recorrerMatriz3_4Ascendente(matr);
        }
        ///<remarks>
        ///la funcion leera las areas 3 y 4 de manera ascendente y generara una matriz impresa
        ///</remarks>
        static void recorrerMatriz3_4Ascendente(int[,] rango)
        {
            //se define una constante N en base a la longitud de uno de los parametros de la matriz
            int N=rango.GetLength(0);
            //ciclo for que lee las filas de la matriz
            for(int fil=0; fil<N; fil++)
            {
                //ciclo for que lee las columnas de la matriz
                //al restarle el numero de filas mas 1 a N se genera el arreglo deseado para la matriz
                for(int col=(N-fil-1); col<N; col++)
                {
                    //se imprime la posicion de la matriz mediante Write en un string
                    Console.Write(rango[fil,col]);
                }
            }
        }
    }
}