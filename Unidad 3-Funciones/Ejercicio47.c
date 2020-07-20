/*#----------------------------------Datos del problema-------------------------------------
#Escribe elprogramaque lea datos de muchos empleados de una fábrica. De cada uno se #leerá: Nombre, Edad, Sueldo por hora, Horas trabajadas en la semana  y  Porcentaje  de  #impuestos  a  pagar.    El  pseudocódigo  calculará  e imprimirá el sueldo neto semanal #de cada empleado, el cual es el sueldo ya con    los  impuestos  deducidos.  Se  debe  #considerar  que  las  horas  extra (después de 40 horas semanales se pagan al doble).
# Roberto Carlos Llanes Montero (Equipo 'about:blank')*/


#include <stdio.h>
//Hago struct para almacenar todos los datos de un empleado.
struct person{
  char name[100];
  int age;
  float salary;
  float timeWork;
  float tax;
};
struct person p;

//Prototipo de funciones
void getName();
void getAge();
void getSalary();
void getTimeWork();
void getTax();
void entrada();

float proceso();

void salida();

int main() {
  //Declaraci[on de variables]
  float finale;
  //Entrada
  entrada();
  //Proceso
  finale = proceso(p.timeWork, p.salary, p.tax);
  //Salida
  salida(finale);

  return 0;
}

//Funciones
//Entrada de datos
void getName(){
  scanf("%[^\n]", p.name);
}
void getAge(){
  scanf("%d", &p.age);
}
void getSalary(){
  scanf("%f", &p.salary);
}
void getTimeWork(){
  scanf("%f", &p.timeWork);
}
void getTax(){
  scanf("%f", &p.tax);
}
//Creaci[on del perfil de la persona]
void entrada(){
  getName();
  getAge();
  getSalary();
  getTimeWork();
  getTax();
}

//Procesamiento de datos
float proceso(timeWork, salary, tax){
  float cuenta;
  //Calculo del porcentaje final.
  tax = 1 - ( tax / 100 );
  if( timeWork > 40 ){
    //Horas extra trabajadas
    float extra = timeWork - 40;
    cuenta = (( timeWork * salary ) + ( 2 * extra * salary )) * tax;
    return cuenta;
  }
  else{
    cuenta = ( timeWork * salary ) * tax; 
    return cuenta;
  }
}

//Salida de resultados
void salida(result){
  printf("%d", result);
}
