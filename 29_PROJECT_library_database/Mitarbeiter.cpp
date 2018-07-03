#pragma once
#include "Mitarbeiter.h"
#include <iostream>
#include <string>
using namespace std;

Mitarbeiter::Mitarbeiter():Person(){
setId("AAA");
}


Mitarbeiter::Mitarbeiter(string name, string vname, string strasse, string ort, int plz, string id):Person(name, vname, strasse, ort, plz){
setId(id);
}

Mitarbeiter::~Mitarbeiter(){

}
void Mitarbeiter::setId(string id){
	this->id = id;
}
string Mitarbeiter::getId(){
	return id;
}

string Mitarbeiter::info(){
return Person::info() + ", Mitarbeiter-ID: "+ getId();
}