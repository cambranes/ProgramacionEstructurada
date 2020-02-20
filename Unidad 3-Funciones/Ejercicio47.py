#----------------------------------Datos del problema-------------------------------------
#Ejercicio #
# Dados dos números enteros determinar su máximo común divisor.
# Roberto Carlos Llanes Montero (Equipo 'about:blank')

#----------------------------------Prototipo de funciones----------------------------------
#Python no permite la creación de prototipos debido al funcionamiento de la definición de 
#sus funciones, de hecho, gran parte de estos conceptos estan haciendo más lento al proceso
#de python :c

#----------------------------------------Funciones------------------------------------------
#También python no acepta poner funciones al final :c

def getEmployees():
	employees = input()
	return employees 

def getName():
	name = input()
	return name

def getAge():
	age = input()
	return age

def getSalary():
	salary = input()
	return salary
	
def getTimeWork():
	timeWork = input()
	return timeWork
	
def getTax():
	tax = input()
	return tax

def process(timeWork,salary,tax):
	#Obtiene el impuesto general
	tax = 1-(float(tax) / 100)
	if( int(timeWork) > 40 ):
		#Saca las horas extra
		extra = int(timeWork) - 40
		#Calcula el sueldo
		return ((float(timeWork)*float(salary))+(float(extra)*float(salary)))*float(tax)
	else:
		return (float(timeWork)*float(salary))*float(tax)	
		
def printOut(finale):
	print(finale)

#----------------------------------------Proceso-------------------------------------------
#Obtener el numero de empleados
employees = getEmployees()

#Pedir los datos de todos los empleados
for employe in range(int(employees)):

	#Obtener datos del empleado 
	name = getName()
	age = getAge()
	salary = getSalary()
	timeWork = getTimeWork()
	tax = getTax()

	#Proceso
	result = process(timeWork, salary, tax)

	#Imprimir resultado
	printOut(result)
	

