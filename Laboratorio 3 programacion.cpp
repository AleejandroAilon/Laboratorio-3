#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Función para calcular una potencia
double calcularPotencia(double base, double expo){
	// En caso de que el exponente sea cero o negativo
	if(expo == 0){
		return 1.0;
	}else if(expo > 0){
		return pow(base, expo);
	}else{
		// Negativo
		return 1.0 / pow(base, -expo);
	}
}

// Función para los numeros primos
bool esPrimo(int num){
	if(num <= 1){
		return false;
	}
	
	for(int i = 2; i <= sqrt(num); ++i){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

// Función para los años bisiestos
bool esBisiesto(int anio){
	return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

int main(){
	int op;
	cout << "***Bienvenido a este programa*** \n";
	do{
		cout << "Menu de opciones \n";
		cout << "1. Realizar operaciones con dos numeros enteros \n";
		cout << "2. Calcular una potencia \n";
		cout << "3. Determinar si un numero es primo \n";
		cout << "4. Determinar si un anio es bisiesto \n";
		cout << "5. Cerrar programa \n";
		cout << "Seleccione la opción que desee: ";
		cin >> op;
		
		switch (op){
			case 1:{
				//1. Realizar operaciones con dos numeros enteros
				system("cls");
				cout << "Opcion ingresada: " << op << " \n";
				int num1, num2;
				cout << "-------------------------------------------- \n";
				cout << "Ingrese un numero entero: ";
				cin >> num1;
				cout << "Ingrese otro numero entero: ";
				cin >> num2;
				cout << "-------------------------------------------- \n";
				int suma = num1 + num2;
				int resta = num1 - num2;
				int multi = num1 * num2;
				int div = (num2 != 0) ? (num1 / num2) : 0;
				
				bool igual = (num1 == num2);
				bool diferente = (num1 != num2);
				bool mayorQue = (num1 > num2);
				bool menorQue = (num1 < num2);
				
				// Mostrar los resultados
				cout << "________________________________________________ \n";
				cout << "Los resultados son los siguientes: \n";
				cout << "Suma: " << suma << endl;
				cout << "Resta: " << resta << endl;
				cout << "Multiplicacion: " << multi << endl;
				
				if(num2 != 0){
					cout << "Division: " << div << endl;
				}else{
					cout << "Esta division no se puede realizar, ya que el divisor es cero. \n";
				}
				cout << "________________________________________________ \n";
				
				cout << "________________________________________________ \n";
				cout << "Igualdad: " << igual << endl;
				cout << "Diferente: " << diferente << endl;
				cout << "Mayor que: " << mayorQue << endl;
				cout << "Menor que: " << menorQue << endl;
				cout << "________________________________________________ \n";
				break;
			} // Fin del case 1
			
			case 2:{
				// 2. Calcular una potencia
				system("cls");
				cout << "Opcion ingresada: " << op << " \n";
				double base;
				int expo;
				
				cout << "------------------------------------------------ \n";
				cout << "Ingrese la base: ";
				cin >> base;
				cout << "Ingrese el exponente: ";
				cin >> expo;
				cout << "------------------------------------------------ \n";	
				
				double resultado = calcularPotencia(base, expo);
				
				cout << "_____________________________________________ \n";
				cout << "El resultado de " << base << " elevado a la " << expo << " es: " << resultado << "\n";
				cout << "_____________________________________________ \n";			
				break;
			} // Fin del case 2
			
			case 3:{
				// 3. Determinar si un numero es primo
				system("cls");
				cout << "Opcion ingresada: " << op << " \n";
				int numP;
				
				cout << "----------------------------------------- \n";
				cout << "Ingrese un numero para evaluar si es primo: ";
				cin >> numP;
				cout << "----------------------------------------- \n";
				
				cout << "_________________________________________________________________________ \n";
				if(esPrimo(numP)){
					cout << "El numero " << numP << " si pertenece a los numeros primos. \n";
				}else{
					cout << "No es un numero primo. Recuerde que los numeros primos son unicamente \n";
					cout << "los que son divisibles entre 1 y ellos mismos. \n";
				}
				cout << "_________________________________________________________________________ \n";
				break;
			} // Fin del case 3
			
			case 4:{
				// 4. Determinar si un año es bisiesto
				system("cls");
				cout << "Opcion ingresada: " << op << " \n";
				int anio;
				
				cout << "----------------------------------------------------------------------- \n";
				cout << "Ingrese el anio actual o cualquier otro para verificar si es bisiesto: ";
				cin >> anio;
				cout << "----------------------------------------------------------------------- \n";
				
				cout << "___________________________________________________ \n";
				if(esBisiesto(anio)){
					cout << "El anio " <<  anio << " es bisiesto. \n";
				}else{
					cout << "El anio ingresado no es bisiesto \n";
				}
				cout << "___________________________________________________ \n";
				break;
			} // Fin del case 4
			
			case 5:{
				// Cerrar programa
				system("cls");
				cout << "___________________________________________________ \n";
				cout << "Espero haberte ayudado! \n";
				cout << "Cerrando programa... \n";
				cout << "___________________________________________________ \n";
				break;
			} // Fin del case 5
			
			default:
				system("cls");
				cout << "______________________________________________________ \n";
				cout << "Al parecer estas fuera del rango. Intentalo de nuevo. \n";
				cout << "______________________________________________________ \n";
				break;
		}
	}while(op != 5);
	
	return 0;
}





































