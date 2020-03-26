#include <stdio.h>
#include <math.h>

int main() {
	double aValorx, aPote, aValore = 1;
	int aConti = 0, aFact = 1, aValorn;
	scanf("%lf", &aValorx);
	scanf("%d", &aValorn);
	while(aConti < aValorn){
		aConti = aConti + 1;
		aFact = aFact * aConti;
		aPote = pow(aValorx, aConti);
		aValore = aValore + (aPote)/(aFact);
		
	}
	printf("%lf",aValore);
	return 0;
}


