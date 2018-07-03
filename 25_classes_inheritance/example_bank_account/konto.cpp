#include "konto.h"

Konto::Konto(){
	setInhaber("Mustermann");
	setIban("AAA");
	setBic("BBB");
	setInstitut("Musterbank");
	setGeld(0);
}

Konto::Konto(string inhaber, string iban, string bic, string institut, unsigned int geld){
	setInhaber(inhaber);
	setIban(iban);
	setBic(bic);
	setInstitut(institut);
	setGeld(geld);
}


void Konto::setInhaber(string inhaber){
	this->inhaber = inhaber;
}
string Konto::getInhaber() const{
	return inhaber;
}
void Konto::setIban(string iban){
	this->iban=iban;
}
string Konto::getIban() const{
	return iban;
}
void Konto::setBic(string bic){
	this->bic=bic;
}
string Konto::getBic() const{
	return bic;
}
void Konto::setInstitut(string institut){
	this->institut=institut;
}
string Konto::getInstitut() const{
	return institut;
}
void Konto::setGeld(unsigned int geld){
	this->geld=geld;
}
unsigned int Konto::getGeld() const{
	return geld;
}

void Konto::printdata(){
	cout << " ***************************** " <<endl;
	cout << "Inhaber : " << getInhaber() << endl;
	cout << "IBAN : " << getIban() << endl;
	cout << "BIC : " << getBic() << endl;
	cout << "Institut : "<< getInstitut() << endl;
	cout << "Kontostand : "<< getGeld() << endl;
}