#include "datum.h"
#include <iostream>
#include <time.h>	//für aktuelle Zeit

using namespace std;

//Standard Konstruktor
Datum::Datum(){
	setTag(1);
	setMonat(1);
	setJahr(2014);
}

//custom-Konstruktoren
Datum::Datum(int tag, int monat, int jahr){
setTag(tag);
setMonat(monat);
setJahr(jahr);
}

// SETTER
void Datum::setTag(int tag){
	this->tag=tag;
	}
void Datum::setMonat(int monat){
	this->monat=monat;
	}
void Datum::setJahr(int jahr){
	this->jahr=jahr;
	}
// GETTER
int Datum::getTag(){
return tag;
}
int Datum::getMonat(){
return monat;
}
int Datum::getJahr(){
return jahr;
}

// Methoden

bool Datum::isValid(Datum d){
int daynum = 0;

switch(d.monat){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		daynum = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		daynum = 30;
	break;
	case 2:
		if (isSJ(jahr)){
			daynum = 29;}
			else {
			daynum = 28;}
		break;
	default: daynum = 0;
	}
return tag <= daynum;

//alternativ
//int anzahlTage[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//if(isSJ(jahr)){
//	anzahlTage[1]+1;
//	}
}

bool Datum::isSJ(int jahr){ //eigentlich, wenn return in der if, dann kein else mehr
	/*bool leap;
	if(jahr%4 == 0){
			if(jahr%100 == 0){
				if (jahr%400 == 0){
						leap = true;
					} else {leap = false;}
			} else {leap = true;}
		} else {leap = false;}
	return leap;*/

if (jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400==0 ){
	return true;
	}
return false;

// Noch kürzer
// return jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400;

// jahr % 400 ans Ende setzen, weil das am unwahrscheinlichsten ist -> performanter!
// A && B, B wird nicht mehr evaluiert wenn A false ist -> && is performanter. && und || heißen Kurzschlussoperatoren
// & und | sind die einfacheren Operatoren
}



void Datum::info(){
	if(tag <10){
	cout << " Sie sind am 0" << tag;}
	else { cout << " Sie sind am " << tag;}
	
	if(monat <10){
	cout << ".0" << monat;}
	else { cout << "." << tag;}
	
	cout << jahr<< " geboren " << endl;
}