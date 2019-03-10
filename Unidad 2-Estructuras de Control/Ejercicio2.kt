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

//QA//
//Por: Amaury Morales Cerecedo
//Entradas: -10 y 10, 1 y 1, 0 y 1.
//Salida: -10 menor, 10 mayor.  1 igual que 1.  0 menor que 1.
//Notas: Funciona correctamente. Mismas notas que el codigo equivalente en C
