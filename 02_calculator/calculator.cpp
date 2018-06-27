/* This programm is a calculator that carries out the four calculations
 + - * / with two input numbers*/
#include <iostream>
#include <cstdlib> //for system("PAUSE")


//********DECLARE METHODS

double multiply(double x, double y);
double sum(double x, double y);
double subtract(double x, double y);
double divide(double x, double y);
using namespace std;

//********MAIN
int main(){

	double x = 0;						//initialise first input number
	double y = 0;						//initialise second input number
	double result = 0;					//initialise result variable
	char op = {1};						//initialise char variable for input operation
	bool b = true;
	bool b2 = 0;
	bool b3 = 'a';
	bool b4 = 1;
	bool b5 = -1;
	bool b6 = false;
	std::cout << b<<" "<<b2<<" "<<b3<<" "<<b4<<" "<<b5<<" "<<b6<<std::endl;

	std::cout << "Add, subtract, multiply, divide two numbers" << std::endl; //plot programm description

	std::cout << "First number? ";		//ask for first number
	
	if(!(std::cin >> x)){               //check if input is valid, (std::cin >> x) checks if reading is successfull
		std::cerr << ": is no valid number.\n Press any key to exit programm.";
		system("PAUSE");
		return 1;						//returns 1 for main
	}
	
	std::cout << "Operation (+ - * / ) ? ";
	
	if(!(std::cin >> op)){              //check if input is valid
		std::cerr << ": is no valid operation.\n  Press any key to exit programm.";
		system("PAUSE");
		return 1;
	}
	std::cout << "Second number ";
		if(!(std::cin >> y)){           //check if input is valid
		std::cerr << ": is no valid number.\n Press any key to exit programm.";
		system("PAUSE");
		return 1;
	}
		switch(op){                      //calculate result according to user's input, using methods defined below
		case '+' : result = sum(x,y);
		break;
		case '-' : result = subtract(x,y);
		break;
		case '*' : result = multiply(x,y);
		break;
		case '/' : result = divide(x,y);
		break;
		default: std::cout << op << "invalid operation";
	} 
	std::cout << "Result " << result << std::endl;
	system("PAUSE");
	return 0;							//main successfull => return 0
}

//*******DEFINE METHODS
double multiply(double x, double y){
	double result;
		result = x*y;
		return result;
}
double sum(double x, double y){
	double result;
		result = x+y;
		return result;
}
double subtract(double x, double y){
	double result;
		result = x-y;
		return result;
}
double divide(double x, double y){
	double result;
		result = x/y;
		return result;
}
