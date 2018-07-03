#pragma once
#include<iostream>
#include<string>
using namespace std;

class Konto{
protected:
	string inhaber;
	string iban;
	string bic;
	string institut;
	unsigned int geld;
public:
	Konto();
	Konto(string, string, string, string,unsigned int);
	
	void setInhaber(string);
	string getInhaber() const;// Methode "ist const", d.h. sie darf Attribute nicht überschreiben!
	//void setIban(const string); //Methode würde einen nicht-modifizierbaren string benutzen
	// void addiere(const int &a, const int &b, int &c) const
	void setIban(string);
	string getIban() const;
	void setBic(string);
	string getBic() const;
	void setInstitut(string);
	string getInstitut() const;
	void setGeld(unsigned int);
	unsigned int getGeld() const;

	void printdata();

};