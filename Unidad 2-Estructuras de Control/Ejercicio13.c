/* Escribir el programa para convertir una hora leída en horario militar (número de cuatro dígitos) y la imprima a una hora en formato estándar (hh:00 am/pm). */

#include <stdio.h>

/* GLOBAL VARIABLES */

int time, arr[4], first, second, flag = 0;
char am[] = "am", pm[] = "pm";

/* Functions */

void entrada() {
  scanf("%d", &time);
}

void proceso() {
  for(int i = 0; i < 4; i++) {
    arr[3-i] = time%10;
    time /= 10;
  }
  if( (arr[0] == 1 && arr[1] > 2) || (arr[0] > 1)) {
    first = (arr[0]*10 + arr[1]) - 12;
    flag = 1;
  } else {
    first = arr[0]*10 + arr[1];
  }
  second = arr[2]*10 + arr[3];
}

void salida() {
  if (flag == 0) {
    if(first < 10 && second < 10) {
      printf("0%d:0%d %s", first, second, am);
    } else if(first < 10 && second > 10) {
      printf("0%d:%d %s", first, second, am);
    } else if(first > 10 && second < 10) {
      printf("%d:0%d %s", first, second, am);
    } else {
      printf("%d:%d %s", first, second, am);
    }
  } else {
        if(first < 10 && second < 10) {
      printf("0%d:0%d %s", first, second, pm);
    } else if(first < 10 && second > 10) {
      printf("0%d:%d %s", first, second, pm);
    } else if(first > 10 && second < 10) {
      printf("%d:0%d %s", first, second, pm);
    } else {
      printf("%d:%d %s", first, second, pm);
    }
  }
}

/* MAIN */

int main() {

  entrada();
  proceso();
  salida();

  return 0;
}
