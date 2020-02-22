using System;

namespace ejercicio3
{
    class DiaSemana
    {
        static void Main()
        {
            //Declaracion de variables
            int dia = 0; String nombreDia;
            //Entrada
            leerDia(ref dia); 
            //Proceso
            nombreDia = queDiaEs(dia);
            //Salida
            salida( nombreDia);
        }

        static void leerDia(ref int _dia)//Funcion para la entrada del numero
        {

            _dia = Convert.ToInt32(Console.ReadLine());


        }
        static String queDiaEs(int num)//Funcion para asignar el dia de la semana
        {
            //Declaracion de variable
            string nombre = "";

            //Condicional para asignacion de nombre de los dias de la semana
            if (num == 1) 
            {
                nombre = "Lunes"; 
            }
            else if (num == 2)
            {
                nombre = "Martes";
            }
            else if (num == 3)
            {
                nombre = "Miercoles";
            }
            else if (num == 4)
            {
                nombre = "Jueves";
            }
            else if (num == 5)
            {
                nombre = "Viernes";
            }
            else if (num == 6)
            {
                nombre = "Sabado";
            }
            else if (num == 7)
            {
                nombre = "Domingo";
            }
            else if (num > 7)//Si se ingresa un numero mayor a 7 la asignacion es vacia
            {
                nombre = "";
            }

            return nombre;

        }
        static void salida(String nombreDia)//Impresion del dia de la semana
        {
            Console.WriteLine(nombreDia);
        }
    }
}
