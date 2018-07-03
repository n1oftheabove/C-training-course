#include "Angestellter.h"


//Was verstehen sie unter den folgenden Begriffen?
	//Overloading (Überladen)
	//Shadowing, Gültigkeitsbereich, Polymorphism, eine Methode Redefinieren
	//Namensauflösung
Angestellter::Angestellter(unsigned int zu, string n,unsigned int pn, unsigned int g){
	Personal(n,pn,g);
	setZulagen(zu);//zulagen = zu;
	}
void Angestellter::setZulagen(unsigned int z){
	zulagen = z;
	}
unsigned int Angestellter::getZulagen() const {
	return zulagen;
	}
void Angestellter::print_Data(){
	Personal::print_Data();
	cout << "+Zulagen		 :" << getZulagen() << endl;
	cout << "=Gesamt		 :" << getZulagen() + getGehalt() << endl;


}