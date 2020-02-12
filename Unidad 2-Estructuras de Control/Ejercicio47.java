

import java.util.Scanner;


public class Empleado {
	
	public static void main(String[] args) {
	
	String Nombre = "Jonny";
	double sueldohora=0;
	int edad =0;
	int horasextras =0;
	double sueldohe=0;
	double impuestos=0;
	int hrstrabajadas=0;
	double sueldo=0;
	double sueldofinal=0;
	

		
	Scanner entrada= new Scanner(System.in);
	Scanner entrada2= new Scanner(System.in);

	
	
	System.out.println("Cual es el nombre del Empleado");
	Nombre= entrada2.nextLine();
	
	
	
	System.out.println("Su Edad");
	edad= entrada.nextInt();
	
	
	
	System.out.println("Introduzca el sueldo");
	sueldohora= entrada.nextDouble();
	
	
	System.out.println("Introduce horas trabajadas a la semana");
	hrstrabajadas= entrada.nextInt();
	
	
	if(hrstrabajadas > 40) {
		
		horasextras= hrstrabajadas-40;
		
	}
	
	
	sueldohe= horasextras*sueldohora*2;
	sueldo= sueldohora*(hrstrabajadas+horasextras);
	
	if(sueldo > 20000) {
		
		impuestos= sueldo*0.15;
	}
	
	else {
	if(sueldo>1000){
		
		impuestos= sueldo*0.10;	
	}
	else {
		impuestos = 0;
		
	}
	}
	
	sueldofinal= sueldo-impuestos;
	System.out.println("Nombre: "+Nombre + "Edad: " + edad + "Sueldo Hora: " + sueldo );
	System.out.println("Horas:  "+ hrstrabajadas + "Impuestos: " + impuestos );
	System.out.println("Sueldo Neto  "+ sueldofinal);
	
	
}
}
