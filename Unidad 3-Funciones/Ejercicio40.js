/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: Una "n" cantidad de trabajadores
Salidas: El sueldo de cada trabajador con el aumento (de haber uno)

Procedimiento general:
1.-Leemos la cantidad de trabajadores
2.-Preguntamos el sueldo de cada trabajador
3.-Imprimimos el sueldo de cada uno con el aumento (de haber uno)
*/

var numeroTrabajadores;
entradas();

procedimiento(numeroTrabajadores);

function entradas(){
    numeroTrabajadores = prompt('Introduce el numero de trabajadores');
}

function procedimiento(numeroTrabajadores){
    // Definimos el porcentaje de aumento
    var porcentajeAumento = .15;

    // Preguntamos a cada trabajador su sueldo
    for(var i = 0; i < numeroTrabajadores; i++){
        var sueldo = 0;
        var aumento = 0;
        sueldo = prompt('Ingresa el sueldo del trajador');

        // De ser menor a 800, determinamos un aumento
        if(sueldo < 800){
            aumento = sueldo*porcentajeAumento;
            sueldo = parseFloat(sueldo) + aumento;
        }
        impresionSueldo(sueldo, aumento);
    }
}

function impresionSueldo(sueldo, aumento){
  // Si el aumento es mayor a 0, entonces imprimimos el sueldo con el aumento
  if(aumento > 0){
      alert(`El sueldo es de ${sueldo} y el aumento fue de ${aumento}`);
  }else {
      alert(`El sueldo es de ${sueldo}`);
  }
}

/*QA: Amaury Morales Cerecedo

Funcion: main() (campo de pruebas)
Entradas: alert despues de cada linea.
Salidas: El codigo se ejecuta.

Funcion: entradas()
Entradas: trajadores 5, sueldo 100, trabajadores 1, sueldo 900
Salidas: 5 trabajadores. c/sueldo 100. 1 trabajador, sueldo 900.

Funcion: procedimiento()
Entradas: trabajadores 5, trabajadores 1
Salidas: sueldo 115, aumento 15. sueldo 900, aumento 0.

Funcion: impresionSueldo()
Entradas: ninguna
Salidas: solo imprime el sueldo de cada trabajador

 Final: El codigo funciona correctamente.
*/

