#pragma once
#include "fahrzeug.h"

class Pkw : Fahrzeug {
private:
int passagiere;
public:
	Pkw();
	Pkw(string, string, string, int, int, int, int);
	void setPassagiere(int);
	int getPassagiere();
	void info1();
};