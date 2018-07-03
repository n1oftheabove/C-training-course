#include "fahrzeug.h"
#include<string>


Fahrzeug::Fahrzeug(){}

Fahrzeug::Fahrzeug(string kennzeichen, string hersteller, string modell, int leistung, int aktgeschw, int maxgeschw){
	setKennzeichen(kennzeichen);
	setHersteller(hersteller);
	setModell(modell);
	setLeistung(leistung);
	setAktgeschw(aktgeschw);
	setMaxgeschw(maxgeschw);
}

void Fahrzeug::setKennzeichen(string kennzeichen){
	this->kennzeichen=kennzeichen;

}
	void Fahrzeug::setHersteller(string hersteller){
		this->hersteller=hersteller;
}
	void Fahrzeug::setModell(string modell){
		this->modell=modell;
}
	void Fahrzeug::setLeistung(int leistung){
		this->leistung=leistung;
}
	void Fahrzeug::setAktgeschw(int aktgeschw){
		this->aktgeschw=aktgeschw;
}
	void Fahrzeug::setMaxgeschw(int maxgeschw){
		this->maxgeschw=maxgeschw;
}
string Fahrzeug::getKennzeichen(){
	return kennzeichen;
}
string Fahrzeug::getHersteller(){
	return hersteller;
}
string Fahrzeug::getModell(){
	return modell;
}
int Fahrzeug::getLeistung(){
	return leistung;
}
int Fahrzeug::getAktgeschw(){
	return aktgeschw;
}
int Fahrzeug::getMaxgeschw(){
	return maxgeschw;
}
void Fahrzeug::info(){
cout << "Kennzeichen: " << kennzeichen << ", Hersteller: " << hersteller << ", Modell: " << modell << ", Leistung " << leistung << ", aktuelle Geschwindigkeit: " << aktgeschw << ", maximale Geschwindigkeit: " << maxgeschw << endl;
}