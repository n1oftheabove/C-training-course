#include "Datum.h"
#include<string>
#include<iostream>
using namespace std;

Datum::Datum(){
	setTag(1);
	setMonat(1);
	setJahr(2000);
}
Datum::Datum(int tag, int monat, int jahr){
	setTag(tag);
	setMonat(monat);
	setJahr(jahr);
}
Datum::~Datum(){}
int Datum::getTag() {
	return tag;
}
int Datum::getMonat() {
	return monat;
}
int Datum::getJahr(){
	return jahr;
}
void Datum::setTag(int tag){
	this-> tag = tag;
}
void Datum::setMonat(int monat){
	this-> monat = monat;
}
void Datum::setJahr(int jahr){
	this -> jahr = jahr;
}

string Datum::info(){
	return "Tag: " + to_string(getTag()) + ", Monat : " + to_string(getMonat()) + ", Jahr : " + to_string(getJahr());
}