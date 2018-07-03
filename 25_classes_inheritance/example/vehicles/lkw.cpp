#include<string>
#include "lkw.h"
using namespace std;

Lkw::Lkw(){};
Lkw::Lkw(string kennzeichen, string hersteller, string modell, int leistung, int aktgeschw, int maxgeschw, int anzAnhaenger) : Fahrzeug(kennzeichen,hersteller,modell,leistung,aktgeschw,maxgeschw){
	setAnzAnhaenger(anzAnhaenger);
	}


void Lkw::setAnzAnhaenger(int anzAnhaenger){
	this -> anzAnhaenger=anzAnhaenger;
}

int Lkw::getAnzAnhaenger(){
	return anzAnhaenger;
}

void Lkw::info2(){
	cout << "Kennzeichen: " << kennzeichen << ", Hersteller: " << hersteller << ", Modell: " << modell << ", Leistung " << leistung << ", aktuelle Geschwindigkeit: " << aktgeschw << ", maximale Geschwindigkeit: " << maxgeschw << ", Anzahl der Anhänger: " << anzAnhaenger<< endl;
}