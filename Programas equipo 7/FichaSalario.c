#include <stdio.h>

int main(int argc, char *argv[]) {
	/*variables*/
	int sueldoporhora=0, horastrabajadas=0, nempleados=0,contador=0,pago=0, horasextra=0, edad=0; 
	int porcentajedeimpuestosapagar=0;
	float pagoneto=0,descuento=0;
	char nombre[20];
	printf("numero de empleados");
	scanf("%d", &nempleados);
	for (contador=0;contador<nempleados;contador++){
		printf("Nombre");
		scanf ("%s", &nombre);
		printf("Edad");
		scanf("%d", &edad);
		printf("SUELDO");
		scanf ("%d", &sueldoporhora);
		printf("Horas trabajadas");
		scanf ("%d", &horastrabajadas);
		printf("impuesto");
		scanf ("%d", &porcentajedeimpuestosapagar);
		
		/*pago*/
		if (horastrabajadas<=40){
			pago=sueldoporhora*horastrabajadas;
			
		}
		if (horastrabajadas>40){
			horasextra=horastrabajadas-40;
			horastrabajadas=horastrabajadas-horasextra;
			pago=(sueldoporhora*horastrabajadas)+((sueldoporhora*2)*horasextra);
			
		}
		descuento=(pago/100)*porcentajedeimpuestosapagar;
		/*pagoneto*/
		pagoneto=pago-descuento;
		printf ("Nombre \n");
		printf("%s \n", nombre);
		printf ("Edad \n");
		printf("%d \n", edad);
		printf("pagoneto \n");
		printf("%f \n", pagoneto);
		printf("\n");
	}
	return 0;
}

