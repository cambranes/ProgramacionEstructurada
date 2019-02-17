/**
 * @author: Luis Gerardo Leon Ortega | ejercicio 32
 * Entrada: Un año
 * Salida general: Es biciesto o no es biciesto
 * Proceso general:
 *  - si el año es divisible por 4 y no es divisible por 100 o el numero es divisible por 400 es biciesto
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
  x = parseInt(prompt("Ingresa el año")) 
  y = parseInt(prompt("Ingresa el segundo año"));
}

/**
 * Proceso 
 */
function proceso(){
  let temp;
    if(x < y){
        temp = x; x = y; y = temp;
    }
    temp = 0;
    for (let i = 1; i < (x-y); ++i) {
        if( ((y+i)%4 == 0 && (y+i)%100 != 100) || ((y+i)%400 == 0)){
            temp++;
        }
    }
    x = temp;
}

/**
 * Salidas
 */
function salidas(){
  console.log(`Cantidad de años biciestos entre los años: ${x}`);
}