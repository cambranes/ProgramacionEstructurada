/* Escribir un programa que lea 2 números y los imprima de mayor a menor. */

#include <stdio.h>

// Entrada
int getNumber(){
  int num;
  scanf("%d", &num);
  return num;
}

// Proceso
int getResult(num1, num2){
  if(num1 > num2){
    return 1;
  } else {
    return 0;
  }
}

// Salida
void getOutput(flag, num1, num2){
  if (flag == 1){
    printf("%d %d\n", num1, num2);
  } else {
    printf("%d %d\n", num2, num1);
  }
}

/* MAIN */
int main() {
  int num1, num2, flag;
  num1 = getNumber();
  num2 = getNumber();
  flag = getResult(num1, num2);
  getOutput(flag, num1, num2);

  return 0;
}