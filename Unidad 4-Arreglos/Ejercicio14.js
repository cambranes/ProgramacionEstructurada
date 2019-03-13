/* Autor: Amílcar A. Ramírez Patrón
Entradas: Un párrafo de texto y una cadena para evaluar cuantas veces aparece dentro del párrafo
Procesos: Leer las cadenas como variables y luego convertirlas en cadenas, tomar el largo de ambas, y luego evaluar la cadena dentro de
los párrafos de esta forma : cuando detecte que un caracter del párrafo es igual que el primero de la cadena, busca si el resto son, y si
lo son, entonces se añade una cuenta al contador
Salidas: La cantidad de veces que está la cadena dentro del párrafo
*/
<script>

//entrada
var cont_un = 0, cont = 0,cont_test = 0;
var arregloDeParrafo;
var arregloDeCadena;
var parrafo, cadena;
var parrafo_length;
var cadena_length;
var m;


//proceso
parrafo = (prompt("Escriba su parrafo de texto"));
cadena = (prompt("Escriba su cadena a buscar"));
arregloDeParrafo = parrafo.split("");
arregloDeCadena = cadena.split("");
parrafo_length = arregloDeParrafo.length;
cadena_length = arregloDeCadena.length;

for(let i = 0; i <= parrafo_length; i++){
	if(arregloDeParrafo[i] == arregloDeCadena[0]){
    	for(let j = 0; j < cadena_length; j++){
           	if(cadena[j] == parrafo[i + j]){
				cont_un = cont_un + 1;
			}
			
        if(cont_un == cadena_length){
				cont = cont + 1;
	}    
	}
           cont_un = 0;
	}
}

//salida
alert(cont);


</script>
