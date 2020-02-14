#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	
	scanf("%i", &num);
	
	switch(num)
	{
		case 1:
			printf("Lunes");
		break;
		case 2:
			printf("Martes");
		break;
		case 3:
			printf("Miércoles");
		break;
		case 4:
			printf("Jueves");
		break;
		case 5:
			printf("Viernes");
		break;
		case 6:
			printf("Sábado");
		break;
		case 7:
			printf("Domingo");
		break;
	}
	
	return 0;
}