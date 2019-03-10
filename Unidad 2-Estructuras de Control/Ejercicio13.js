/*
Ejercicio 13 Javascript
Unidad 2 - {Programación Estructurada}
Equipo 1

Autor: Eyder Antonio Concha Moreno
Fecha: 3 de Febrero 2019
Entradas: La hora en formato militar
Salidas: La hora en formato estándar

---------------------------------------
Instrucción:
Escribir el programa para convertir una hora leída en horario militar (número de cuatro dígitos)
y la imprima a una hora en formato estándar (hh:00am/pm).
---------------------------------------

Procedimiento General:
---------------------------------------
1.-Se comprueba que la hora ingresada por el usuario sea valida

2.-De serlo, obtenemos los primeros y últimos dos caracteres del horario militar

3.-Comprobamos que los primeros y últimos dos caracteres (las horas y minutos) sean validos

4.-De ser validos, comprobamos si las horas son mayor o igual a 12, 
   de serlo definimos el sufijo como "pm", de no serlo lo definimos como "am"

5.-Comprobamos si las horas son mayores a 12, de serlo definimos las horas en formato estándar 
   como (las horas militares - 12), de otra forma las horas estándar son iguales a las militares.

6.-Se define la hora estándar 
---------------------------------------
*/


/*Entradas*/

// Definimos las variables requeridas para el horario militar
let militarTime; 
let hours;
let minutes; // Esta también será usada en el tiempo estándar ya que no cambia

// Definimos las variables requeridas para el tiempo estándar
let standardTime;
let formatedHours;
let timeSuffix;

// Variable para expresar salida
let mensaje;

// Definimos una variable para encontrar errores
let notValid;

/*Procedimiento*/

militarTime = prompt();
notValid = false;

// Verificamos que el horario militar tenga el número correcto de caracteres
notValid = (militarTime.length != 4);

// Ejecutamos si el horario militar tiene el número correcto de caracteres
if(!notValid){
  // Obtenemos los primeros dos dígitos para las horas y los últimos dos para los minutos
  hours = militarTime.slice(0,2);
  minutes = militarTime.slice(2,4);
  // Si las horas o los minutos dados no se encuentran entre el horario normal(24 horas), entonces es invalido
  notValid = (hours > 23 || minutes > 60); 
}

// Ejecutamos si el horario militar es valido 
if(!notValid){
  // Si el horario es mayor o igual a 12 entonces el sufijo es "pm", de otra forma, es "am"
  timeSuffix = hours >= 12 ? 'pm' : 'am';
  // Si las horas son mayores a 12, entonces la hora con el formato estándar son las horas militares menos 12, sino, es la misma
  formatedHours = hours > 12 ? parseInt(hours) - 12 : hours;

  // Creamos el formato para la hora estándar
  standardTime = `${formatedHours}:${minutes} ${timeSuffix}`;
}

//Creamos mensaje para mostrar en salidas
if(notValid){
  // Si la entrada es invalida, alerta al usuario
  mensaje = 'Please enter a valid time';
}else {
  // De otra manera, muestra los dos horarios
  mensaje = `Militar Time: ${militarTime} <br> Standard Time: ${standardTime}`;
}

/*Salidas*/

document.write(mensaje);

//Pruebas
/*
Autor QA: Alejandro Torre Reyes
Entradas: 1200, 0600
Salidas: 12:00 pm, 6.00 am
Proceso:Ok
*/
