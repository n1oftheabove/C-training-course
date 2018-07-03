#pragma once
#include "strom.h"
#include <iostream>
#include <string>
using namespace std;

class Atomkraft : public Strom {
private:
	unsigned int Co2KWh;
	float ct4KWh;
public:
	Atomkraft(unsigned int co2=0, float ct=0.0, string q="", unsigned int k=0) : Strom(q,k), Co2KWh(co2), ct4KWh(ct) {}
	unsigned int getCo2KWh() const {return Co2KWh;}
	float getCt4KWh() const {return ct4KWh;}
	void setCo2KWh(unsigned int co){
		Co2KWh = co;
		}
	void setCt4KWh(float ct){
		ct4KWh = ct;
		}
	void print() const {
		cout << "Co2 pro KWh : " << getCo2KWh() << endl;
		cout << "Cent pro KWh : " << getCt4KWh() << endl;
	Strom::print();
	}
};