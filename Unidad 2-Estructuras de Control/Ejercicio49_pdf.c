#include <stdio.h>


int main()
{
  int i, numero = 2, j;

  printf("La tabla de multiplicar es : \n\n", numero );
  for (i = 2; i <=9; i++) {
    printf("La tabla del %d \n\n" ,i );
    for (j = 1; j <= 10; j++) {
      numero = j * i;
      printf("%d * %d = %d \n", i, j, numero);
    }
  }

return 0;
}
