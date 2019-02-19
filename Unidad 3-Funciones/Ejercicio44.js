/**
 * @author: Luis Gerardo Leon Ortega
 * Entrada: un numero n
 * Salida general: MCD de dos numeros con algoritmo de Euclides
 * Proceso general:
 * a. Dividir el mayor de los dos números por el más pequeño
 * b. A continuación dividir el divisor por el resto
 * c. Continuar el proceso de dividir el último resto hasta que la división
 * sea exacta.
 * d. El último divisor es el MCD
 */

/* entradas */
let x,y
entradas()
/* proceso */
proceso()
/* salidas */
salidas()

/**
 * Entradas 
 */
function entradas(){
  x = parseInt(prompt("primer numero")) 
  y =  parseInt(prompt("segundo numero"))
}

/**
 * Proceso 
 */
function proceso(){
  while(x != y){
        if(x > y){
            x = x - y
        }else{
            y = y - x
        }
    }
}

/**
 * Salidas
 */
function salidas(){
  alert(x)
}

/*QA: Amaury Morales Cerecedo

Funcion: main() (campo de pruebas)
Entradas: alert despues de cada linea.
Salidas: El codigo se ejecuta.

Funcion: entradas()
Entradas: 9999, 13
Salidas: ninguna, solo sobreescribir

Funcion: proceso()
Entradas: 9999, 13
Salidas: el MCM.

Funcion: salidas()
Entradas: el resultado del proceso
Salidas: solo imprime el mcm, en este caso fue 1.

 Final: El codigo funciona correctamente.
*/
