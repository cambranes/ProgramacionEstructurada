/*
Ejercicio 7 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Daniel Eduardo Gutierrez Delfin
Fecha: 8 de Febrero 2019
Entradas: Un numero
Salidas: El numero con su respectivo caso
---------------------------------------
Instrucción:
Escribir el programa para un programa que reciba un numero positivo, si
este numero es mayor a 1000 se le sumara un 5%, si el numero es mayor a
3000 se le sumara otro 10% adicional y si el numero es mayor a 5000 se le
sumara otro 5% adicional.
Notese que al final
número > 1000 5%
número > 3000 5% + 10%
número > 5000 5% + 10% + 5%
---------------------------------------
Procedimiento General:
---------------------------------------
1.Leer el numero que ha dado el usuario
2.Verificar que el numero sea positivo, si es negativo se vulve a pedir el numero
3.Ver si el numero es mayor a 5000, si es asi se imprime mas un 20%
4.Ver si el numero es mayor a 3000, si es asi se imprime mas un 15%
5.Ver si el numero es mayor a 1000, si es asi se imprime mas un 5%
6.Si es menor a 1000 solo se imprime el numero
---------------------------------------
*/

//entrada//
let sum = 0;//definimos variable//
let v=1;//esta variable nos servira para verificar que el numero sea positivo//
let numero = parseFloat(prompt("Dame un número positvo ")) || 0;//leemos el numero//

//proceso//
  if(numero > 0){//vemos que sea mayor que cero//
    v=0;//Si es asi la variable toma valor de cero//
    if(numero > 1000){//si es mayor a 1000 se le suma el 5%//
      sum = (numero * .05);  
      if(numero > 3000) {//si es mayor a 3000 se le suma el 15%//
        sum = sum + (numero * .10);
        if(numero > 5000){//si es mayor a 5000 se le suma el 20%//
          sum = sum + (numero * .05);
        }
      }
    }
    numero = numero + sum;
  }
  
  //Salidas//
if (v==0){//Si la variable es igual a 0 se imprime el resultado//
  alert('El resultado es ' + numero);
}else{//Si la variable fue 1 significa que el numero fue negativo y que no es valido//
alert('El resultado es invalido');
}

/*
Autor QA:Emmanuel Azcorra Balam
Entradas:3,1000,1001,3000,,3001,5001
salidas:3,1000,1051.05,3150,3451.15,6001.20
Proceso :Ok, todo correcto.*/

