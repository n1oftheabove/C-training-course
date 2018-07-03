#include "bib.h"
#include "Leser.h"

using namespace std;

Leser::Leser():Person(){
setId("A");
setMedien(0);

//medien[0] = Medium();
//medien[1] = Medium();
//medien[2] = Medium();
}

Leser::Leser(string name, string vorname, string strasse, string ort, int plz, string id, int medien):Person(
	name,vorname,strasse, ort,plz),id(id),medien(medien){ //elementinitialisierer

}

Leser::~Leser(){
}

void Leser::setId(const string &){
this->id = id;
}
const string & Leser::getId() const {
return id;
}

bool Leser::medienausleihen(Medium medium){
	if(getMedien() < N){ //darf Leser noch ausleihen?
	medium.ausleihen();
	return true;
} else
return false;}

void Leser::setMedien(int medien){
	this->medien = medien;
}

int Leser::getMedien(){
	return medien;
}

string Leser::info(){
	return Person::info() +", ID: " + getId() + ", ausgeliehene Medien : " + to_string(getMedien());
}

//bool Leser::medienausleihen(Medium){
