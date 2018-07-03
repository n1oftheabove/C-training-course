#include "verkehrsmittel.h"
#include <string>


Verkehrsmittel::Verkehrsmittel(int linie, string fahrer, string start, string ziel){
	setLinie(linie);
	setFahrer(fahrer);
	setStart(start);
	setZiel(ziel);
}

int Verkehrsmittel::getLinie(){
	return linie;
}

string Verkehrsmittel::getFahrer(){
	return fahrer;
}

string Verkehrsmittel::getStart(){
	return start;
}

string Verkehrsmittel::getZiel(){
return ziel;
}

void Verkehrsmittel::setLinie(int linie){
	this-> linie = linie;
}

void Verkehrsmittel::setFahrer(string fahrer){
	this-> fahrer = fahrer;
}

void Verkehrsmittel::setStart(string start){
	this-> start = start;
}


void Verkehrsmittel::setZiel(string ziel){
	this-> ziel = ziel;
}

void Verkehrsmittel::info(){
	cout << "Linie " << linie << ", Fahrer: " << fahrer << ", Start: " << start << ", Ziel: " << ziel << endl;
}

// Bit-Shift Operator ist Überladen
// bit shift operator kann von Haus aus nicht mit Datentyp "Verkehrsmittel" umgehen
ostream &operator << (ostream &out, Verkehrsmittel *v){
	v->print(out);
	return out;
}

void Verkehrsmittel::print(ostream &os){
	os << "Linie " << linie << ", Fahrer: " << fahrer << ", Start: " << start << ", Ziel: " << ziel << endl;
}

bool Verkehrsmittel::operator<(Verkehrsmittel &b){
	return b.linie < this->linie;
}

bool Verkehrsmittel::operator<=(Verkehrsmittel &b){
	return b.linie <= this->linie;
}

bool Verkehrsmittel::operator>(Verkehrsmittel &b){
	return b.linie > this->linie;
}

bool Verkehrsmittel::operator>=(Verkehrsmittel &b){
	return b.linie >= this->linie;
}

bool Verkehrsmittel::operator!=(Verkehrsmittel &b){
	return b.linie != this->linie;
}

bool Verkehrsmittel::operator==(Verkehrsmittel &b){
	return b.linie == this->linie;
}