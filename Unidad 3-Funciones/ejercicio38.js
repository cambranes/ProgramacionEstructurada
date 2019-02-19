	/*
Autor: Jose Eduardo Mendez Verdejo 16/Febrero/19
Entradas: Ninguna
Salidas: aquel numero talque la suma de de los cubos de cada digito sea igual al numero
Procedimiento: Mostrara aquellos numeros talque la suma de los cubos de los digitos que componen al numero, sean igual al mismo numero
*/




	var num = 100;

	while (num < 1000)
	{

		num = proceso(num);
		num++;

	}

function proceso(numero)
{
	var x,y,z;
	var s1 = 1, s2 = 1, s3 = 1;
	var suma = 1;
	for(x = 1; x<=9 ; x++){
		for(y = 0; y <= 9; y++){
			for(z = 0; z <= 9; z++){

				//calculando los cubos de cada digito
				s1 = x*x*x;
				s2 = y*y*y;
				s3 = z*z*z;

				//la suma de los cubos de los digitos
				suma = s1+s2+s3;

				if(suma == numero){
					salida(numero);
				}
				numero++;
			}
		}
	}
}

function salida(num){

	alert("El numero" + num + "cumple con la condicion");
}

/*
QA: Raul Rivadeneyra

salida():
Funciona correctamente

proceso():
Recomendaría rehacerlo de nuevo desde 0 ya que saca muchos valores de mas
El numero 153 cumple con la condicion  Ok
El numero 370 cumple con la condicion  Ok
El numero 371 cumple con la condicion  Ok
El numero 407 cumple con la condicion  Ok
El numero 258 cumple con la condicion  Error
El numero 368 cumple con la condicion  Error
El numero 750 cumple con la condicion  Error
El numero 232 cumple con la condicion  Error

Prueba integral: El codigo tiene un loop infinito en el main ya que se le esta reasigando un valor a num y sumando ++
al nuevo valor, así que ya sea nunca o dentro de un muy largo tiempo si es que se alinean los planetas terminara el codigo.

Arreglar nombrado del ejercicio
*/
