//38.Calcular todos los números de tres dígitos tales que la suma de los cubos de los dígitos es igual al número.
//Autor: Rodrigo Hernández Góngora
fun main(args: Array<String>){
    println("Este algoritmo imrpimirá los números que cumplan que el cubo de sus digitos son iguales al numero")
    var a=0
    var x=0
    while (x<999) {
        while (a < 10) {
            var b = 0
            while (b < 10) {
                var c = 0
                while (c < 10) {
                    if (((a * a * a) + (b * b * b) + (c * c * c)) == x) {
                        println(x)
                    }
                    x++
                    c++
                }
                b++
            }
            a++
        }
    }
}


//QA//
//Por: Amaury Morales Cerecedo
//Entradas: 888, 123, 444.
//Salida: 1241, 882, 0.
//Notas: No funciona. La suma de los cubos de los digitos da una cantidad erronea. A veces no corre.
