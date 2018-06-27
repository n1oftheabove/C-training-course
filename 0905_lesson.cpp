#include<iostream>
#include<cstdlib>
using namespace std;

//Operatoren
	//Artimetische Operatoren + - * / ++ -- (sind mit allen numerischen Datentypen verknüpft)
			//sind auch mit Datentypen verknüpft. Datentyp = {bestimmte Werte}+{Menge Operatoren}
	//Vergleichsoperatoren < > == <= >= !=
	//Logische UND && ODER |


//HOMEWORK Kontrollstrukturen
	// if, if --else, switch--case. Schleifen: for--schleife, while--schleife, do--while()
	// VOR ALLEM geschweifte Klammern


unsigned char isEven(int num); //Methode, die rausfinden soll ob Zahl grade oder ungerade

int main(){
	double x = 3.14;
	int i = 23;
	double y = (x-i) * 5; //Typzusammenführung -> Compiler konvertiert immer automatisch zum nächsthöheren Typ
	//(double - int)*int
	//double * int
	//double
	//Automatische, Implizite Typenkonversion: byte -> short -> int -> long -> float -> double
	//Explizite Typenkonversion:
	double genauer = 3.14159265389;
	float genau = (float)3.1415927; //explizit mitteilen!
	int ungenau = (int)genau;
	
	//logischer Ausdruck
	int num;
	cin>>num;
	if(isEven(num)) cout<<num<<"is"<<"even"<<endl;
	return 0;
	//weitere logische Op
	// (a==a) ---> 1
	// (a==b) ---> ?
	// (a!=a) ---> 0
	// (2<=2) --->1

	//&&		(3<=3) && (4>4) ---> 0   UND
	//||		(3<=3) || (4>4) ---> 1	 ODER
	//!			(3<=3) && !(4>4) ---> 1		MIT NEGATION
}

unsigned char isEven(int num){
	return (num % 2) == 0; // teilt num durch 2, schaut, ob Rest ==0, returned true, wenn das der Fall ist
}