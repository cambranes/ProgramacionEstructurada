import java.util.Scanner;

public class T36
{
    public static void main(String[]ar){
        Scanner sc=new Scanner(System.in);
        int[][] n;
        int a,i,j,k;
        System.out.print("Ingrese número positivo: ");
        a=sc.nextInt();
        n=new int[a][a];
        
        for(i=0;i<=(a-1);i++){
            k=i*10;
            for(j=0;j<=((i));j++){
                
                System.out.print(k+" ");
                k=k+1;
           
        }
    System.out.print("\n");
    }
}
}
