var a = prompt("Ingrese el primer numero");
var b = prompt("Ingrese el segundo numero");
MCD(a,b);

function MCD(a,b) {
  var primosA = 0, primosB = 0, maxComDiv = 1;
  if ((a%2==0 || a%3==0) && (b%2==0 || b%3==0)) {
    while (b>1 || a>1) {
      if (primosA > primosB) {
        if (b%2==0) {
          primosB = 2;
          b = b / 2;
        }
        else {
          if (b%3==0) {
            primosB =  3;
            b = b / 3;
          }
          else{
            if (b%5==0) {
              primosB = 5;
              b = b / 5;
            }
          }
        }
      }
      else {
        if (primosA < primosB) {
          if (a%2 == 0) {
            primosA = 2;
            a = a / 2;
          }
          else{
            if (a%3 == 0) {
              primosA = 3;
              a = a / 3;
            }
            else{
              if (a%5 == 0) {
                primosA = 5;
                a = a / 5;
              }
            }
          }
        }
        else {
          if (a%2 == 0) {
            primosA = 2;
            a = a / 2;
          }
          else{
            if (a%3 == 0) {
              primosA = 3;
              a = a / 3;
            }
            else{
              if (a%5 == 0) {
                primosA = 5;
                a = a / 5;
              }
            }
          }
          if (b%2==0) {
            primosB = 2;
            b = b / 2;
          }
          else {
            if (b%3==0) {
              primosB =  3;
              b = b / 3;
            }
            else{
              if (b%5==0) {
                primosB = 5;
                b = b / 5;
              }
            }
          }
        }
      }
      if (primosB == primosA) {
        maxComDiv = maxComDiv * primosA;
      }
    }
  }
  alert("El maximo comun divisor es: " + maxComDiv)
}
