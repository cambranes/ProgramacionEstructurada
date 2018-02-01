/* Este codigo ha sido generado por el modulo psexport 20160506-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main() {
	int a;
	int b;
	float c;
	bool x;
	printf("Poner un valor mayor que 0\n");
	b = 100;
	scanf("%i",&a);
	c = (sqrtf(a));
	if (a<=b) {
		x = sqrtf(a)==(c);
	}
	printf("El numero  %i\n",a);
	printf("Tiene Raiz cuadrada de  %f\n",c);
	return 0;
}

