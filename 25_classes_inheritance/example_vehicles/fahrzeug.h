#pragma once
#include<string>
#include<iostream>
using namespace std;

class Fahrzeug{
protected:	//damit vererbar, aber auch geschützt
	string kennzeichen;
	string hersteller;
	string modell;
	int leistung;
	int aktgeschw;
	int maxgeschw;
public:
	//Konstruktor (parametrisiert)
	Fahrzeug();
	Fahrzeug(string, string, string, int, int, int);
	void setKennzeichen(string);
	void setHersteller(string);
	void setModell(string);
	void setLeistung(int);
	void setAktgeschw(int);
	void setMaxgeschw(int);
	string getKennzeichen();
	string getHersteller();
	string getModell();
	int getLeistung();
	int getAktgeschw();
	int getMaxgeschw();
	void info();
};