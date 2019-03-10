/*
Autor: Daniel Eduardo Gutiérrez Delfín
Problema:Escribir el programa que lea una velocidad e imprima “Muy rápido” si es
superior a 100, si no imprima “Detenido” si la velocidad es cero
Entrada: La velocidad (Velocidad)
Salida: Muy rapido o Detenido dependiendo la velocidad
Proceso: Se introduce la velocidad, vemos si es mayor a 100 o igual a 0, dependiendo de eso la variable "resultado" tomara un valor
	     para que mediante otro if se proyecte el resultado
*/
//variables//
let velocidad,resultado;

//Entrada/
alert("Introduce la velocidad");{
velocidad=prompt();
}

//Proceso//
if (velocidad>100){
    resultado=1;
    }else if(velocidad == "0"){
        resultado=0;
}

//Salida//
if(resultado==1){
    alert("Muy rapido");
}else if(resultado=="0"){
    alert("Detenido")
}
/*
	QA Reviso: Carlos Chan
	Entradas: 200, 0, 50
	Salidas: "Muy rapido", "Detenido", ...
	- El programa funciona correctamente, pero debia ser modular, utilizando funciones.
*/
