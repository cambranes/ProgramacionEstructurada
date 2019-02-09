import java.util.*

//Ejercicio2: 2. Escribe un programa que reciba 2 números y te imprima cual es el número
//mayor, cual es el número menor o si son iguales en caso de que sea
//necesario.
//Autor: Rodrigo Hernández Góngora
fun main (args: Array<String>) {
    //Entradas: Dos numeros enteros
    println("Introduce dos numeros")
    val x = readLine()!!.toInt()
    val y = readLine()!!.toInt()
    //Proceso:
    if (x == y) {
        println(x)
        println(" es igual a ")
        println(y)
    }else if (x<y) {
        println(y)
        println(" es mayor que ")
        println(x)
    }else{
        println(x)
        println(" es mayor que ")
        println(y)
    }
    //Salidas: la comparacion de ambos números
}
