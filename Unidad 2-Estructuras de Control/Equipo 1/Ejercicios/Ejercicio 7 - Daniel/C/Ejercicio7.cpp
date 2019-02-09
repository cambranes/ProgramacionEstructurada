#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int v=0;
	
	do{
		printf("\nDame un numero: ");
		scanf("%d",&n);
		if(n>0){
			v=1;
			if(n>5000){
				
				n=(n+(n*.20));
				
			}else if(n>3000){
				
				n=(n+(n*0.15));
				
			}else if(n>1000){
				
				n=(n+(n*0.05));
			}
		}else printf("\nEl numero es negativo\n");
		
	} while(v==0);
	
	printf("\nEl numero es: %d",n);
	
	
	
	return 0;
}

