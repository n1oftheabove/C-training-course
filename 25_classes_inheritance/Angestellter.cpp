#include "Angestellter.h"


//Was verstehen sie unter den folgenden Begriffen?
	//Overloading (�berladen)
	//Shadowing, G�ltigkeitsbereich, Polymorphism, eine Methode Redefinieren
	//Namensaufl�sung
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