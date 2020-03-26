/*
Autor: Ake Vela Alexis Ivan

Proceso en general:
Determina si un numero es impar a partir del 0 hasta al 10 e imprime la suma de los impares

Entrada:
-Ninguna

Salida:
25
*/

public class Main{
    public static void main(final String[] args) {
        int numeros = 0, suma = 0;
        
        //Ciclo para calcular el resultado
        for(int i= 0;i<= 10; i++){
            //Evaluamos si el numero es par o impar mediante el MOD
            if(i%2 !=0){
                suma= suma + i;
            }
        }
        System.out.println(suma);
    }
}