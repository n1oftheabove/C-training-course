#pragma once
#include "Datum.h"
#include<iostream>
#include<string>
#define N 3
//und hier auch evtl. globale Variablen / Konstanten
//Medium kann zusätzlich einen Autor haben

class Medium{
protected:
	string titel;
	int kontingent;
	Datum vdatum;
	//
public:
	Medium();
	Medium(string, Datum, int);
	~Medium();
	void setTitel(string);
	string getTitel();
	//setKontingent sollte bei mediumausleihen() aufgerufen werden
	void setKontingent(int);
	int getKontingent();
	bool istvorraetig();
	void setVdatum(Datum);
	bool ausleihen();
	void zurueckg();
	string info();
	Datum getVdatum();

};