#include "Datum.h"
#include "Magazin.h"
#include <iostream>
using namespace std;

Magazin::Magazin(string titel, Datum datum, int kontingent, int ausgabe):Medium(titel, datum, kontingent){
	setAusgabe(ausgabe);
}

Magazin::Magazin(){
}

Magazin::~Magazin(){
}

void Magazin::setAusgabe(int ausgabe){
	this-> ausgabe = ausgabe;
}

int Magazin::getAusgabe(){
	return ausgabe;
}

string Magazin::info(){
return Medium::info() + ", Ausgabe: " + to_string(getAusgabe());
}