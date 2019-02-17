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
