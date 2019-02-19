/*
Autor: Daniel Eduardo Gutiérrez Delfín
Problema:Escribir y ejecutar un programa que simule una calculadora simple. Lee dos
enteros y un carácter. Si el carácter es un +, se imprime la suma; si es un -,
se imprime la diferencia; si es un * se imrpime el producto; si es un /, se
imprime el cociente; y si es un % se imprime el resto.
Entrada: El caracater de la operacion deseada y 2 números enteros
Salida: Resultado de la operacion seleccionada
Proceso:Seleccionar una de las operaciones poniendo uno de los caracteres, despues poner
        los 2 números enteros y hacer la operacion segun lo seleccionado anteriormente,
        Despues guardar el resultado en una variable para imprimirla en otro bloque.
*/

//Variables//
let a,b,resultado;
var opcion=""; 

//entrada// 
alert("Bienvenido a la Calculadora");{
alert("Para comenzar seleccione el tipo de operación y luego de 2 numeros enteros");
alert(" Calculadora");
alert("1.  (+)Suma");
alert("2.  (-)Resta");
alert("3.  (*)Multiplicación");
alert("4.  (/)Dividisión");
alert("5.  (%)Residuo");

opcion=prompt();
a=prompt();
b=prompt();
}


//proceso//
{
    if (opcion == '+'){
        resultado=a+b;

        
    }else if (opcion == '-'){
        resultado=a-b;
        
        
    }else if (opcion == '*'){
        resultado=a*b;

        
    }else if (opcion == '/'){
        resultado=a/b;

        
    }else if (opcion == '%'){
        resultado=a%b;
        
    }
}

//salida//
alert("El resultado es:"+resultado);{

}
/*
QA Reviso: Carlos Chan
Entradas: (/, 10, 2), (*, 2, 3), (%, 10, 3), (-, 5, 3), (+, 2, 3)
Salidas: 5, 6, 1, 2, 23
- El programa funciona bien, excepto en la opcion de suma "+", en ese caso no suma
los dos numeros, los concatena.
- El programa funciona bien pero se supone que debia de ser modular, utilizando funciones.
- No esta de mas que en los prompt pongas que variable se esta pidiendo, ejemplo: opcion = prompt("Ingresa la operacion a realizar: ");
*/
