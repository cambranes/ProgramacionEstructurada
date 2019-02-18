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