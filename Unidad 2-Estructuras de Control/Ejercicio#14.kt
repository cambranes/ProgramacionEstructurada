//14.Escribir el programa que lea una velocidad e imprima “Muy rápido” si es superior a 100,
// si no imprima “Detenido” si la velocidad es cero.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    //Entradas: Un número entero (velocidad)
    println("Introduce la velocidad")
    var vel= readLine()!!.toInt()
    //Proceso
    if (vel>=100){
        println("Muy rapido")
    }
    else if (vel==0){
        println("Detenido")
        //Salidas: La oracion correspondiente con el dato introducido
    }
}