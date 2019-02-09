/*
Ejercicio 25 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Jimmy Nathan Ojeda Arana
Fecha: 3 de Febrero 2019
Entradas: Una letra perteneciente al código ASCII
Salidas: El código decimal en ASCII correspondiente a la letra introducida
---------------------------------------
Instrucción:
Escribir un programa para mostrar los códigos ASCII de las letras mayúsculas y minúsculas.
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se solicita al usuario ingresar una letra
2.-Se imprime la misma letra en tipo entero
---------------------------------------
*/
  
/*Entradas*/
//Se declara la variable a solicitar
let letra;

//Se solicita al usuario ingresar una letra
document.write("Ingresa una letra ");
letra=prompt();

/*Procedimiento*/
//Se asigna una variable con el codigo ASCII correspondiente a la letra ingresada
codigo=(letra).charCodeAt(0)

/*Salidas*/
//Se imprime el codigo ASCII correspondiente a la letra asignada
document.write("El codigo ASCII de ",letra," es ",codigo);

/*Pruebas*/
