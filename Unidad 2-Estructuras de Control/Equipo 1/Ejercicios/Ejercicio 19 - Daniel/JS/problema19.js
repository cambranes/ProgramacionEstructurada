let numero1 = parseFloat(prompt('Ingresa el número 1'));
let numero2 = parseFloat(prompt('Ingresa el número 2'));
let numero3 = parseFloat(prompt('Ingresa el número 3'));

let numeroMayor = null;

if (numero1>numero2){
  if (numero1>numero3){
    numeroMayor = numero1;
  }
  else{
    numeroMayor = numero3;
  }
} else {
  if (numero2 > numero3){
    numeroMayor = numero2;
  } else if (numero3 > numero2){
    numeroMayor = numero3;
  }
}

if(numeroMayor){
  alert("El número mayor es" + numeroMayor);
}else {
  alert("Los números son iguales");
}
  
