/*Sebastian Echerría Lopez*/
#include <stdio.h>
void leer(int*);
void imprimir(int);
void imprimir1(int);
int proceso(int);
int comparacion(int, int);

int main(int argc, char *argv[]) {
	int ang1=0, ang2=2, com=0, tipo=0 ;
	leer (&ang1);
	leer (&ang2);
	com = comparacion(ang1, ang2);
	tipo = proceso(ang1);
	imprimir1(tipo);
	tipo = proceso(ang2);
	imprimir1(tipo);
	imprimir(com);
	return 0;
}
/*Se lee ambos angulos*/
void leer (int *variable){
	scanf("%d", variable);
}
/*Se comparan los angulos recibido*/
int comparacion(int a, int b){
	int x = 0;
	if (a==b){
		x=1;
	}
	return x; /*Devuelve un valor para poder verificar en los diferentes casos*/
}
/*Para ambos angulos se verifica en que rango se encuentra el angulo y se asigna
un valor para dar una respuesta mas adelante*/
int proceso(int c){
	int z=0;
	if (c < 90) {
		z = 1;
	}
	else {
		if (c == 90) {
			z = 2 ;
		}
		else{
			if (c < 180) {
				z = 3;
			}
			else{
				if (c == 180)  {
					z = 4; 
				}
				else{ 
					z=5;
				}
			}
		}
					z = 5;
					}
		return z; /*Devuelve un valor para poder verificar en los diferentes
					casos*/
}

void imprimir (int valor){
	switch (valor){
	case 0 : printf("Los angulos son diferentes"); break;
	case 1 : printf("Los angulos son iguales"); break;
	}
}

void imprimir1 (int res){
	switch (res){
	case 1 : printf("El angulo es agudo"); break;
	case 2 : printf("El angulo es recto"); break;
	case 3 : printf("El angulo es obtuso"); break;
	case 4 : printf("El angulo es llano"); break;
	case 5 : printf("El angulo es concavo"); break;
	}
}
