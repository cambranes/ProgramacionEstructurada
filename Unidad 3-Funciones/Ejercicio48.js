/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: sueldo base, antiguedad en la empresa
Salidas: Incentivo, sueldo total y sueldo base, o error por entradas incorrectas

Procedimiento general:
1.-Preguntamos el número de años de antiguedad
2.-Preguntamos antiguedad del empleado
3.-Verificamos si los datos ingresados son válidos
4.-Con su antiguedad, determinamos el porcentaje a otorgar
5.-Definimos el incentivo con el porcentaje obtenido
6.-Calculamos el sueldo total
7.-Asignamos un mensaje de salida de acuerdo a lo escrito por el usuario
*/

/*Entradas*/

var sueldoBase;
var antiguedad;

var incentivo;
var sueldoTotal;

var cantidadValida;

/*Procedimiento*/
alert("Ingresa el sueldo base y la antiguedad en la empresa respectivamente\n");
entradas();

//Comprobamos si valores ingresados son validos
validacionValores(sueldoBase, antiguedad);

//Determinamos incentivo y sueldo total
calculoIncentivo();
sueldoTotal = calculoSueldoTotal();

//Con base a la validación, determinamos la salida
salidas();


function entradas(){
    sueldoBase = prompt('Sueldo base');
    antiguedad = prompt('Antiguedad');
}

function salidas(){
    if(cantidadValida){
        document.write(`El sueldo total es de: ${sueldoTotal} <br> El sueldo base es de: ${sueldoBase} <br> El incentivo es de: ${incentivo}`);
    } else {
        document.write(`Entrada valida`);
    }
}

function calculoSueldoTotal(){
    var suma = parseFloat(sueldoBase) + incentivo;
    return suma;
}

function calculoIncentivo(){
    var porcentajeIncentivo;

    // Determinamos el incentivo con base a la antiguedad
    if(antiguedad < 1){
      porcentajeIncentivo = 0;

    } else if(antiguedad < 4){
      porcentajeIncentivo = .01;

    } else if(antiguedad < 7){
      porcentajeIncentivo = .03;

    } else if(antiguedad < 10){
      porcentajeIncentivo = .05;

    } else {
      porcentajeIncentivo = .07;
    }

    incentivo = porcentajeIncentivo * sueldoBase;
}

function validacionValores(){
    // Se valida si las entradas leidas son validas
    cantidadValida = 1;
    if(antiguedad <= 0 || sueldoBase <= 0){
        cantidadValida = 0;
    }
}
