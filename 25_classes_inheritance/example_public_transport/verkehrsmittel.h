#pragma once
#include<string>
#include<iostream>
using namespace std;

class Verkehrsmittel{

private:
	int linie;
	string fahrer;
	string start;
	string ziel;
public:
	Verkehrsmittel(int, string, string, string);
	int getLinie();
	string getFahrer();
	string getStart();
	string getZiel();
	
	void setLinie(int);
	void setFahrer(string);
	void setStart(string);
	void setZiel(string);

	virtual void info(); //zur Laufzeit wird geschaut, welches Objekt ist das. Danach wird geschaut, welche info() genommen wird. In dem Fall ist es die Methode von bus.h
	virtual void print(ostream&);
	
	friend ostream& operator << (ostream&, Verkehrsmittel*);
	// friend ostream kommt nicht aus unserer Klasse, da wir ihn mit cout aufrufen, deswegen müssen wir ihn als Freund deklarieren
	// hier wird deklariert, was der Operator machen soll

	//vergleichsoperatoren so überladen, dass man verkehrsmittel untereinander vergleichen kann
	
	bool operator < (Verkehrsmittel&);
	bool operator <= (Verkehrsmittel&);
	bool operator >(Verkehrsmittel&);
	bool operator >=(Verkehrsmittel&);
	bool operator !=(Verkehrsmittel&);
	bool operator ==(Verkehrsmittel&);

	

};