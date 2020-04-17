#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tableroMenor{
	int matriz[3][3];
}tableroMenor;

typedef struct sudoku{
	tableroMenor tableroCompleto[3][3];
}sudoku;

void asignarValores(sudoku *);
void imprimirSudoku(sudoku *);
int recorrerCuadro(sudoku* );
int recorrerHorizontal(sudoku *);
int recorrerVertical(sudoku *);
void mostrarResultados(sudoku*);

int main(){
	sudoku arreglo;
	srand(time(NULL));
	asignarValores(&arreglo);
	imprimirSudoku(&arreglo);
	mostrarResultados(&arreglo);
}

void asignarValores(sudoku* arreglo){
	int i,j;
	int m,n;
	for(i=0; i<3;i++){
		for(j=0; j<3; j++){
			for(m=0;m<3;m++){
				for(n=0;n<3;n++){
					(*arreglo).tableroCompleto[i][j].matriz[m][n] = rand()%9 + 1;
				}
			}
		}
	}
	
}

void imprimirSudoku(sudoku* arreglo){
	int i,j;
	int m,n;
	for(i=0; i<3;i++){
		for(m=0; m<3; m++){
			for(j=0;j<3;j++){
				for(n=0;n<3;n++){
					printf("%d ",(*arreglo).tableroCompleto[i][j].matriz[m][n]);
				}
				printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	
}

int recorrerCuadro(sudoku* arreglo){
	/* Bandera */
	int verificar = 1;
	int i,j,m,n, x, z;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			int indice = 0;
			// Aqui se guardan los valores de cada cuadro
			int digito[9];
			for(m=0;m<3;m++){
				for(n=0; n<3; n++){
					digito[indice]=(*arreglo).tableroCompleto[i][j].matriz[m][n];
					// se le suma uno al indeice para que ocupe otro espacio
					indice += 1;
				}
			}
			for(x=0;x<9;x++){
				for(z=0;z<9;z++){
					if (digito[x] == digito[z] && x != z){
						// si son iguales indica que hay dos digitos en el mismo cuadro 
						// y se cambia el valor a 0
						verificar = 0;
					}
				}
				// volver a 0 para que el arreglo no si pase  del limite
				indice = 0;
			}
		}
	}
	return verificar;
}
	

int recorrerHorizontal(sudoku* arreglo){
	/* Bandera */
	int verificar = 1;
	int i,j,m,n, x, z;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			int indice = 0;
			// Aqui se guardan los valores de cada fila
			int digito[9];
			for(m=0;m<3;m++){
				for(n=0; n<3; n++){
					digito[indice]=(*arreglo).tableroCompleto[i][m].matriz[j][n];
					// se le suma uno al indeice para que ocupe otro espacio
					indice += 1;
				}
			}
			for(x=0;x<9;x++){
				for(z=0;z<9;z++){
					if (digito[x] == digito[z] && x != z){
						// si son iguales indica que hay dos digitos en la misma fila
						// y se cambia el valor a 0
						verificar = 0;
					}
				}
				// volver a 0 para que el arreglo no si pase  del limite
				indice = 0;
			}
		}
	}
	return verificar;
}

int recorrerVertical(sudoku* arreglo){
	int verificar = 1;
	int i,j,m,n, x, z;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			int indice = 0;
			// Aqui se guardan los valores de cada columna
			int digito[9];
			for(m=0;m<3;m++){
				for(n=0; n<3; n++){
					digito[indice]=(*arreglo).tableroCompleto[j][i].matriz[n][m];
					// se le suma uno al indeice para que ocupe otro espacio
					indice += 1;
				}
			}
			for(x=0;x<9;x++){
				for(z=0;z<9;z++){
					if (digito[x] == digito[z] && x != z){
						// si son iguales indica que hay dos digitos en la misma columna 
						// y se cambia el valor a 0
						verificar = 0;
					}
				}
				// volver a 0 para que el arreglo no si pase  del limite
				indice = 0;
			}
		}
	}
	return verificar;
}


void mostrarResultados(sudoku* arreglo){
	// obtener los resultados de cada bandera 
	int resultadoC = recorrerCuadro(arreglo);
	int resultadoH = recorrerHorizontal(arreglo);
	int resultadoV = recorrerVertical(arreglo);
	if (resultadoC==1 && resultadoH ==1 && resultadoV==1 ){
		printf("\t Es un Sudoku ");
	}else{
		printf("\t No es Sudoku ");
	}
}
