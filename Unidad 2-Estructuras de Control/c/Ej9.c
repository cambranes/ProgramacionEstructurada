//**
**//
#include "stdio.h"

int main() {
  //Inputs
  int n = 0;
  int multiplier = 0;
  scanf("%d", &n);

  //Process
  for (int i = 1; i < n; i++){
    if ((i % 5) == 0){
      multiplier++;
    }
  }
  //Outputs
  printf("There are %d multipliers of 5 between 1 and %d\n", multiplier, n);

  return 0;
}
