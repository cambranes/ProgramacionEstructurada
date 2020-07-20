#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N = 3;
int running = 1;

// Main Functions
void generateArr(int arr[][N]);
void printArr(int arr[][N]);
void menuReturn();

// Array Paths
void recorrerMatriz1_2Ascendente(int arr[][N]);
void recorrerMatriz1_2Descendente(int arr[][N]);
void recorrerMatriz3_4Ascendente(int arr[][N]);
void recorrerMatriz3_4Descendente(int arr[][N]);
void recorrerMatriz1_4Ascendente(int arr[][N]);
void recorrerMatriz1_4Descendente(int arr[][N]);
void recorrerMatriz2_3Ascendente(int arr[][N]);
void recorrerMatriz2_3Descendente(int arr[][N]);
void recorrerMatriz1Ascendente(int arr[][N]);
void recorrerMatriz1Descendente(int arr[][N]);
void recorrerMatriz2Ascendente(int arr[][N]);
void recorrerMatriz2Descendente(int arr[][N]);
void recorrerMatriz3Ascendente(int arr[][N]);
void recorrerMatriz3Descendente(int arr[][N]);
void recorrerMatriz4Ascendente(int arr[][N]);
void recorrerMatriz4Descendente(int arr[][N]);
void recorrerDiagonalPrincipal(int arr[][N]);
void recorrerDiagonalInvertida(int arr[][N]);


int main() {

    int arreglo[N][N], ans;

    // Rand initializer
    srand(time(NULL));

    generateArr(arreglo);

    while(running == 1) {
        system("clear");
        printf("\n\033[1;34m===============================================\n");
        printf("============ RECORRIDO DE MATRICES ============\n");
        printf("===============================================\n\n\033[0m");

        printArr(arreglo);
        printf("\n");

        printf("MENU: \n");
        printf(" \033[32m1. \033[0mGenerar nueva matriz\n");
        printf(" \033[32m2. \033[0m 1-2 Ascendente      \033[32m3. \033[0m 1-2 Descendente      \033[32m4. \033[0m 3-4 Ascendente      \033[32m5. \033[0m 3-4 Descendente\n");
        printf(" \033[32m6. \033[0m 1-4 Ascendente      \033[32m7. \033[0m 1-4 Descendente      \033[32m8. \033[0m 2-3 Ascendente      \033[32m9. \033[0m 2-3 Descendente\n");
        printf(" \033[32m10. \033[0m 1 Ascendente       \033[32m11. \033[0m 1 Descendente       \033[32m12. \033[0m 2 Ascendente       \033[32m13. \033[0m 2 Descendente\n");
        printf(" \033[32m14. \033[0m 3 Ascendente       \033[32m15. \033[0m 3 Descendente       \033[32m16. \033[0m 4 Ascendente       \033[32m17. \033[0m 4 Descendente\n");
        printf(" \033[32m18. \033[0m Diagonal           \033[32m19. \033[0m Diagonal Invertida  \033[32m0. \033[0mTerminar sesión\n\n");

        printf(" > ¿Qué acción deseas realizar?: \033[1;32m");
        scanf("%d", &ans);
        printf("\033[0m\n");

        switch (ans)
        {
            case 1:
                generateArr(arreglo);
                break;

            case 2:
                recorrerMatriz1_2Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;            
            
            case 3:
                recorrerMatriz1_2Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 4:
                recorrerMatriz3_4Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 5:
                recorrerMatriz3_4Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 6:
                recorrerMatriz1_4Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 7:
                recorrerMatriz1_4Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 8:
                recorrerMatriz2_3Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 9:
                recorrerMatriz2_3Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 10:
                recorrerMatriz1Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 11:
                recorrerMatriz1Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 12:
                recorrerMatriz2Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 13:
                recorrerMatriz2Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 14:
                recorrerMatriz3Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 15:
                recorrerMatriz3Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 16:
                recorrerMatriz4Ascendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 17:
                recorrerMatriz4Descendente(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 18:
                recorrerDiagonalPrincipal(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 19:
                recorrerDiagonalInvertida(arreglo);
                printf("\n");
                menuReturn();
                break;      

            case 0:
                running = 0;
                break;

            default:
                printf("\n \033[31mIngrese una opción Válida\033[0m\n");
                menuReturn();
                break;
        }

        printf("\n");
    }

}

void menuReturn() {
    int ans;

    printf("\n [ ¿Deseas regresar al menú? (Yes = 1/ No = 0) ]: ");
    scanf("%d", &ans);
    if(ans == 0) {
        running = 0;
    }
}

void generateArr(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}

void printArr(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        printf("                ");
        for(int j = 0; j < N; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

// Path Funcionts
void recorrerMatriz1_2Ascendente(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz1_2Descendente(int arr[][N]) {
    for(int i = N - 1; i >= 0; i--) {
        for(int j = 0; j < N - i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz3_4Ascendente(int arr[][N]) {
    for(int i = 0; i <= (N - 1); i++) {
        for(int j = (N - 1) - i; j <= N - 1; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz3_4Descendente(int arr[][N]) {
    for(int i = N - 1; i >= 0; i--) {
        for(int j = (N - 1) - i; j < N; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz1_4Ascendente(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz1_4Descendente(int arr[][N]) {
    for(int i = (N - 1); i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz2_3Ascendente(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = i; j < N; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz2_3Descendente(int arr[][N]) {
    for(int i = (N - 1); i >= 0; i--) {
        for(int j = i; j < N; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz1Ascendente(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        if( i <= N/2) {
            for(int j = 0; j <= i; j++) {
                printf("%d  ", arr[i][j]);
            }
        } else {
            for(int j = 0; j <= (N - 1) - i; j++) {
                printf("%d  ", arr[i][j]);
            }
        }
        
    }
}

void recorrerMatriz1Descendente(int arr[][N]) {
    for(int i = (N - 1); i >= 0; i--) {
        if( i <= N/2) {
            for(int j = 0; j <= i; j++) {
                printf("%d  ", arr[i][j]);
            }
        } else {
            for(int j = 0; j <= (N - 1) - i; j++) {
                printf("%d  ", arr[i][j]);
            }
        }
        
    }
}

void recorrerMatriz2Ascendente(int arr[][N]) {
    for(int i = 0; i <= N/2; i++) {
        for(int j = i; j <= (N - 1) - i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz2Descendente(int arr[][N]) {
    for(int i = N/2; i >= 0; i--) {
        for(int j = i; j <= (N - 1) - i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz3Ascendente(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        if( i <= N/2) {
            for(int j = (N - 1) - i; j < N; j++) {
                printf("%d  ", arr[i][j]);
            } 
        } else {

            for(int j = i; j < N; j++) {
                printf("%d  ", arr[i][j]);
            }
       }
       
    }
}

void recorrerMatriz3Descendente(int arr[][N]) {
    for(int i = (N - 1); i >= 0; i--) {
        if(i <= N/2) {
            for(int j = (N - 1) - i; j < N; j++) {
                printf("%d  ", arr[i][j]);
            }
        } else {

            for(int j = i; j < N; j++){
                printf("%d  ", arr[i][j]);
            }
        }
        
    }
}

void recorrerMatriz4Ascendente(int arr[][N]) {
    for(int i = N/2; i < N; i++) {
        for(int j = (N - 1) - i; j <= i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerMatriz4Descendente(int arr[][N]) {
    for(int i = (N - 1); i >= N/2; i--) {
        for(int j = (N - 1) - i; j <= i; j++) {
            printf("%d  ", arr[i][j]);
        }
        
    }
}

void recorrerDiagonalPrincipal(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        printf("%d  ", arr[i][i]);
    }
}

void recorrerDiagonalInvertida(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        printf("%d  ", arr[i][(N - 1) - i]);
    }
}