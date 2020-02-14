#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int primo, residuo=0, acum, i;
	
	scanf("%i", &primo);
	
	acum=0;
	for(i=1; i<= primo ; i++){
		residuo = primo % i;
		if (residuo == 0 ){
			acum+=1;
		}
	}
	
	if (acum==2){
		printf("1");
	}else{
		printf("0");
	}

	
	return 0;
}