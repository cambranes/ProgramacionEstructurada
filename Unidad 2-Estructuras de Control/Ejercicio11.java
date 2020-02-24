
import java.math.BigDecimal;
import java.util.Scanner;

/*Escribir una funci�n que reciba un n�mero flotante y un entero. El
entero indicar� el n�mero de d�gitos decimales a los que se redondear� el
flotante.
float redondeoFlotante(float numero, int redondeo)*/


public class Redondeo {

		public static void main(String[] args) throws Exception {
			
			float primerNumero;
			int redondeo;
			
			Scanner input = new Scanner (System.in);  
	        System.out.print("introduce el float ");  
	        primerNumero = input.nextFloat();  
	        System.out.print("introduce la cantidad de digitos a eliminar ");  
	        redondeo = input.nextInt();  
			
			System.out.println(round(primerNumero, redondeo));

		}
	 
		public static float round(float number, int decimalPlace) {
			BigDecimal bd = new BigDecimal(number);
			bd = bd.setScale(decimalPlace, BigDecimal.ROUND_HALF_UP);
			return bd.floatValue();
		}
	}
	 