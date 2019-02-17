/*
Autor: Eyder Concha Moreno 16/Febrero/19
Entradas: Un numero entero que representa el tama�o de la tabla diagonal
Salidas: Una tabla diagonal de "n" celdas
Procedimiento general:
1.-Leemos el tama�o de la tabla
2.-Imprimimos primero las columnas de cada fila, al imprimir toda, aumentamos el tama�o m�ximo
   de columnas para representar la diagonal
3.-Pasamos a la siguiente fila y repetimos hasta llegar al tama�o establecido para la tabla
*/


var numero;
entradas();
procedimiento(numero);


function entradas(){
   //Imprimimos el resultado
    numero = prompt('Ingresa el tamaño de la tabla diagonal');
}

function procedimiento(tamanoTablaDiagonal){
    var largo = 1;
    var valorColumna = 0;
    var valorFila = 0;

    // Imprimimos filas
    while(valorFila < tamanoTablaDiagonal){
        valorColumna = 0;
        // Imprimimos las columnas para cada fila, segun la cantidad de columnas
        while(valorColumna < largo){
            document.write(`(${valorFila},${valorColumna})`);
            valorColumna++;
        }        
        document.write('<br>');
        // Aumentamos uno al largo de columnas para representar la diagonal tras cada iteraci�n
        largo++;
        valorFila++;
    }
}




