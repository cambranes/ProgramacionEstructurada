#include <stdio.h>

int main(){
	int aAng1 = 0, aAng2 = 0;
	scanf("%d", &aAng1);
	scanf("%d", &aAng2);
	
	if(aAng1 == aAng2 && aAng1 != 180 && aAng2 != 180 && aAng1 != 90 && aAng2 != 190){
		printf("angulos iguales\n");
	}
	else if(aAng1 < 90 && aAng2 < 90){
		printf("angulos agudos\n");
	}
	else if(aAng1 == 90 && aAng2 == 90){
		printf("angulos rectos\n");
	}
	else if(aAng1 > 90 && aAng2 > 90 && aAng1 < 180 && aAng2 < 180){
		printf("angulos obtusos\n");
	}
	else if(aAng1 == 180 && aAng2 == 180){
		printf("angulos llanos\n");
	}
	else{
		(aAng1 > 180 && aAng2 > 180);
		printf("angulos concavos");
	
	}
	return 0;
}

