/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: un numero entero
Salidas: la suma de la serie (1/2) + (2/4) + (3/8) + ... + (n/2^n)
Procedimiento general:
1.-Leemos un numero del usuario
2.-Realizamos la serie hasta el numero establecido, sumando cada resultado a la variable "suma"
3.-Retornamos el resultado
4.-Asignamos el resultado a otra variable "sumaDeSerie"
5.-Imprimimos el resultado
*/


var numero;
var sumaDeSerie;

alert("Introduce un numero para realizar la suma de la serie");
entradas();
sumaDeSerie = serie(numero);
alert(`La suma de la serie es: ${sumaDeSerie}`);

function entradas(){
    numero = prompt();
}

function serie(repeticiones){
    var suma = 0;
    // Repetimos la serie n cantidad de veces
    for(var i = 1; i <= repeticiones; i++){
        suma += (i/exponencial(2, i));
    }
    // Retornamos la suma
    return suma;
}

function exponencial(base, exponente){
    var resultado = 1;
    // Elevamos la base la cantidad de veces establecidas por la variable "exponente"
    for(var i = exponente; i > 0; i--){
        resultado *= base;
    }
    return resultado;
}
/*
Autor QA: Jorge Abraham Pinto López
Entradas: 25
Salidas:  1.999999
Proceso: OK
Modularidad: OK. Se realizan las funciones de entrada,proceso y salida.
  Función LecturaDeValores: Ok.
  Función media: OK.
  Función impresion: OK.
*/



