//Syntax vs. Semantik
	//Compiler erkennt nur Syntax-Fehler
	//Semantik Fehler wird erst zur Laufzeit erkannt -> Exception z.b. "durch Null teilen"

	//Syntax:
		//Anweisungen durch Semikolon abgeschlossen
		//{...} Blöcke, Methoden gefolgt mit (...)
		//Typ Mismatch ist typischer Compiler-Fehler

//1. Methoden deklarieren, 2. Methoden definieren, 3. Aufrufen

// Bibliotheken einbinden: #include<biblio>
// Variable:
	//Variablendeklaration: DT variablenname;
	//initialisierung: DT variablenname = wert; oder DT VN; VN = Wert;
//Datentypen:
	//primitive Datentypen (Fundamentale, oder Elementare)
	//Klassen, Enums
	// Eine Variable deklarieren = Speicher, der groß genug ist für diese Variable, wird reserviert (über Adressierung)
	// Eine Variable dann definieren = Speicher wird vollgeschrieben

//HAUSAUFGABE: 
	//1. Tabelle von primitiven Datentypen erstellen mit Eigenschaften
	//2. Taschenrechner mit vier Grundrechnenarten programmieren

//8th of May 2014

#include <iostream> //Bibliothek einbinden für I/O
//#include"meinelokaleBib.h"
#include <cstdlib> //for system("PAUSE")

//********DECLARE METHODS, method(Schnittstelle, Signatur, Kopf)

double square(double x); /*My method is named square, expects a double and outputs a double;
convention: classes labeled by nouns, labeling for methods using verbs.*/

int main()
{
	std::cout << "Hello World" << std::endl; /*what is placed left and right of << is operand, <<  is Operator|
	cout belongs to namespace std. alternate usage:
	using namespace std; 
	then int main() and std:: can be left out*/
	system("PAUSE"); //windows only, keeps programm running until keystroke

	double x = square(7.0);
	return 0;	
}

//cout and system are methods. Custom methods...

//*******Custom methods (Implementing)

double square(double x){
	//Algorithmus
	double result;
		result = x*x;
		return result; //has to be of the declared datatype
}
