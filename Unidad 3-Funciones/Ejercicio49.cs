/*
Autor: AMAURY MORALES CERECEDO
Entrada: NINGUNA. NO INTRODUCIR NINGUN VALOR.
Salida: Tablas de multiplicar completas del 2 hasta el 9

Procedimiento general: Se utilizan dos ciclos con un auxiliar para almacenar cadenas. Estas cadenas son cada una de las tablas de
multiplicar que van desde el 2 hasta el 9 con maximo 10. Al final se imprimen todas las tablas de multiplicar.

Notas: Habia una funcion salida la cual fue quitada debido a que me entere de que no se puede utilizar arreglos, AUN cuando
esto incumple la estructura de que solo se pueden imprimir las salidas en la salida y no en el procedimiento.

*/

//PREMISA//
/*Escribe el programa que imprima la tabla de multiplicar completa. Es decir empezando con la tabla del 2 hasta el 9*/
void main()
{
 int numeroInicial = 2; //Desde donde empieza nuestras tablas
 int numeroFinal = 9; //Hasta que numero llegan nuestras tablas
 Entrada();
 Proceso(numeroInicial, numeroFinal);
 //Salida();   Aqui antes habia una funcion para imprimir todas las tablas utilizando listas.
}

/*Funcion entrada
No toma nada, solo imprime lo que hara el programa
*/
void Entrada()
{
 Console.WriteLine("A continuacion se imprimiran las tablas completas del numero 2 hasta el 9");
}

/*Funcion proceso
Escribe las tablas de multiplicar en una lista
*/
void Proceso(int a, int b)
{
 int contadorI = 1; //Para el ciclo
 int contadorO = 1; //Para el ciclo
 int constanteA = 1; //Auxiliar
 for (contadorO = a; contadorO <= b; contadorO++)
 {
  contadorI = 1;
  for (contadorI = 1; contadorI <= 10; contadorI++)
  {
   Console.WriteLine(""+contadorO+"x"+contadorI+" = "+contadorO*contadorI);
   constanteA++;
  }
 }
}

main(); //Para iniciar el programa.

/* QA
    El proceso general es correcto, sin embargo el programa no compila con el siguiente error:
    ..\Playground\(70,2): error CS1520: Method must have a return type
    
    Software usado para el test: https://code.sololearn.com/#cs
    (Recomendado por Alex en entrega anterior para el compilado de C#)
    
    __________________________________________________
    Que raro que no te funcione, porque a mi si :)
    Usa otro compilador entonces (?)
    -Amaury
    
*/
