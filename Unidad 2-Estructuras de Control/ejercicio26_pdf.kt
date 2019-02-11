/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: un numero n
 * Salida general: una suma de los primero n numeros pares
 * Proceso general:
 * - La suma de los primeros n numeros pares
 */
fun main() {
    /* entrada */
    val n = 4
    var suma = 0

    /* procedimiento */
    for(i in 2..n){
        if(i%2 == 0){
            suma = suma + i;
        }
    }

    /* salida */
    print(suma)
}
/*
* QA: Hector A. V. Cosgalla
* Entrada: un numero n
* Salida general: una suma de los primero n numeros pares
* Proceso general:
* - La suma de los primeros n numeros pares
* Comentario:Funciona bien.
*/
