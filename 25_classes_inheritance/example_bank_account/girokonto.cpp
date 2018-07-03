#include "girokonto.h"

Girokonto::Girokonto(){
	Konto();
	setDispo(0);
}

Girokonto::Girokonto(unsigned int dispo, string inhaber, string iban, string bic, string institut, unsigned int geld):Konto(inhaber, iban, bic, institut, geld){
	
	setDispo(dispo);
	}

void Girokonto::setDispo(unsigned int dispo){
	this->dispo=dispo;
}
unsigned int Girokonto::getDispo(){
	return dispo;
}
void Girokonto::geldeinzahlen(unsigned int plus){
	unsigned int temp = getGeld();
	temp += plus;
	setGeld(temp);
	//setGeld(getGeld()+plus); //geht auch!
}
bool Girokonto::geldabheben(unsigned int betrag){
	if(getGeld()>=betrag){
		setGeld(getGeld()-betrag);
		return true;
		} else return false;
}


void Girokonto::printdata(){
	Konto::printdata();		//mit :: sonst stack overflow!
	cout << "Dispo : " << getDispo() << endl;
}
