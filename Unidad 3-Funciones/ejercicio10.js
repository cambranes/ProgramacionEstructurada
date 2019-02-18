/*
Autor:RONSSON RAMIRO MAY SANTOS 17/FEBRERO/2019
Entradas: numero ("N").
Salidas: multiplo (de 7), numeroMultiplo (posición de multiplos de 7)
Procedimiento general: Se ingresa un número N (numero) y se imprimen los primeros N multiplos de 7 (numeroMultiplo y multiplo).
Si se ingresa 0 o menor que 0, se imprime ERROR y se pide de nuevo el número.
*/

let numero;
numero=getN();
getMultiplo(numero);




function getN(){ // funcion numero 1 ; valida que el numero introducido sea mayor a cero
    do{
  numero = Number(prompt("INGRESA UN NUMERO MAYOR QUE 0:"));

    if (numero<1){
         alert("INGRESA UN NUMERO MAYOR QUE 0 :");
    }
    }while(numero<=0);
    return numero;

}

function getMultiplo( numero){ // procesa numero introducido por el usuario para obtener su respectivo multiplo
  var i=0,numero,numeroMultiplo,multiplo;
  while(i<numero){
    numeroMultiplo=i+1;
    multiplo= 7 * numeroMultiplo;
    alert("EL MULTIPLO # "+numeroMultiplo+" ES "+multiplo);
    i++;
  }

    return;
}
