/*
Ejercicio 43 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1
Autor: Jimmy Nathan Ojeda Arana
Fecha: 3 de Febrero 2019
Entradas: N valores
Salidas: La cantidad de números positivos y números negativos
---------------------------------------
Instrucción:
Escribe el programa que lea N valores y que cuente cuantos de ellos son
negativos y cuantos son positivos (cero se condición de fin de lectura).
---------------------------------------
Procedimiento General:
---------------------------------------
1.-Se solicita un número diferente a 0
2.-Se comprueba si es positivo o negativo (Si el número ingresado es 0, el programa se cerrará inmediatamente)
3.-Se le agrega un 1 al contador correspondiente (contador de negativos o contador de positivos)
4.-Se solicita que se ingrese un nuevo número (Si el número ingresado es 0, procede al siguiente paso)
5.-Imprime la cantidad de números positivos y negativos encontrados
---------------------------------------
*/
/*Entradas*/
//Se definen las variables a utilizar
let positivos=0;
let negativos=0;
let numero;

//Se solicita un primer número
document.write("Ingresa un numero real diferente de 0, (Ingresa 0 para salir).");
numero=prompt();

/*Procedimiento*/
//Si el número ingresado es 0 el programa se cerrará
while (numero!=0){
    //Si el número ingresado es mayor que 0 se sumará un 1 al contador de positivos
    if (numero>0){
        positivos++;
    } else {
        //Si el número ingresado no es mayor que 0 se sumará un 1 al contador de negativos
        negativos++;
    }
    //Se solicita otro número para analizar, en caso de no necesitar otro número se ingresa el 0 para terminar
    alert("Ingresa otro numero real diferente de 0, (Ingresa 0 para salir).");
    numero=prompt();
}
/*Salidas*/
//Se imprime la cantidad de números positivos encontrados y seguidamente la cantidad de negativos encontrados
document.write("Se encontraron ",positivos," numeros positivos \n");
document.write("Se encontraron ",negativos," numeros negativos");

/*Pruebas*/
