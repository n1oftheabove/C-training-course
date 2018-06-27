//Syntax vs. Semantik
	//Compiler erkennt nur Syntax-Fehler
	//Semantik Fehler wird erst zur Laufzeit erkannt -> Exception z.b. "durch Null teilen"

	//Syntax:
		//Anweisungen durch Semikolon abgeschlossen
		//{...} Bl�cke, Methoden gefolgt mit (...)
		//Typ Mismatch ist typischer Compiler-Fehler

//1. Methoden deklarieren, 2. Methoden definieren, 3. Aufrufen

// Bibliotheken einbinden: #include<biblio>
// Variable:
	//Variablendeklaration: DT variablenname;
	//initialisierung: DT variablenname = wert; oder DT VN; VN = Wert;
//Datentypen:
	//primitive Datentypen (Fundamentale, oder Elementare)
	//Klassen, Enums
	// Eine Variable deklarieren = Speicher, der gro� genug ist f�r diese Variable, wird reserviert (�ber Adressierung)
	// Eine Variable dann definieren = Speicher wird vollgeschrieben

//HAUSAUFGABE: 
	//1. Tabelle von primitiven Datentypen erstellen mit Eigenschaften
	//2. Taschenrechner mit vier Grundrechnenarten programmieren

//Hello World written by Florian Titze
//8th of May 2014

#include <iostream> //Bibliothek einbinden f�r I/O
//#include"meinelokaleBib.h"
#include <cstdlib> //for system("PAUSE")

//********METHODEN DEKLARIEREN (Schnittstelle, Signatur, Kopf)

double square(double x); /*Meine Methode hei�t square, erwartet ein Double und gibt ein double zurueck;
Konvention: Eigentlich klassen mit nouns, bezeichnung f�r Methoden als Verben.*/

int main()
{
	std::cout << "Hello World" << std::endl; /*was links und rechts von << steht ist Operand, << selbst ist Operator|
	cout gehoert zum namespace std. Alternativ k�nnte man auch:
	using namespace std; 
	vor int main() und std:: weglassen*/
	system("PAUSE"); //windows only, keeps programm running until keystroke

	double x = square(7.0);
	return 0;	
}

//cout und system sind Methoden. Man kann Methoden auch selbst schreiben.

//*******METHODEN DEFINIEREN (Implementieren)

double square(double x){
	//Algorithmus
	double result;
		result = x*x;
		return result; //muss vom erkl�rten Datentyp (in dem fall double) sein
}