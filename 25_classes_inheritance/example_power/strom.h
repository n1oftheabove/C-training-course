#pragma once
#include<iostream>
#include<string>
using namespace std;

class Strom {
private:	
	string quelle;
	unsigned int KWh;

public:
	Strom():quelle(""),KWh(0){}	//Standardkonstruktor mit direkter Ininitialisierung
	Strom(string q, unsigned k):quelle(q), KWh(k){}
	void setQuelle(const string &q){
		quelle = q;
	}
	void setKWh(unsigned int k){
		KWh = k;	
	}
	string getQuelle() const {
		return quelle;
	}
	unsigned int getKWh() const {
		return KWh;
	}
	void print() const {
		cout << "Stromquelle : " << getQuelle() << endl;
		cout << "KWh : " << getKWh() << endl;
	}
};