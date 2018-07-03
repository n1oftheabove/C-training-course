#include "rechteck.h"
#include <iostream>
#include <cmath>
using namespace std;

Rechteck::Rechteck(int a, int b){  //Konstruktor
	setA(a);
	this->setB(b);	//oder auch mit this
}

	void Rechteck::info(){
		cout << "Rechteck: a = " << a << ", b = " << b << endl;
	}

	int Rechteck::getA(){  //zum Einlesen
	return a;
	}

	void Rechteck::setA(int a){  //zum Schreiben
	if (a<0) a *=-1;
	this->a = a;
	}

int Rechteck::getB(){  //zum Einlesen
	return b;
	}

	void Rechteck::setB(int b){  //zum Schreiben
	if (b<0) b *=-1;
	this->b = b;		// this-> THIS zeigt an, dass es sich um die Objektvariable b dreht. -> weil referenz
	}

	int Rechteck::getUmfang(){
		return 2*(a+b);
	}

	int Rechteck::getFlaeche(){
		return a*b;
	}

	double Rechteck::getDiagonale(){
		return sqrt(a*a + b*b);
	}

	bool Rechteck::isQuadrat(){
		return a==b;
	}