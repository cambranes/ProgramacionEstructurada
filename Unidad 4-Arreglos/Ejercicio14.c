//autor: Jorge Alberto Chi leon
//Algoritmo que lee una cadena de texto y un parrafo.
//verificar cuantas veces aparece la cadena en el parrafo.
//nota:sin espacios
//Entradas: Ambas cadenas
#include <stdio.h>
#define SIZE 1000
int getSize(char[]);
int busqueda(char cadena[], char parrafo[]);
int main()
{
  //se declaran la cadena y parrafo y un contador
	char Cadena[SIZE];
	char Parrafo[SIZE];
  int vecesEncontrado = 0;
  //se leen la cadena y el parrafo
	printf("Escribe la cadena:\n");
	scanf("%s", Cadena);
	printf("Escribe el parrafo:\n");
  scanf("%s", Parrafo);
	printf("Cadena: %s\n",Cadena);
	printf("Parrafo: %s\n",Parrafo);
  //se busca cuantas veces aparece la cadena en el parrafo
  vecesEncontrado = busqueda(Cadena, Parrafo);
  //se imprime cuantas veces apareció
  printf("Cadena encontrada %i veces.\n",vecesEncontrado);
	return 0;
}
//funcion que consigue el tamaño una cadena de caracteres
int getSize(char string[]){
  int stringSize = 0;
  for (int i = 0; string[i] != '\0'; i++)
  {
      stringSize++;
  }
  string[stringSize] = "\0";
   return stringSize;
}
//funcion que dice cuantas veces se repite la cadena en el parrafos
int busqueda(char cadena[], char parrafo[]){
  int cadenaSize = getSize(cadena);
  int parrafoSize = getSize(parrafo);
  int banderaEncontrado = 0;
  int encontado = 0;
  for (int i = 0; i < parrafoSize; ++i)
  {
    //si encuentra una letra que coincida avanza la posicion de la cadena, de
    //lo contrario reinicia a la posicion 0 o 1 si es la primera
    //caracter de la cadena
    if (cadena[banderaEncontrado]==parrafo[i])
    {
      banderaEncontrado = banderaEncontrado + 1;
    } else if (cadena[0]==parrafo[i])
    {
      banderaEncontrado = 1;
    }else{
      banderaEncontrado = 0;
    }
    //si se recorrio toda la cadena se suma 1 al contador de veces encontrado
    //y se reinicia a la posicion 0 de la cadena
    if (banderaEncontrado == (cadenaSize))
    {
      encontado = encontado + 1;
      banderaEncontrado = 0;
    }
  }
  return encontado;
}
