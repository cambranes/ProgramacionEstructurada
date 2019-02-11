/**
 * Author: Luis Gerardo Leon Ortega
 * Entrada: dos numero n
 * Salida general: un string con el resultado
 * Proceso general:
 * - El programa reciba 2 números y te indique si el 1er numero es múltiplo del segundo.
 */
fun main() {
    /* entradas */
    var x = 4; var y = 2
    var resultado:String
    
    /* procedimiento */
    if(x%y == 0){
        resultado = "es multiplo"
    }else{
        resultado = "No es multiplo"
    }
    
    /* salida */
    print(resultado)
}