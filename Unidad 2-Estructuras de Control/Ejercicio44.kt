/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: un numero x & y
 * Salida general: MCD de dos numeros con algoritmo de Euclides
 * Proceso general:
 * a. Dividir el mayor de los dos números por el más pequeño
 * b. A continuación dividir el divisor por el resto
 * c. Continuar el proceso de dividir el último resto hasta que la división
 * sea exacta.
 * d. El último divisor es el MCD
 */
fun main() {
    /* entrada */
    var x = 12; var y = 2

    /* procedimiento */
    while (x != y){
        if(x > y){
            x -= y
        }else{
            y -= x
        }
    }

    /* salida */
    print(x)
}
/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: un numero x & y
 * Salida general: MCD de dos numeros con algoritmo de Euclides
 * Proceso general:
 * a. Dividir el mayor de los dos números por el más pequeño
 * b. A continuación dividir el divisor por el resto
 * c. Continuar el proceso de dividir el último resto hasta que la división
 * sea exacta.
 * d. El último divisor es el MCD
 * Comentario: Funciona bien
 */
