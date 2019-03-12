/*
	Autor: Carlos Chan
	Entradas: El numero del producto y la cantidad vendida.
	Salidas: El total de los productos vendidos al dia.
	Procedimiento general: Se lee dos numeros que representan un producto y la cantidad vendida del mismo, 
	posterior con un switch se calcula el precio a pagar y se va acumulando, el programa termina cuando
	el numero de producto este fuera de rango o cuando la cantidad vendida sea negativa.
*/

let productos = [2.98, 4.5, 9.98, 4.49, 6.87];
let cantidad = 0, 
	producto = 1,
	totalVendido = 0;

while(cantidad >= 0 && producto >= 1 && producto <=5){
	alert("Ingresa el numero del producto: ");
	producto = entrada();
	alert("Ingresa la cantidad vendida: ");
	cantidad = entrada();
	
	totalVendido += proceso(productos, cantidad, producto);
	salida(totalVendido);
}

function entrada(){
	let variable = parseInt(prompt("Ingresa un numero: "));
	return variable;
}

function proceso(productos, cantidad, producto){
	let vendido = 0;
	if(cantidad >= 0){
		switch(producto){
		case 1: vendido = productos[0] * cantidad;
			break;
		case 2: vendido = productos[1] * cantidad;
			break;
		case 3: vendido = productos[2] * cantidad;
			break;
		case 4: vendido = productos[3] * cantidad;
			break;
		case 5: vendido = productos[4] * cantidad;
			break;
		default:
		alert("Saliste");
		}	
	}
	else{
		alert("Saliste");
	}
	return vendido;
}

function salida(vendido){
	alert("Total vendido: " + vendido);
}