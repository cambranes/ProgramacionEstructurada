//Bustamante Rigel
 //No funciona en el 100% de los casos debidos a el manejo de los flotantes, pero funciona hasta con 5 a 6 decimales mas de eso siempre pone 7 
//decimales, no logre averiguar porque, ya que la logica es correcta, pero la maquina no lo aguanta
#include<stdio.h>

float a;
float c;
float n;
float p;
float r;
float x;
void desim();
void impri();
void lectura();
void process();

float numero=0;
int nuc=0;
float num=0;
int entero;
int dec=0;
int quitar=0;
int dif=0;
int d=1;
int i=1;

//El proceso tal cual
int main() {
	lectura();
	desim();
	if(quitar<dec){
		process();
		impri();
	}if(quitar>dec){
		printf("Operacion invalida");
	}
	
	return 0;
}
//Le en numero flotante y cuantas decimales quieres quitarle, si quitas mas de als decimales que tienes
//Niega el proceso

void lectura(){
	printf("Deme un numero decimal, con no mas de 7 decimas despues del entero\n");
	scanf("%f",&num);
	printf("numero == %f\n", num);
	numero=num;
	fflush( stdin );
	printf("Cuantas decimales desea redondear, recuerda el numero debe ser menor a las decimas\n");
	scanf("%d",&quitar);
	fflush( stdin );
}
//averigua cuantos decimales tiene el flotante, y le resta las decimales queridas
void desim(){
	entero=(int)num;
	while (num>entero){
		num*=10;
		dec=dec+1;
		entero=(int)num;
	}
	fflush( stdin );
	printf ("tiene %d decimales\n",dec);
	printf("%d\n",quitar);
	printf("%d\n",dec);
	dif=dec-quitar+1;
	printf("%d\n",dif);
}
//Realiza el proceso de eliminacion de decimales
void process(){
	for(i=1;i<dif;i++){
		d=d*10;
		fflush( stdin );
	}
	
	puts("----------------------------------------------");
	
	//Los numeros se evaluan ara desminuir n decimales
	//se multiplica por la cantidad de decimales
	numero *= d;
	//Se elimina los decimales
	nuc=numero;
	//Se divide entre los decimales deseados
	numero=nuc;
	numero /= d;
	//Se imprime el numero reducido
}
//Imprime el numero ya redondeado
void impri()
{
	printf("numero redondeado == %f\n", numero);
	
}
