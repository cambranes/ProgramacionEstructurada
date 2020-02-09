
import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int N;
        float e,factorial;
        
        //Entrada del valor de N 
        N = entrada.nextInt();
        
        //Operaciones matemáticas
        e=1;
        for(int i=1; i<=N; i++){
            factorial=1;
            for(int j=1; j<=i; j++){
                factorial*=j;
            }
            e+= 1/factorial;
        }
        
        //Salida de la constante matemática 'e'
        System.out.println(e);
        
    }
    
}


/*
Mario Chan Zurita
Programa para calcular el valor de la constante matemática 'e' a traves de la fórmula
e = 1+1/1! + 1/2! +...+ 1/N!
Entrada: Valor de N 
Salida: Valor de la constante matemática 'e'
*/