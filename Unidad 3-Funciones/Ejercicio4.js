/*
Autor:Jorge Chí 16/Febrero/19
Entradas: numero (a redondear).
Salidas: cadena con el número redondeado
Procedimiento general: Se ingresa un numero. Si es negativo se pide de nuevo.
Se redondea el numero a la centena más cercana
*/

var numero = 0;

alert("Ingresa un numero que quieras redondear a la centena mas cercana:");
lectura();
numero = redondeo(numero);
impresion(numero);

function lectura(){
//se lee el numero hasta que no sea negativo
    while(true){
        numero = parseInt(prompt());
        if (numero < 0){  
             alert("ERROR, numero menor que 0:");  
         } else { 
              break; 
        }
     }
 }

function redondeo(numeroX){ 
//entradas: el numero a redondear
var numeroRedondeado = 0;
//procedimiento: se redondea el número
if (numeroX <= 100){
numeroRedondeado = 100;
    } else {
            numeroX = parseInt(parseInt(parseInt(numeroX + 50) / 100));
            numeroRedondeado = parseInt(numeroX * 100);
           }
//salida: el numero redondeado
return numeroRedondeado;     
}

function impresion(numeroY){    
    //entrada: el numero redondeado
    //procedimiento: se imprime el númerp
   alert(`El numero redondeado es ${numeroY}`); 
}

/*QA: Amaury Morales Cerecedo

Funcion: main()
Entradas: alert despues de cada linea.
Salidas: El codigo se ejecuta.

Funcion: lectura()
Entradas: 1, 101, 151
Salidas: los numeros introducidos.

Funcion: redondeo()
Entradas: 1, 101, 151
Salidas: 100, 100, 200.

Funcion: impresionNumero()
Entradas: ninguna
Salidas: solo imprime el numero redondeado

 Final: El codigo funciona correctamente asi como su version en C
*/
