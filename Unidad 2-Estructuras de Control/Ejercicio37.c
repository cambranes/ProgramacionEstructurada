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

    int count = 0;
    int result = 0;
    int j = 0;
    int acum = 0;
    

    while (count < num)
    {
        // Is Prime? 
        if (j < 1) {
                result = 0;
            } else if (j == 2)
            {
                result = 1;
            } else {
                for (int  i = 2; i < j; i++)
                {
                    if (j%i == 0)
                    {
                        result = 0;
                        break;
                    }
                    result = 1;
                    
                }
                
            }
        // Adder
        if (result == 1)
        {
            count = count + 1;
            acum = acum + j;
        }

        j++;
        result=0;
        
    }
    number = acum;
    
    
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