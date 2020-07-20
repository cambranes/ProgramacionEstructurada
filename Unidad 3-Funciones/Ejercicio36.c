#include <stdio.h>
#include <math.h>

// Variables Globales

int initialNumber, j, i;

void entrada() {
    scanf("%d", &initialNumber);
}

void proceso() {
    for (int i = 0; i < initialNumber; i++)
    {
        for (int j = 0; j < initialNumber; j++)
        {
            if (j <= i)
            {
                printf("%d", i);
                printf("%d", j);
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
    
}


int main() {
    entrada();
    proceso();
}