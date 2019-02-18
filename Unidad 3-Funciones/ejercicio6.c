/*ejercicio 6.-Escribir con modulos un programa en C que reciba tres números
enteros que representan dos catetos y una hipotenusa y que determine si
cumple con la ecuación de pitágoras.
a2 +b2 = c2
Autor: Ronsson Ramiro may santos
fecha. 16/febrero/2019
*/
#include<stdio.h>
#include<math.h>


int main(){
int valCat1,valCat2,hipotenusa;
valCat1=getValueCat1();
valCat2=getvalueCat2();
hipotenusa=getHipotenusa();
printf("\nLA RAIZ DE LOS CATETOS AL CUADRADO ES : %d",catetos(valCat1,valCat2));
comparacion( valCat1,valCat2,hipotenusa);


 return 0;
}
int getValueCat1(){// funcion numero 1 --obtiene el valor del cateto1
    int valCat1;
    printf("\nINTRODUCE EL VALOR DEL CATETO 1:");
    scanf("%d",&valCat1);
return valCat1;
}
int getvalueCat2(){//  funcion numero 2--obtiene el valor del cateto1
    int valCat2;
    printf("\nINTRODUCE EL VALOR DEL CATETO 2:");
    scanf("%d",&valCat2);
return valCat2;
}
int catetos(int cateto1,int cateto2){//  funcion numero 3 --obtiene la raiz del cuadrado de los catetos
int raizCatetosCuadrados;
raizCatetosCuadrados=sqrt(pow(cateto1,2)+pow(cateto2,2));
return raizCatetosCuadrados;
}
int getHipotenusa(){ //  funcion numero 4 --obtiene el valor de la hipotenusa
    int hipotenusa;
    printf("\nAHORA, DIGITA LA HIPOTENUSA:");
    scanf("%d",&hipotenusa);
    return hipotenusa;
}
void comparacion(int valCat1,int valCat2,int hipotenusa){ // producto del proceso
    int resultado;
    resultado=sqrt(pow(valCat1,2)+pow(valCat2,2));
    if(resultado==hipotenusa){
        printf("\nLOS VALORES INTRODUCIDOS CORRESPONDEN A UN TRIANGULO RECTANGULO");
        return ;
    }else{
        printf("\nLos valores introducidos NO corresponden a un triangulo rectangulo");
        return;
    }
    return ;
}
