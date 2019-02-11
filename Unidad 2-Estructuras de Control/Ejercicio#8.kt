//8. Escribir el programa para un programa que reciba 2 números y te indique si el 1er numero es múltiplo del segundo.
//Autor: Rodrigo Hernandez Gongora
fun main(args:Array<String>){
    //Entradas: Dos numeros enteros
    println("Introduce el primer numero")
    var num1= readLine()!!.toInt()
    println("Introduce el segundo numero")
    var num2= readLine()!!.toInt()
    var rem= num1 % num2
    if (rem==0){
        println("Es multiplo")
    }
    else {
        println("No es multiplo")
    }
}