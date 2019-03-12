/*
Autor: Guillermo Canto
Entradas: Ninguna
Salidas: Ninguna
Procedimiento general: Llena un vector de tama�o 100 con valores aleatorios del 1 al 100 (calificaciones)
Calcula los promedios de cada alumno si cada 5 calificaciones en el vector antes mencionado corresponde
a un alumno diferente y los almacena en un vector de promedios.
*/
let N = 100;
let calificaciones = new Array(100);
let promedios = new Array(20);
asignarValores(calificaciones);
calcularPromedios(calificaciones,promedios);

function asignarValores(calificaciones){
	for(let i = 0; i < 100; i++){
		calificaciones[i] = Math.round(Math.random() * 100);
	}
}

function calcularPromedios(calificaciones, promedios){
  let numAlumno= 0;
  for (let i=0; i<20; i++){
    for(let j=numAlumno*5; j<(numAlumno*5)+5; j++){
      promedios[i]= promedios[i]+ calificaciones[j];
    }
    promedios[i]=promedios[i]/5;
    numAlumno++;
  }
}
