/*
Autor: Jose Eduardo Mendez Verdejo  16/Febrero/19
Entradas:
Salidas:
Procedimiento:
*/




	
let tam = parseFloat(prompt("numero de clientes a cobrar:"))

var pagar;
var pagarC = [tam];
var descuentoC = [tam];
var pagarDC = [tam];
var totalCaja=0;
var totalDescuentos=0;
var i = 1;

while(i <= tam){

	pagarC[i-1] = entrada(i);

	descuentoC[i-1] = proceso(pagarC[i-1]);
    pagarDC[i-1] = proceso2(pagarC[i-1]);

	totalCaja = totalCaja + pagarDC[i-1];
	totalDescuentos = totalDescuentos + descuentoC[i-1];

	i++;
}


for(i = 1; i <= tam ; i++ ){
	salida(pagarC[i-1],descuentoC[i-1],pagarDC[i-1],i);
}

alert("Total de dinero en caja: " + totalCaja);
alert("Total de descuentos aplicados:" + totalDescuentos);


function entrada(i)
{
	var pagar = parseFloat(prompt("Cuanto va a pagar el cliente no " + i));
	return pagar;
}

function proceso(pagarC){
	var descuentoC,pagarDC;
	if(pagarC>=500 && pagarC<1000)
		{
			descuentoC=pagarC*0.05;
			pagarDC=pagarC*0.95;
		}
		else if(pagarC>=1000 && pagarC<7000)
		{
			descuentoC=pagarC*0.11;
			pagarDC=pagarC*0.89;
		}
		else if(pagarC>=7000 && pagarC<15000)
		{
			descuentoC=pagarC*0.18;
			pagarDC=pagarC*0.82;
		}
		else if(pagarC>=15000)
		{
			descuentoC=pagarC*0.25;
			pagarDC=pagarC*0.75;
		}
		else
		{
			descuentoC=0;
			pagarDC=pagarC;
		}
        return descuentoC;
}

function proceso2(pagarC){
	var descuentoC,pagarDC;
	if(pagarC>=500 && pagarC<1000)
		{
			descuentoC=pagarC*0.05;
			pagarDC=pagarC*0.95;
		}
		else if(pagarC>=1000 && pagarC<7000)
		{
			descuentoC=pagarC*0.11;
			pagarDC=pagarC*0.89;
		}
		else if(pagarC>=7000 && pagarC<15000)
		{
			descuentoC=pagarC*0.18;
			pagarDC=pagarC*0.82;
		}
		else if(pagarC>=15000)
		{
			descuentoC=pagarC*0.25;
			pagarDC=pagarC*0.75;
		}
		else
		{
			descuentoC=0;
			pagarDC=pagarC;
		}
        return pagarDC;
}

function salida(pagarC,descuentoC,pagarDC,i){
	
	if(pagarC<500)
		{
			alert("Cliente "+ i + ":(no alcanzo descuento) Total a pagar "  + pagarDC);
		}
		else	
		{
			alert("Cliente "+ i + ": Monto inicial "+ pagarC +"  Descuento" + descuentoC + "  Total a pagar " + pagarDC);
		}
}