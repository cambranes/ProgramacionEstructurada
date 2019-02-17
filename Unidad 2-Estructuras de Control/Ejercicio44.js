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
entradas();
/* proceso */
proceso();
/* salidas */
salidas();

/**
 * Entradas 
 */
function entradas(){
  console.log("Ingresa un numero")
  x = parseInt(prompt("primer numero")) 
  console.log("Ingresa tu segundo numero") 
  y =  parseInt(prompt("segundo numero"))
}

/**
 * Proceso 
 */
function proceso(){
  while(x != y){
        if(x > y){
            x = x - y;
        }else{
            y = y - x;
        }
    }
}

/**
 * Salidas
 */
function salidas(){
  console.log(x)
}