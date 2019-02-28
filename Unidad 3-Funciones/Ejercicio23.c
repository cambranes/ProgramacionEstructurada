/*
  Autor: Raul Rivadeneyra
  Entradas: cualquier numero
  Salidas: euler a la potencia del numero asignado
  Proceso general: aplica la siguiente formula e^x = 1 + x + x^2/2! + x^3/3! + ... + x^n/n!
*/
#include "stdio.h"

double factorial(float);
double power(float, int);
void formula(float*, double*);

int main() {
  float x;
  double result = 0;
  printf("Insert a number: ");
  scanf("%f", &x);

  formula(&x, &result);

  printf("The outcome is: %f\n", result);
  return 0;
}


double factorial(float n){
  double answer = 1;
  for (int i = 1; i <= n; i++) {
    answer *= i;
  }
  //printf("Factorial = %d\n", answer);
  return answer;
}

double power(float base, int exponent){
  double answer = 1;
  for (int i = 0; i < exponent; i++) {
    answer *= base;
  }
  //printf("Power = %d\n", answer);
  return answer;
}


void formula(float *x, double *result){
  int precision = 25;
  for (int i = 0; i < precision; i++){
    *result += (power(*x, i) / factorial(i));
    //printf("interaion: %f\n",divison(power(*x, i), factorial(i)));
  }
}
/*
Autor QA: Ronsson RAMIRO MAY SANTOS
ENTRADAS: 5,8,10
SALIDAS : THE OUTCOME IS :148.413;
          THE OUTCOME IS :2980.954493
          THE OUTCOME IS :22025.43166
OBSERVACIONES:EL PROGRAMA SI DETERMINA ex = 1 + x + x2/2! + x3/3! + … + xn/n! 
          

*/
