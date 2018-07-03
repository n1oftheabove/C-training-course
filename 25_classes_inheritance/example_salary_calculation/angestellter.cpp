//mehrfachvererbung duirchaus möglich, aber auch risikoreich. Bsp.: Klasse "Fahrzeug", unterklassen Landfahrzeug, Amphibienfahrzeug, Landfahrzeug, etc...
	//wenn z.b. Amphibienfahrzeug Methode fahren() erben sollte, und aber in Landfahrzeug und Fahrzeug schon fahren() vorkommt, welche wird genommen?

#include "angestellter.h"
#include <iostream>

void Angestellter::setUeberstunden(int ueberstunden){

	if(ueberstunden <0){
		ueberstunden =0;
	}
	this -> ueberstunden = ueberstunden;
}

int Angestellter::getUeberstunden(){
	return ueberstunden;
}


//Überschreiben der geerbten Methode berechneGehalt

int Angestellter::berechneGehalt(){
	return 2000 + 50 * ueberstunden;
	}



Angestellter::Angestellter() : Person() {
	//name = "max Mustermann" // wenn Person::name unter protected liefe
	ueberstunden =0;
	
}

Angestellter::Angestellter(string name, int ueberstunden) : Person(name){
	setUeberstunden(ueberstunden);
}

Angestellter::~Angestellter(){
	 std::cout << "Person " << getName() << " gelöscht" << std::endl;
}
