/*
Autor: AMAURY MORALES CERECEDO
Entrada: 2 cadenas de numeros que no tengan mas de 256 digitos.
Salida: Un vector de caracteres numericos (que es la suma de las dos cadenas que dio el usuario anteriormente)

Procedimiento General: Se introducen las dos cadenas, y se pasan a numero para sumarlas. Despues este numero se pasa a cadena para
finalmente pasarlo a caracter y ponerlo en un arreglo de caracteres.

Notas: Es imposible hacer lo que hace este codigo con Chars. Hay muchas excepciones y errores que C++ simplemente no permite.
Tuve que usar una libreria de strings para transformar tipos y conseguir otros datos especiales.
Tambien cabe destacar que aunque puse un limite para la cadena, la libreria para pasar estas cadenas a otro tipo de valor tienen limites
aun mas pequeños, por lo que no sera posible introducir cadenas mayores a 10 digitos.
*/

//PREMISA//
/*Escribir un programa que lea dos cadenas de caracteres numéricos (únicamente dígitos) de longitud máxima 256.
El programa debe calcular la suma de los dos vectores y almacenar elresultado en un vector de caracteres numéricos.*/

#include <iostream>
#include <string.h> //Para poder usar cadenas. Es imposible hacer lo que pide el ejercicio con un arreglo de Char en C++.

//Funcion que lee ambas cadenas de numeros.
int leerCadena()
{
 std::string cadena = "";
 std::cin>>cadena;

 if (cadena.size() > 256) //Esto esta aqui por la instruccion del ejercicio, aunque nunca pase en este programa.
 {
  std::cout<<"La cadena tiene mas de 256 digitos. Se anulo y se puso un 0 como cadena\n";
 }
 else
 {
  return std::stoi(cadena);
 }

 return 0;
}

int main()
{
 int cadena1, cadena2;
 int sumaDeCadenas;
 std::string cadenaDeSumas;
 //char numeroFinal;
 std::cout<< "Por favor, introduce la cadena 1: ";
 cadena1 = leerCadena();
 std::cout<< "Por favor, introduce la cadena 2: ";
 cadena2 = leerCadena();

 sumaDeCadenas = cadena1+cadena2;

 char vectorFinal[std::to_string(sumaDeCadenas).length()];

 cadenaDeSumas = std::to_string(sumaDeCadenas);
 cadenaDeSumas.copy(vectorFinal, std::to_string(sumaDeCadenas).length());

 std::cout<<"Vector de caracteres numericos: ";
 for (int i = 0; i < std::to_string(sumaDeCadenas).length(); i++)
 {
  std::cout<<vectorFinal[i];
 }

 cadena2 = leerCadena();
 std::cin.get(); //Por alguna razon, Aqui ya no funciona este truco para que no se cierre la consola, por lo que añadi la linea de arriba.

 return 0;
}
