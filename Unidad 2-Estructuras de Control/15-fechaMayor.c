
/*Autor:Oscar Perera 30/Enero/17
Programa que lee 2 fechas (dia-mes-año) con tres cantidades enteras e imprime la mayor, si son la misma imprima que son iguales.

Entradas: Las 2 fechas dividades en dia, mes y año; se enumeran para distinguir entre la fecha 1 y 2
Una bandera que nos ayudará a tomar decisiones

Salidas:la fecha que es mayor, o en caso de ser iguales imprimir el texto que lo indica

Procedimiento general: compararemos los valores comenzando por los años, la bandera nos permitirá decidir la relacion de la fecha 1 con la 2, teniendo como resultados, +1 si es mayor, 0 cuando es igual, o -1 cuando es menor.

*/
#include <stdio.h>
int main(int argc, char *argv[]) {
	
	
	
	/*Variables utilizadas*/
	int banderaFecha=0;
	int dia1;
	int mes1;
	int anio1;
	int dia2;
	int mes2;
	int anio2;
	
	
	
	
	/*Entradas de los datos*/
	printf ("ingrese el dia 1 \n");
	scanf("%d", &dia1); 
	printf ("ingrese el mes 1 \n");
	scanf ("%d", &mes1);
	printf ("ingrese el anio 1 \n");
	scanf ("%d",&anio1);
	printf ("ingrese el dia 2 \n");
	scanf("%d", &dia2);
	printf ("ingrese el mes 2 \n");
	scanf ("%d", &mes2);
	printf ("ingrese el anio 2 \n");
	scanf("%d", &anio2);
	
	/*desarrollo*/
	
	{
		if(anio1>anio2)
		{
			banderaFecha = 1;
		}
		else
		{
			if(anio2>anio1)
			{
				banderaFecha = -1;
			}
			else
			{
				if(mes1>mes2)
				{
					banderaFecha = 1;
				}
				else
				{
					if(mes2>mes1)
					{
						banderaFecha = -1;
					}
					else
					{
						if(dia1>dia2)
						{
							banderaFecha = 1;
						}
						else
						{
							if(dia2>dia1)
							{
								banderaFecha = -1;
							}
							else
							{
								banderaFecha = 0;
							}
						}
					}
				}
			}
		}
		/*salida*/
		
		if (banderaFecha>0)
		{
			printf ("la fecha mayor es: %d / %d / %d",dia1,mes1,anio1);
		}
		if (banderaFecha<0)
		{
			printf ("la fecha mayor es: %d / %d / %d",dia2,mes2,anio2);
		}
		if(banderaFecha==0) 
		{
			printf ("las fechas son iguales");
		}
		return 0;
	}
}


