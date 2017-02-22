/*Autor: Equipo 2*/
/*entradas: numero*/
/*salidas:M,MM,MMM,C,CC,CCC,CD,D,DC,DCC,DCCC,X,XX,XXX,XL,L
LX,LXX,LXXX,XC,I,II,III,IV,VVI,VII,VIII,IX*/
/*procedimiento general: utilizamos un do-while para evitar los numeros negativos, luego se ingresa el 
numero a analizar, se hacen las operaciones para ejecutar las ordenes del switch
y se imprime el numero en romano*/
#include <stdio.h>
/*invocando funciones*/
int miles(int millares, int numero);
int cienes(int centenas, int numero);
int dieces(int decenas, int numero);
int unidadeses(int unidades, int numero);

int main(int argc, char *argv[]) {
	/*entradas: unidades,decenas,centenas,millares,numero*/
	int unidades,decenas,centenas,millares,numero;
	/* do-while para excluir a los negativos*/
	do{ 
		scanf("%d",&numero);
	} 
	while (numero <= 0); 
	/*operaciones*/
	unidades= numero%10;
	numero=numero/10;
	decenas=numero%10;
	numero=numero/10;
	centenas=numero%10;
	millares=numero/10;
	/*salidas segun el caso*/
	/*llamando funciones*/
	miles(millares,numero);
	cienes(centenas,numero);
	dieces(decenas,numero);
	unidadeses(unidades,numero);
	return 0;
}




/*primera funcion*/
int miles(int millares, int numero)
{
	switch(millares)
{
case 1: 
{
	printf("M");
	break;
}
case 2: 
{
	printf("MM");
	break;
}
case 3: 
{
	printf("MMM");
	break;
}
default: break;
}
	return millares;
}
/*segunda funcion*/
int cienes(int centenas,int numero)
{
	switch(centenas)
	{
	case 1: 
	{
		printf("C");
		break;
	}
	case 2: 
	{
		printf("CC");
		break;
	}
	case 3: 
	{
		printf("CCC");
		break;
	}
	case 4: 
	{
		printf("CD");
		break;
	}
	case 5: 
	{
		printf("D");
		break;
	}
	case 6: 
	{
		printf("DC");
		break;
	}
	case 7: 
	{
		printf("DCC");
		break;
	}
	case 8: 
	{
		printf("DCCC");
		break;
	}
	case 9: 
	{
		printf("CM");
		break;
	}
	default: break;
	}
	return centenas;
}
/*tercera funcion*/
int dieces(int decenas, int numero)
{
	switch(decenas)
	{
	case 1: 
	{
		printf("X");
		break;
	}
	case 2: 
	{
		printf("XX");
		break;
	}
	case 3: 
	{
		printf("XXX");
		break;
	}
	case 4: 
	{
		printf("XL");
		break;
	}
	case 5: 
	{
		printf("L");
		break;
	}
	case 6: 
	{
		printf("LX");
		break;
	}
	case 7: 
	{
		printf("LXX");
		break;
	}
	case 8: 
	{
		printf("LXXX");
		break;
	}
	case 9: 
	{
		printf("XC");
		break;
	}
	default: break;
	}
	return decenas;
}
/*cuarta funcion*/
int unidadeses(int unidades, int numero)
{
	switch(unidades)
	{
	case 1: 
	{
		printf("I");
		break;
	}
	case 2: 
	{
		printf("II");
		break;
	}
	case 3: 
	{
		printf("III");
		break;
	}
	case 4: 
	{
		printf("IV");
		break;
	}
	case 5: 
	{
		printf("V");
		break;
	}
	case 6: 
	{
		printf("VI");
		break;
	}
	case 7: 
	{
		printf("VII");
		break;
	}
	case 8: 
	{
		printf("VIII");
		break;
	}
	case 9: 
	{
		printf("IX");
		break;
	}
	/*terminar el caso*/
	default: break;
	}
	return unidades;
}
/*Test
Tester: Equipo 1 16/02/2017

Nombrado de variables: Aceptado.

Indentación de bloques: Aceptado.



Testeando codigo:
-Entrada: 500
Salida: D

-Entradas: 1024
Salida: MXXIV

-Entradas: 459
Salida: CDLIX

*/
