#include<stdio.h>

int main()
{
	int i, j, n, sum = 0, es_primo = 1;

	scanf("%d", &n);
	
	for (i = 2; n > 0; i++) //a partir de dos están los primos
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)		
			{
				es_primo = 0;
				break;
			}
		}
		
		if (es_primo)
		{
			sum += i;
			n--;
		}
	
		es_primo = 1;
	}

	printf("%d", sum);
}
