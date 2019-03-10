
void entradas(int*);
float exponencial(int, int);
float serie(int);
void salidas(int);

int main()
{
    int numero;
    float sumaDeSerie;

    printf("Introduce un numero para realizar la suma de la serie \n");
    entradas(&numero);
    sumaDeSerie = serie(numero);
    printf("La suma de la serie es: %f", sumaDeSerie);

	return 0;
}

void entradas(int* numero){
    scanf("%i", numero);
}

float serie(int repeticiones){
    float suma = 0;
    // Repetimos la serie n cantidad de veces
    for(int i = 1; i <= repeticiones; i++){
        suma += (i/exponencial(2, i));
    }
    // Retornamos la suma
    return suma;
}

float exponencial(int base,int exponente){
    int resultado = 1;
    // Elevamos la base la cantidad de veces establecidas por la variable "exponente"
    for(int i = exponente; i > 0; i--){
        resultado *= base;
    }
    return resultado;
}
