//26.Determinar la suma de los primeros n números pares.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    //Entradas: Un numero entero
    println("Introduce un numero")
    var num= readLine()!!.toInt()
    var suma=0
    //Procedimiento:
    for (i in 1..num){
        if ((i % 2)==0){
            suma +=i
        }
    }
    //Salidas: La suma de los primeros n numeros pares
    println("La suma de los numeros pares es " + suma)
}