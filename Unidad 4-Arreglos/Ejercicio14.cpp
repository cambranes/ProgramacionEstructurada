/*
Autor: AMAURY MORALES CERECEDO
Entrada: Un parrafo de texto y la palabra a buscar dentro de dicho texto.
Salida: El numero de veces que se encuentra la palabra dentro del texto.
Procedimiento General: Se introduce el parrafo de texto y la palabra a encontrar. Despues se busca la palabra por cada posicion del texto
y se van contando por cada vez que se encuentra. Al final devuelve cuantas veces en total se repite la palabra.
Notas: Como en el ejercicio 13, tuve que usar la libreria de strings para poder hacer este tipo de calculos en C++ que no habrian sido
posibles sin ellos.
*/

//PREMISA//
/*Escribir un programa que lea un párrafo de texto y una cadena.
El programa debe determinar cuántas veces aparece la cadenaen el párrafo de texto.*/

#include <iostream>
#include <string.h>

//Funcion que busca la palabra dentro del texto
void BuscarEnElTexto(std::string cadena, std::string parrafo)
{
	int contador = 0;
	unsigned int posicion = 0;
	while((unsigned int)(posicion = parrafo.find(cadena, posicion)) != (unsigned int)std::string::npos)
	{
		contador++;
		posicion += cadena.size();
	}
	
	std::cout << "Se encontro la palabra " << contador << " veces en el texto.";
}

int main()
{
	std::string parrafo;
	std::string cadena;
	char texto[1000];
	char palabra[100];
	
	std::cout<< "Introduce el parrafo de texto: ";
	parrafo = (std::cin.getline(texto, sizeof(texto)), texto);
	std::cout<< "Introduce la palabra a buscar: ";
	cadena = (std::cin.getline(palabra, sizeof(palabra)), palabra);
	
	BuscarEnElTexto(cadena, parrafo);
	
	std::cin.get();
	return 0;
	
}

/*
QA: Jose Mendez Verdejo

Entradas: Parrafo: "hola mundo, como desperto hoy, hola ray, hola piña cola, que rico
		  esta el mar, hola karina" 
		  
		  Palabra a buscar: Hola

Salidas: Palabra "hola" en el texto: 4 veces >>> Correcto

funcion BuscarEnElTexto(): funciona correctamente en la busqueda de la palabra en
						  el parrafo.

Comentarios: Una solucion muy compacta al problema, bien hecho :)

*/
