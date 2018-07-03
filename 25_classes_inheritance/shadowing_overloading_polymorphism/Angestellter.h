#include <iostream>
#include<string>
#include "personal.h"
#ifndef ANGESTELLTER_H
#define NGESTELLTER_H
using namespace std;


class Angestellter : public Personal{
	unsigned int zulagen;

	
public:
	Angestellter(unsigned int zu = 0, string n = "", unsigned int pn = 0, unsigned int g = GG);
	void setZulagen(const unsigned int );
	unsigned int getZulagen() const;
	void print_Data();//

};
#endif // !ANGESTELLTER_H