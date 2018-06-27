#include "person.h"
#include "datum.h"
#include <iostream>
#include <time.h>	//für aktuelle Zeit

using namespace std;

Person::Person(){
	setVname("Max");
	setName("Mustermann");
	setJahr(1950);
	setPlz(12345);


}  //standard Konstruktor

Person::Person(string vname, string name, int jahr, int plz){  //Konstruktor
	setVname(vname);
	setName(name);
	setJahr(jahr);
	setPlz(plz);
}

Person::Person(string vname, string name, int plz, Datum d){  //Konstruktor
	setVname(vname);
	setName(name);
	setPlz(plz);
	setJahr(d.getJahr());
	setMonat(d.getMonat());
	setTag(d.getTag());
}

// *************************
// get Methoden

string Person::getVname(){
	return vname;
}
string Person::getName(){
	return name;
}
int Person::getJahr(){
	return jahr;
	}
int Person::getMonat(){
	return monat;
	}
int Person::getTag(){
	return tag;
	}
int Person::getPlz(){
	return plz;
}
// *************************
// set-Methoden

void Person::setVname(string vname){
	if (vname.length() <2){
		cout << "Vorname muss mindestens 2 Zeichen enthalten. " << endl;
		name = "Mustermann";
	}	
	this->vname = vname;	
}

void Person::setName(string name){
	this->name = name;
}

void Person::setJahr(int jahr){
	time_t timestamp;
	timestamp = time(0);
	tm *heute;		//tm ist structure in Klasse time
	heute = localtime(&timestamp);
	int aktuelleJahr = heute->tm_year + 1900;
	int aktuellerMonat = heute -> tm_mon+1;
	int aktuellerTag = heute -> tm_mday;
	//cout << aktuelleJahr << endl;
	//cout <<	aktuellerMonat << endl;
	//cout << aktuellerTag << endl;

	if (jahr < 1900 || jahr > aktuelleJahr){
		cout << "Ungültiges Geburtsjahr." << endl;
		jahr = 1950;
		}
	this-> jahr = jahr;
	}

void Person::setMonat(int monat){
	this->monat = monat;
}

void Person::setTag(int tag){
	this->tag = tag;
}

void Person::setPlz(int plz){
	if (plz < 1020 || plz > 99999){
	cout << "Ungültige PLZ " << endl;
	plz = 12345;
	}
	this->plz = plz;
}


int Person::getAlter(){
	time_t timestamp;
	timestamp = time(0);
	tm *heute;		//tm ist structure in Klasse time
	heute = localtime(&timestamp);
	int aktuelleJahr = heute->tm_year + 1900;
	int aktuellerMonat = heute -> tm_mon+1;
	int aktuellerTag = heute -> tm_mday;
	
	if(monat > aktuellerMonat || monat == aktuellerMonat && tag > aktuellerTag){
		return 2014-jahr-1;
		}
	return aktuelleJahr - jahr;
}

void Person::info(){
cout << getVname() << " " << getName() << " , PLZ " << getPlz() << " , Geburtsjahr " << getJahr() << endl;
	}