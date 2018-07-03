#include<iostream>
using namespace std;

class Bruch{
private:
	int a, b;
public:
	Bruch();		//hier wird standard Konstruktor initialisiert
	Bruch(int, int);	//hier custom konstruktor
	int getA();
	int getB();
	void setA(int );
	void setB(int );
	void info();

	Bruch multiplizieren(Bruch);
	Bruch dividieren(Bruch);
	Bruch addieren(Bruch);
	Bruch subtrahieren(Bruch);
	
	//Überladene Operatoren
	Bruch operator*(Bruch&);
	Bruch operator/(Bruch&);
	Bruch operator+(Bruch&);
	Bruch operator-(Bruch&);
	
	friend ostream& operator << (ostream&, const Bruch&);

};