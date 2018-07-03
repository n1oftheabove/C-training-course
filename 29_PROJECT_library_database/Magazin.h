#pragma once
#include "Medium.h"
#include<string>
#include<iostream>

class Magazin:public Medium{
private:
	int ausgabe;
public:
	Magazin(string, Datum, int, int);
	Magazin();
	~Magazin();
	void setAusgabe(int);
	int getAusgabe();
	string info();

};