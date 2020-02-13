//Equipo 4//
//Fecha 05/02/2020//
//Un programa que lea la ID numerica, edad y sueldo de 10 personas y que determine cuantos mayores de 35 años tuvieron salarios comprendidos entre $5000 y $7500//

int main(void) {
    //Entrada//
    int  edad = 0, cont = 0, id = 0, salida = 0;
    float sueldo = 0;

    //Proceso//
    while (cont < 10)//se incia el ciclo//
    {
        scanf_s("%d", &id);
        scanf_s("%d", &edad);
        scanf_s("%f", &sueldo);
        cont = cont ++;
        if (edad > 35)
        {
            if (sueldo >= 5000 & sueldo <= 7500)//se valida si el sueldo ingresado cumple los estandares de sueldo requeridos por el problema//
            {
                salida = salida + 1;//si todos los estandares requeridos se cumplen se cuenta a la persona en la salida final//
            }
        }
    }
    //Salida//
    printf("%d", salida);//se imprime como salida final, la cantidad de personas que cumplieron los estandares establecidos por el problema//
}