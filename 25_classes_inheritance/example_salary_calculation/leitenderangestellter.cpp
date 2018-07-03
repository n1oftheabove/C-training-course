//mehrfachvererbung duirchaus möglich, aber auch risikoreich. Bsp.: Klasse "Fahrzeug", unterklassen Landfahrzeug, Amphibienfahrzeug, Landfahrzeug, etc...
	//wenn z.b. Amphibienfahrzeug Methode fahren() erben sollte, und aber in Landfahrzeug und Fahrzeug schon fahren() vorkommt, welche wird genommen?

#include "leitenderangestellter.h"
#include <iostream>

void LeitenderAngestellter::setUeberstunden(int bonus){

	if(bonus <0){
		bonus =0;
	}
	this -> bonus = bonus;
}

int LeitenderAngestellter::getBonus(){
	return GRUNDGEHALT + bonus;
}


//Überschreiben der geerbten Methode berechneGehalt

int LeitenderAngestellter::berechneGehalt(){
	return 2000 + bonus;
	}



LeitenderAngestellter::LeitenderAngestellter() : Person() {
	//name = "max Mustermann" // wenn Person::name unter protected liefe
	bonus =0;
	
}

LeitenderAngestellter::LeitenderAngestellter(string name, int bonus) : Person(name){
	setBonus(bonus);
}

LeitenderAngestellter::~LeitenderAngestellter(){
	 std::cout << "Person " << getName() << " gelöscht" << std::endl;
}