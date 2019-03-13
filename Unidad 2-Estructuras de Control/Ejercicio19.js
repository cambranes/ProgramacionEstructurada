/*
Ejercicio 19 Javasricript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: 3 numeros
Salidas: El numero mayor
---------------------------------------
Instrucción:
Escribir un programa que lea tres números y determine el mayor de los tres.
---------------------------------------
Procedimiento General:
---------------------------------------
1.Se leen los 3 numeros dados por el usuario.
2.Se verifica que los numeros no sean iguales
3.Vemos si el primer numero es mayor que el segundo, si es asi vemos si es mayor al tercero y si es asi se imprime el primer numero
4.Si el primer numero no es mayor al segundo, vemos si el segundo numero es mayor al tercero y si es asi se imprime el segudno numero
5.Si no es ninguno de los primeros 2 cosos por default el mayor es el tercer numero y se imprime.
---------------------------------------
*/

//entradas//
let numero1 = parseFloat(prompt('Ingresa el número 1'));
let numero2 = parseFloat(prompt('Ingresa el número 2'));
let numero3 = parseFloat(prompt('Ingresa el número 3'));

let numeroMayor = null;

//proceso//
if (numero1>numero2){//vemos si el primer numero es mayor al segundo//
  if (numero1>numero3){//Si es asi vemos si el rpimer numero es mayor al tercero//
    numeroMayor = numero1; //si es asi el numero 1 se guarda en la variable//
  }
  else{
    numeroMayor = numero3;// si no el numero 3 toma el valor de la variable//
  }
} else {
  if (numero2 > numero3){//si el primer numero no fue mayor al segundo vemos si el numero 2 es mayor que el numero 3//
    numeroMayor = numero2;//si es asi el numero 2 se guarda en la variable//
  } else if (numero3 > numero2){ //si no es asi se rectifica en inversa//
    numeroMayor = numero3;//y si es verdad el tercer numero se guarda en la variable//
  }
}

//Salidas//
if(numeroMayor){
  alert("El número mayor es" + numeroMayor);//se imprime la varible con el numero guardado//
}else {
  alert("Los números son iguales");//si no se cumplio ningun caso los numeros son iguales//
}
  

/*Autor QA:Emmanuel Azcorra Balam
Entradas:(1,2,3),(3,2,1),(2,1,3),(9,3,10)
salidas:3,3,3,10
Proceso :Ok, todo correcto.*/
