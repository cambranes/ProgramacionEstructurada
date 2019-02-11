#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Entradas: nombre, edad, sueldo por hora, horas trabajadas a la semana, impuestos a pagar.
Salidas: Sueldo neto total.
Procesos: El código calcula el sueldo neto del empleado donde multiplicando el sueldo por hora por las horas trabajadas
donde si estas ultimas rebasan las 40 horas semanales, se pagará doble. También se toma en consideración la resta del
porcentaje de impuestos al sueldo neto.
*/

int main()
{
   char nombre[15];
   int edad;
   int sueldo_hora;
   int horas;
   int impuestos;
   float impuestos_tot;
   int horas_extra;
   int horas_tot;
   float sueldo_neto;

   printf("Escriba su nombre "); //Entradas
   scanf("%s",&nombre);
   printf("Edad: ");
   scanf("%d", &edad);
   printf("Sueldo por hora: ");
   scanf("%d", &sueldo_hora);
   printf("Horas trabajadas en la semana: ");
   scanf("%d", &horas);
   printf("Porcentaje de impuestos: ");
   scanf("%d", &impuestos);

   if(horas > 40){ //condicional en caso de que el empleado haya trabajado más de 40 horas.
    horas_extra = horas - 40;
    horas_tot = ((sueldo_hora)*(horas))+((sueldo_hora)*(horas_extra)); //En caso verdadero; se paga doble.
   }
   else{
   horas_tot = ((sueldo_hora)*(horas)); //Caso contrario se paga normal.
   }

   impuestos_tot = ((impuestos)*(horas_tot)/(100));
   sueldo_neto = ((horas_tot) - (impuestos_tot));

   printf("SUELDO NETO: %f", sueldo_neto);
    return 0;
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
porcentaje impuestos: 10
)
salidas: Sueldo Neto: 36000, correcto
Sueldo Neto: 67200, correcto
Proceso: El proceso funciona correctamente
*/
