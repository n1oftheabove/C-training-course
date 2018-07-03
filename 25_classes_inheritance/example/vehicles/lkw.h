#pragma once
#include "fahrzeug.h"

//class Lkw : protected Fahrzeug { //class kind : accessmodifier vater (AM: public, private oder protected)
									//accessmodifier bestimmt, welche Zugriffskontrolle die members dann in der KIND-Klasse
									// haben
									//+public, -private, #protected
									//private werden NIE weiter gereicht

class Lkw : Fahrzeug {

private:
int anzAnhaenger;
public:
	Lkw();
	Lkw(string, string, string, int, int, int, int);
	void setAnzAnhaenger(int);
	int getAnzAnhaenger();
	void info2();
};