#pragma once //anweisung an compiler: Includiere bitte nur, wenn sie noch inkludiert werden muss
#include "person.h"


class Angestellter : public Person{  //class Angestellter soll von Person erben

private:
	int ueberstunden;
	static const int GRUNDGEHALT = 2000;  //static:es gibt nur eine einzige Kopie für die ganze Klasse, const: kann nur gelesen werden

public:
	Angestellter();
	Angestellter(string, int);
	~Angestellter();
	int berechneGehalt();
	void setUeberstunden(int);
	int getUeberstunden();
};