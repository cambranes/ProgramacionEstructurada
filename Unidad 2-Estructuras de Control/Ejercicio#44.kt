//44.Escribir un programa para determinar el máximo común divisor de dos números enteros (MCD) por el algoritmo de Euclides:
//a. Dividir el mayor de los dos números por el más pequeño
//b. A continuación dividir el divisor por el resto
//c. Continuar el proceso de dividir el último resto hasta que la división
//   sea exacta.
//d. El último divisor es el MCD.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    //Entradas: dos numeros enteros
    println("Introduce el primer numero")
    var num1= readLine()!!.toInt()
    println("Introduce el segundo numero")
    var num2= readLine()!!.toInt()
    while (num1 != num2){
        if (num1>num2) {
            num2 = num1 / num2
        }
        else{
            num1=num2/num1
        }
    }
    println(num1)
}
