#include "Person.h"
#include<iostream>
#include <string>
using namespace std;

string Person::info(){
return getName() + ", "+ getVorname()+ ", " + getStrasse()+ ", "  + getOrt() +", "+ to_string(getPlz());
}

Person::Person(){
setName("Max");
setVorname("Mustermann");
setStrasse("Musterstrasse");
setOrt("Berlin");
setPlz(99999);
}
Person::Person(string name, string vname, string strasse, string ort, int plz){
//Person::Person(string vorname, string name, string strasse, string ort, int plz)vorname(vorname),name(name),...{
setVorname(name);
setName(vname);
setStrasse(strasse);
setOrt(ort);
setPlz(plz);
}
Person::~Person(){
}
//Die Argumente von setters dürften auch als Konstante definiert werden
	void Person::setName(const string &name){
this->name = name;
}
	void Person::setVorname(const string &vorname){
this->vorname=vorname;
}
	void Person::setStrasse(const string &strasse){
this->strasse=strasse;
}
	void Person::setOrt(const string &ort){
this->ort=ort;
}
	void Person::setPlz(const int &plz){
this->plz=plz;
}
//Getters verändern keinen Attribut, könnten als const defert werden 
const string & Person::getName() const {
return name;
}
const string & Person::getVorname() const {
return vorname;
}
const string & Person::getStrasse() const{
return strasse;
}
	const string & Person::getOrt() const {
return ort;
}
	const int & Person::getPlz() const {
return plz;
}
