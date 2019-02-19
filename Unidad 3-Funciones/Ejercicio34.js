/*
Autor: Hector Abraham Valdivieso Cosgalla
Entradas: Un numero n
Salidas:
1
1 2
1 2 3
1 2 3 ... n
Procedimiento: Lee el numero n y empieza un ciclo for para las lineas y dentro
deel lleva otro para contar los numeros, si el numero de linea y el numero es el
mismo se imprime el numero de linea y se brinca a la siguiente linea y se repite
hasta llegar a n.
*/

var n = prompt("Ingrese la cantidad de lineas a imprimir: ");
Nlineas(n);

function Nlineas(n) {
  var text = "";
  for (var i = 1; i <= n; i++) {
    for (var m = 1; m <= n; m++) {
      if (i == m) {
        text += i + "  ";
        break;
      }
      else {
        text += m + "  ";
      }
    }
    text += "\n";
  }
  alert(text);
}

/*
QA: Raul Rivadeneyra

Nlineas():
Valores mayores a 32, pero para los valores que si funcionan (1-32) trabaja de maravilla
Valores menores a 0 simplemente no hace nada
*/
