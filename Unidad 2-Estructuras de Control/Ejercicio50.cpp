#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    int N,i,j;
    float e=1,factorial;

    scanf("%i",&N);

    for(i=1; i<=N; i++){
        factorial=1;
        for(j=1; j<=i; j++){
            factorial*=j;
        }
        e+= 1/factorial;
    }

    printf("%f",e);


	
	return 0;
}