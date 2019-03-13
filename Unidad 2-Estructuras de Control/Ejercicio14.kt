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
/*
QA: Hector Cosgalla
Entradas: Un numero entero (velocidad)
Salidas: la evaluación de los numeros en sus respectivos casos
Comentarios: No lee el rango de velocidades de 1 a 99
*/
