using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ej47
{
    class Program
    {
        static void Main(string[] args)
        {
            string nombre;
            int edad;
            int sueldo_hora;
            int horas;
            int impuestos;
            double impuestos_tot;
            int horas_extra;
            int horas_tot;
            double sueldo_neto;

            Console.WriteLine("Escriba su nombre "); //Entradas
            nombre = Console.ReadLine();

            Console.WriteLine("Edad: ");
            edad = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Sueldo por hora: ");
            sueldo_hora = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Horas trabajadas en la semana: ");
            horas = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Porcentaje de impuestos: ");
           impuestos = Convert.ToInt32(Console.ReadLine());

            if (horas > 40)
            { //condicional en caso de que el empleado haya trabajado más de 40 horas.
                horas_extra = horas - 40;
                horas_tot = (((sueldo_hora) * (horas)) + ((sueldo_hora) * (horas_extra))); //En caso verdadero se paga doble.
            }
            else
            {
                horas_tot = ((sueldo_hora) * (horas)); //Caso contrario se paga normal.
            }

            impuestos_tot = (((impuestos) * (horas_tot)) / (100.00));
            sueldo_neto = ((horas_tot) - (impuestos_tot));

            Console.WriteLine("SUELDO NETO: {0}", sueldo_neto);
            Console.ReadKey();
        }
    }
}
/*
QA
Autor QA:Eyder Antonio Concha Moreno
Entradas: 
 - (Nombre: Eyder 
    Edad: 18,
    Sueldo por hora: 1000, 
    horas trabajadas en la semana: 40, 
    porcentaje impuestos: 10
    )
-  (Nombre: Daniel 
    Edad: 18,
    Sueldo por hora: 2000, 
    horas trabajadas en la semana: 41, 
    porcentaje impuestos: 20
    )
salidas: Sueldo Neto: 36000, correcto
         Sueldo Neto: 67200, correcto
Proceso: El proceso funciona correctamente
*/