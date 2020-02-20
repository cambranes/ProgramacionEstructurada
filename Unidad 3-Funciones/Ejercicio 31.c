#include <stdio.h>

int main (){

    int num, i, cont = 0;

    scanf("%d",&num);   

    for (i = 1; i <= num; i++){

        if(num%i == 0){
            cont = cont + 1;
        }
    }

    if (cont > 2 || num == 1 ){
        printf("No es primo");
    }
    else{
        printf("Es primo");
    }
}