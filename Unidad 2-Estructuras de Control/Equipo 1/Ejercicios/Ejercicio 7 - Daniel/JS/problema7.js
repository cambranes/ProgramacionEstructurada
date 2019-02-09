let sum = 0;
let numero = parseFloat(prompt("Dame un número positvo ")) || 0;

if(numero > 1000){
  sum = (numero * .05);  
  if(numero > 3000) {
    sum = sum + (numero * .10);
    if(numero > 5000){
      sum = sum + (numero * .05);
    }
  }
}
numero = numero + sum;

alert('El resultado es ' + numero);