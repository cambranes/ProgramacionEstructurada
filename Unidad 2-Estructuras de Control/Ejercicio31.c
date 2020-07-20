// # Ejercicio #31
// # Dado un número determinar si es primo
// # Autor: Miguel R. Ávila (Equipo 'about:blank')

// # Dato de entrada: un número 
// # Dato de salida: un valor booleano que represente si el número es primo

#include<stdio.h>

// Global Var
int number;
// Functions 

void entrada() {
    scanf("%d", &number);
}

void proceso(int num) {
    int result = 0;
    
    if (num < 1) {
        result = 0;
    } else if (num == 2)
    {
        result = 1;
    } else {
        for (int  i = 2; i < num; i++)
        {
            if (num%i == 0)
            {
                result = 0;
                break;
            }
            result = 1;
            
        }
        
    }
    number = result;
    
}
void salida() {
      printf("%d", number);
}
// main
int main() {
    entrada();
    proceso(number);
    salida();
}