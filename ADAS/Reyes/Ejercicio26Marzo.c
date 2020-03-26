#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N = 7;

void generateArr(int arr[][N]);
void printArr(int arr[][N]);
void from2to4(int arr[][N]);
void from1to3(int arr[][N]);

int main () {

    int arr[N][N];

    // Rand initializer
    srand(time(NULL));

    generateArr(arr);

    from2to4(arr);
    printf("\n");
    from1to3(arr);

}

// Generar un array aleatorio
void generateArr(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}


// Imprimir el arreglo con el area 2 y 4 resaltadas
void from2to4(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if( i <= (N/2) && j <= (N - 1) - i) {
                if( j >= i) {
                    printf("\033[35m%d  \033[0m", arr[i][j]);
                } else {
                    printf("%d  ", arr[i][j]);
                }
            } else {
                if( j >= (N - 1) - i && j <= i) {
                    printf("\033[35m%d  \033[0m", arr[i][j]);
                } else {
                    printf("%d  ", arr[i][j]);
                }
            }
        }
        printf("\n");
    }
}

// Imprimir el arreglo con el area 1 y 3 resaltadas
void from1to3(int arr[][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(j >= (N/2)) {
                if( j >= i && j >= (N - 1) - i) {
                    printf("\033[35m%d  \033[0m", arr[i][j]);
                } else {
                    printf("%d  ", arr[i][j]);
                }
            } else {
                if( j <= i && j <= (N - 1) - i) {
                    printf("\033[35m%d  \033[0m", arr[i][j]);
                } else {
                    printf("%d  ", arr[i][j]);
                }
            }
        }
        printf("\n");
    }
}