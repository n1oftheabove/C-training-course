#pragma once
#include<iostream>
#include<string>
//#include "Datum.h"
#include "Medium.h"
#include "Person.h"
#define N 3
//und hier auch evtl. globale Variablen / Konstanten

class Leser:public Person {
private:
	string id;
	int medien;
public:
	Leser();
	Leser(string, string, string, string, int, string, const int);
	~Leser();
	void setId(const string &);
	const string & getId() const;
	//medienausleihen:
		//1. überprüfen, ob Medium vorrätig
		//2. überprüfen, ob Leser noch medien ausleihen darf (verrfeinern: manche medien sind da, dürfen aber nicht ausgeliehen werden)
		//3. falls 1,2 true, dann medium eintragen in medium-Array des benutzers, dann true zurückgeben. Sonst return false
	bool medienausleihen(Medium);
	void setMedien(int);
	int getMedien();
	string info();
};