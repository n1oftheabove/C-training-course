#include "bruch.h"
#include <iostream>
#include <cmath>
using namespace std;

//Standard-Konstruktor
Bruch::Bruch(){
	setA(1);
	setB(1);
	cout << "Keine Zaehler / Nenner vorhanden" << endl;
}

// Konstruktor
Bruch::Bruch(int a, int b){
		if(b==0){
			cout << "Der Nenner darf nicht null sein! " << endl;
				b=1;
				}
		else{ //vor dem setten gleich kürzen
				int temp = min(a,b);
					for(int i = temp; i > 0; i--){
						if(a%i==0 && b%i==0){
							a = a/i;
							b = b/i;}
						}
					}
			setA(a);
			setB(b);
			}



Bruch Bruch::multiplizieren(Bruch b1){
	Bruch result(getA() * b1.getA(), getB() * b1.getB());
	return result;
}
Bruch Bruch::dividieren(Bruch b1){
	Bruch result(getA() * b1.getB(), getB() * b1.getA());
	return result;
}

Bruch Bruch::addieren(Bruch b1){
	Bruch result(getB() * b1.getA() + getA() * b1.getB(), getB()*b1.getB());
	return result;
}

Bruch Bruch::subtrahieren(Bruch b1){
	Bruch result(getA() * b1.getB()-getB() * b1.getA(), getB()*b1.getB());
	return result;
}

void Bruch::setA(int a){this -> a = a;}
void Bruch::setB(int b){this -> b = b;}
int Bruch::getA(){return a;}
int Bruch::getB(){return b;}


void Bruch::info(){
	if(a<b){cout<< "Bruch: " << a << " / " << b << endl;}
	else if(a>b){
		if(a%b==0){ cout << "Bruch " << a/b << " / " << b << endl;}
			 else cout << "Bruch: " << a/b << "  " << a%b << " / " << b << endl;
		}
	else cout << "Bruch: 1" << endl;
}

Bruch Bruch::operator*(Bruch &c){
 return this->multiplizieren(c);
}

ostream &operator << (ostream &out, const Bruch &c){
	
	if(c.a<c.b){cout<< "Bruch: " << c.a << " / " << c.b << endl;}
	else if(c.a>c.b){
		if(c.a%c.b==0){ cout << "Bruch " << c.a/c.b << " / " << c.b << endl;}
			 else cout << "Bruch: " << c.a/c.b << "  " << c.a%c.b << " / " << c.b << endl;
		}
	else cout << "Bruch: 1" << endl;
	return out;
}