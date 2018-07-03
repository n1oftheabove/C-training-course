#include "sparkonto.h"
#include "konto.h"

Sparkonto::Sparkonto(){
	Konto();
	setZins(0);
	}

Sparkonto::Sparkonto(unsigned int zins, string inhaber, string iban, string bic, string institut, unsigned int geld):Konto(inhaber, iban, bic, institut, geld){
	
	setZins(zins);
	}

void Sparkonto::setZins(unsigned int zins){
	this-> zins = zins;
}

unsigned int Sparkonto::getZins(){
	return zins;
}

double Sparkonto::jahresabschluss(){
	return getGeld()*(1 + zins/100);
	}
		
void Sparkonto::printdata(){
	Konto::printdata();
	cout << "Zins : " << getZins() << endl;

}

