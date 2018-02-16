//Bustamante Rigel

#include<stdio.h>
float q;
float a;
float c;
float n;
float p;
float r;
float x;
int factorial(int);
int power (int);
void impri();
void lectura();
//Se efectuan todas las operaciones y comandos 
int main() {
	//Declaro variables 
	lectura();
	
	for (c=1;c<=n;c+=1) {
		//se iteran las n veces
		
		a=power (c);
		r=factorial(c);
		impri();
		
	}
	printf("la suma final es %f\n",q+1);
	return 0;
}
//Se toman los valores de N y X
void lectura(){
	printf("Este programa te muestra iteraciones de -1^n nx^n / n!\n");
	printf("Hasta que iteracion desea llegar\n");
	scanf("%f",&n);
	printf("Cual es le valor de X\n");
	scanf("%f",&x);
	printf("1\n");
}
//Se evalua el factorial de los numeros hasta n
int factorial(int c){
	r = 1;
	for (p=1;p<=c;p+=1) {
		r = r*p; // se saca Fectorial
	}
	return r;
}
//Elevacion a la potencia n y le cambia el signo de ser necesario
int power(int c){
	a=1;
	int h=-1;
	for (p=1;p<=c;p+=1) {
		a = a*x; // se saca Exponente
		h=h*-1;  // Se saca la potencia
	}
	a = a*c; 
	a=a*h;
	return a;
}
//Imprime cada iteracion de la funcion
void impri(){
	p = a/r;
	printf("%f\n",p); //se imprime resultado
	q=q+p;
}
