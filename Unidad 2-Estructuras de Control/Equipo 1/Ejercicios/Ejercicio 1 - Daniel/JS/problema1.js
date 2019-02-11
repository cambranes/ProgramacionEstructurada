/*
Ejercicio 1 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: Un número
Salidas: Si el numero es par o impar
---------------------------------------
Instrucción:
Escribe un programa que reciba un número y te diga si ese número es par o
impar.
---------------------------------------
Procedimiento General:
---------------------------------------
1.Se define una variable
2.Se le proyecta al usuario que debe ingresar un numero
3.Se lee el numero y se convierte en la variable
4.Divimos el numero entre 2 y vemos si su residuo es igual a cero.
5 Si es igual a cero entonces se imprime que el numero es par.
6.Si es diferente de cero entonces se imprime que el numero es impar.
---------------------------------------
*/
/*Entradas*/
let numero = prompt("Introduce un número");//Pedimos el numero//
let esPar;

/*Procedimiento*/

if(numero % 2 == 0){//Vemos si el residuo de n dividido entre 2 es igual a 0//
  esPar = true;//se ve si es verdadero//
}
else{
  esPar = false;//se ve si es falso//
}

/*Salidas*/
//Se imprime el resultado//
if(esPar){
  alert('El número es par');
}else {
  alert('El número es impar');
}


/*
Autor QA:Emmanuel Azcorra Balam
Entradas:3,4,3,12
salidas:impar,par,impar,par
Proceso :Ok, todo correcto.*/
