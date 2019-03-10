import java.util.*

//20.Determinar el valor de la secuencia 1 + 2 + 3 + 4 + 5 +… + n.
//Autor: Rodrigo Hernández Góngora
fun main (args: Array<String>) {
    //Entradas: Un numero entero
    println("Introduce un numero")
    val x = readLine()!!.toInt()
    var y = 0
    for(n in 0..x){
        y += n
    }
    println(y)
}


//QA//
//Por: Amaury Morales Cerecedo
//Entradas: 1,2,3,4,5,6,7,8,9
//Salida: 45
//Notas: Funciona correctamente.
