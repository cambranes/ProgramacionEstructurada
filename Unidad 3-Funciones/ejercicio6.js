/*ejercicio 6.-Escribir con modulos un programa en C que reciba tres números
enteros que representan dos catetos y una hipotenusa y que determine si
cumple con la ecuación de pitágoras.
a2 +b2 = c2
Autor: Ronsson Ramiro may santos
fecha. 17/febrero/2019
*/
let valCat1,valCat2,hipotenusa,resultado;
valCat1=getValueCat1();
valCat2=getvalueCat2();
hipotenusa=getHipotenusa();
resultado=catetos(valCat1,valCat2);
alert("LA RAIZ CUADRADA DE LOS 2 CATETOS AL CUADRADO ES : "+ resultado);
comparacion( resultado,hipotenusa);

function getValueCat1(){// funcion numero 1 --obtiene el valor del cateto1
    valCat1=Number(prompt("INTRODUCE EL VALOR DEL CATETO 1:"));
    return valCat1;
}

function getvalueCat2(){//  funcion numero 2--obtiene el valor del cateto1
    valCat2=Number(prompt("INTRODUCE EL VALOR DEL CATETO 2:"));
    return valCat2;
}

function catetos( cateto1, cateto2){//  funcion numero 3 --obtiene la raiz del cuadrado de los catetos
raizCatetosCuadrados=Math.sqrt(Math.pow(cateto1,2)+Math.pow(cateto2,2));/*sqrt(pow(cateto1,2)+pow(cateto2,2));*/
return raizCatetosCuadrados;
}
function getHipotenusa(){ //  funcion numero 4 --obtiene el valor de la hipotenusa
    hipotenusa = Number(prompt("INTRODUCE EL VALOR DE LA HIPOTENUSA:"));
    return hipotenusa;
}
function comparacion( resultado, hipotenusa){ // producto del proceso
    //resultado=Math.sqrt(Math.pow(valCat1,2)+Math.pow(valCat2,2));
    if(resultado==hipotenusa){
        alert("LOS VALORES INTRODUCIDOS CORRESPONDEN A UN TRIANGULO RECTANGULO");
        return ;
    }else{
        alert("Los valores introducidos NO corresponden a un triangulo rectangulo");
        return;
    }
    return ;
}
/*
    QA Reviso: Carlos Chan 
    
    getValueCat1():
    Entradas: 5, 10, 3
    Salidas: 5, 10, 3
    Ok
    
    getValueCat2():
    Entradas: 10, 3, 4
    Salidas: 10, 3, 4
    Ok
    
    getHipotenusa():
    Entradas: 12, 11, 8
    Salidas: 12, 11, 8
    Ok
    
    catetos():
    Entradas: 10, 4
    Salidas: 10.77
    Ok
    
    comparacion():
    Entradas: (10.77, 15), (5, 5)
    Salidas: Ok, Ok
    
    Integracion:
    Entradas: (6, 8, 10), (12, 16, 20), (1, 3, 7)
    Salidas: Ok, Ok, Ok
*/
