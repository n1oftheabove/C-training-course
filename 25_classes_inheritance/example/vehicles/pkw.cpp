#include "pkw.h"
#include<string>
using namespace std;

Pkw::Pkw(){}

Pkw::Pkw(string kennzeichen, string hersteller, string modell, int leistung, int aktgeschw, int maxgeschw, int passagiere):Fahrzeug(kennzeichen,hersteller,modell,leistung,aktgeschw,maxgeschw){
	setPassagiere(passagiere);
}

void Pkw::setPassagiere(int passagiere){
	this->passagiere=passagiere;
}

int Pkw::getPassagiere(){
	return passagiere;
}


void Pkw::info1(){
cout << "Kennzeichen: " << kennzeichen << ", Hersteller: " << hersteller << ", Modell: " << modell << ", Leistung " << leistung << ", aktuelle Geschwindigkeit: " << aktgeschw << ", maximale Geschwindigkeit: " << maxgeschw << ", Passagiere: " << passagiere<< endl;
}