//Escribe CON MODULOS un programa que reciba 2 numeros y te imprima cual es el numero mayor, cual es el numero menor o si son iguales en caso de que sea necesario.
//Autor: RONSSON RAMIRO MAY SANTOS 16/febrero/2109
//Entradas:Dos numeros enteros
/*entradas*/
var a, b;
 a= Number(prompt("Ingresa el 1º numero:"));
b= Number(prompt("Ingresa el 2º numero:"));
compara(a,b);

function compara(a,b){
  if(a===b){
    alert("Los numeros digitados son iguales");
  }else if(a>b){
    alert(+a+" Es el mayor ;");
  } else {
    alert(+b+" Es el mayor ;");
  }
  return;
}
/*
QA
Realizo: Guillermo Canto
Entradas:   Salidas:
5,10        Ok
0,-1        Ok
0,0         Ok
El programa funciona correctamente.
*/
