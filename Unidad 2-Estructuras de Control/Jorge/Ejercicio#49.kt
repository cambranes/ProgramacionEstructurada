//49.Escribe el programa para que imprima la tabla de multiplicar completa.
// Es decir empezando con la tabla del 2, del 3, 4, hasta la del 9.
// Empieza practicando con la tabla del 2 con una estructura de repetición, nada más y posteriormente utiliza dos ciclos
// para obtener la tabla completa.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    //Entradas: No se introduce ningun dato
    println("Este algoritmo imprimirá las tablas de multiplicar del 2 al 9")
    //Proceso:
    var num=2
    println("La tabla de multiplicar es: ")
    for (i in 2..9){
        println("la tabla de multiplicar del " + i)
        for (j in 1..9) {
            num = j * i
            //Salidas: Las tablas de multiplicar del 2 al 9
            println(num)
        }
    }
}