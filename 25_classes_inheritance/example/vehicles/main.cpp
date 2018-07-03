#include<iostream>
#include<string>
#include "fahrzeug.h"
#include "lkw.h"
#include "pkw.h"

using namespace std;

int main(){

Fahrzeug f1("B-DD-4567", "VW", "T4", 55, 100, 120);
Lkw l1("B-LL-1234", "Mercedes", "X34", 320, 90, 120, 2);
Pkw p1("B-AA-2567", "Audi", "A2", 120, 100, 210, 5);

f1.info();
l1.info2();
p1.info1();

system("pause");
return 0;

}


//Aufgabe:
// 1. Gibt es Ausnahmen bei Vererbung? Z.b. werden Konstruktoren der Basisklasse vererbt oder nicht?
			//Konstruktoren: In C++11 vererbung möglich (aber noch von kaum einem Compiler unterstützt)
		//was ist mit Operatoren, die in der Basisklasse überladen wurden, gibt es da auch Ausnahmen?
			//alle nicht privaten Operatorüberladungen werden vererbt. Ausnahme: überladener =-Operator
// 2. Was passiert, wenn man Methoden in Vater & Kind-Klasse gleich benennt ( aber jeweils mit unterschiedlichen Parametern)?
		// Methoden nur über deren Parameter unterscheidbar! -> "Methoden-Overloading"
			//Compiler durchsucht immer erst aktuelle Klasse nach einem Bezeichner, falls gefunden, nimmt er den. Falls er keinen findet, geht er in der Klassenhierachie eine Stufe höher und sucht dort
// 3. was ist Polymorphie?
	// abstrakte Basisklasse (z.B. "Audioformat") mit "virtual" Elementfunktionen (mit 0 initialisiert), die keine Objekte instanzieren kann
	// Kindklasse (z.B. "MP3") davon, in der diese Elementfunktionen in jedem Fall geschrieben werden müssen

// Am Beispiel: class Konto - > class Sparkonto - > class Girokonto
	// z.b. bei Girokonto: Nur zum Abheben, kein Dispo
	// Sparkonto: mit Zinsen!