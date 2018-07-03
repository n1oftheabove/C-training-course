#pragma once //anweisung an compiler: Includiere bitte nur, wenn sie noch inkludiert werden muss
#include "person.h"


class LeitenderAngestellter : public Person{  //class LAngestellter soll von Person erben

private:
	int bonus;
	static const int GRUNDGEHALT = 3000;  //static:es gibt nur eine einzige Kopie für die ganze Klasse, const: kann nur gelesen werden

public:
	LeitenderAngestellter();
	LeitenderAngestellter(string, int);
	~LeitenderAngestellter();
	int berechneGehalt();
	void setBonus(int);
	int getBonus();
};