/* Autor: Amílcar A. Ramírez Patrón
Entradas: Los dos vectores numéricos a sumar
Procesos: Leer los vectores que hay que sumar, hacer que el vector resultante contenga los espacios de los dos vectores, convertir 
los caracteres en números, sumar en orden cada parte del vector
Salidas: El vector resultante de la suma de ambos */
<script>

//entrada
var cadena_uno = new Array();
var cadena_dos = new Array();
var resul_cadena = new Array();
var length_uno;
var length_dos;
var cad_uno;
var cad_dos;
var i = 0;

//proceso
cadena_uno = (prompt("Escribe la primera cadena"));
cadena_dos = (prompt("Escribe la segunda cadena"));
length_uno = cadena_uno.length
length_dos = cadena_dos.length

if(length_uno < length_dos){
	for(i = 0; i < length_dos; i++){
		cad_uno = parseInt(cadena_uno[i], 10);
		cad_dos = parseInt(cadena_dos[i], 10);
		resul_cadena[i] = cad_uno + cad_dos;
		if(i >= length_uno){
			resul_cadena[i] = cad_dos;
		}
	}
}
if(length_uno > length_dos){
	for(i = 0; i < length_uno; i++){
		cad_uno = parseInt(cadena_uno[i], 10);
		cad_dos = parseInt(cadena_dos[i], 10);
		resul_cadena[i] = cad_uno + cad_dos;
		if(i >= length_dos){
			resul_cadena[i] = cad_uno;
		}
	}
}
if( length_uno == length_dos ){
	for(i = 0; i < length_uno; i++){
		cad_uno = parseInt(cadena_uno[i], 10);
		cad_dos = parseInt(cadena_dos[i], 10);
		resul_cadena[i] = cad_uno + cad_dos;
	}
}

//salida
alert(resul_cadena);

<script>
