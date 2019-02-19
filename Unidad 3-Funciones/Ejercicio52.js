/**
 * @author: Luis Gerardo Leon Ortega | ejercicio 32
 * Entrada: Un año
 * Salida general: Es biciesto o no es biciesto
 * Proceso general:
 *  - si el año es divisible por 4 y no es divisible por 100 o el numero es divisible por 400 es biciesto
 */

let x,y,z,inversion, salida = 1
while(salida){
  /* entradas */
  entradas()
  /* proceso */
  proceso()
  /* salidas */
  salidas()
}

/**
 * Entradas 
 */
function entradas(){
  x = parseInt(prompt("Ingresa una cantidad de dinero")) 
  y = parseInt(prompt("Ingresa el PORCENTAJE de interes al que sera sometida tu inversion"))
  z = parseInt(prompt("Por cuantos meses"))
}

/**
 * Proceso 
 */
function proceso(){
  inversion = x*((1 + y)/ 100)*z
}

/**
 * Salidas
 */
function salidas(){
  alert(`La inversiona a futuro es ${inversion}`)
  salida = parseInt(prompt("¿Desea continuar calculado inversiones a futuro? presione 1 para si, y 0 para no"))
}
/*
Autor QA: Jimmy Nathan Ojeda Arana
Entradas: 2000,10,10
Salidas: 2200
Proceso: OK. Se puede seguir mejor la instrucción del ejercicio (interés decimal, cerrar al leer un valor 0 como cantidad de dinero).
Modularización: OK. El main no puede estar más simple.
 Función entradas: OK
 Función proceso: OK
 Función salidas: OK
 Nota: No se cambió la información del ejercicio (Dice ejercicio 32 y la instrucción del ejercicio 32).
*/
