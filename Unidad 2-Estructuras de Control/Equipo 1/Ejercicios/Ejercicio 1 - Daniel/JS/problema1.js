
/*Entradas*/
let numero = prompt("Introduce un número");
let esPar;

/*Procedimiento*/

if(numero % 2 == 0){
  esPar = true;
}
else{
  esPar = false;
}

/*Salidas*/

if(esPar){
  alert('El número es par');
}else {
  alert('El número es impar');
}


