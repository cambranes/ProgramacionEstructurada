import java.lang.invoke.VarHandle

//32.Dados dos números que representan dos años, determinar la cantidad de años bisiestos que hay entre los dos años.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    //Entradas: Dos numeros enteros que funcionan como años
    println("Introduce el primer año")
    var year1= readLine()!!.toInt()
    println("Introduce el segundo año")
    var year2= readLine()!!.toInt()
    //Proceso:
    if (year1>year2){
        var resta=year1-year2
        var bisi=resta/4!!.toInt() //bisi es el numero de dias bisiestos en el periodo dado
        println(bisi)
    }
    else{
        var resta=year2-year1
        var bisi=resta/4
        println(bisi)
    }
    //Salidas: El numero de dias bisiestos en un período dado
}