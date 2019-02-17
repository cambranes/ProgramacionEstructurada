/*
Autor:Jorge Chí 16/Febrero/19
Entradas: numero (colección de números).
Salidas: media (de la suma de numero)
Procedimiento general: Se ingresan numeros que se suman en la variable numero y luego se
calcula la media de estos. Si se teclea un 0 se deja de tomar entradas. si se teclea un negativo se informa de esto.
*/

//se inicia la variable que lee los numeros, la suma de estos y un contador
var mediaFinal = 0;
var suma = 0;
var contador = 0;

//Entradas: se solicitan los numeros del conjunto, se cuentan los numeros en total y se suman
lecturaValores();
/*Proceso : si ningun dato fue ingresado se infor de ello, en otro caso
se calcula la media y se imprime */
media();
//salida: la media impresa
impresion();

function lecturaValores(){
  //entradas: la suma de valores y el contador
  //proceso: se leen los números y despues se pasa por referencia la suma y el contador aumenta
  while(true){
  	var numero = 0;
    alert("Ingresa un numero que pertenesca a la coleccion:");
    numero = parseFloat(prompt());
    if (numero == 0){
        break;
    } else if (numero < 0){
        alert("Error numero menor que 0:");
    } else {
        suma = suma + numero;
        alert(`La suma es ${suma}`);
        contador = contador + 1;
        alert(`Hay tanto numeros: ${contador}`);
    }
}
}

function media(){
	//proceso: si la suma no es 0 se saca la media
	if (suma != 0){
    mediaFinal = suma / contador;
    }
}

function impresion(){
	//entradas: la media a imprimir
    //proceso: se imprime la media si no es cero, y si lo es se informa de ello
    if (mediaFinal == 0){
        alert("Ningun dato fue ingresado");
    } else {
        alert(`La media es ${mediaFinal}`);
    }
}