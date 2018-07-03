#include "dreieck.h"
#include <iostream>
#include <cmath>
using namespace std;

Dreieck::Dreieck(int a, int b, int c){
	if (!isValid(a,b,c)){
		a = b = c = 1;
		}
	int max = getMax(a,b,c);		// er soll die längste Seite c nennen
		if(max == c){
			setA(a);
			setB(b);
			setC(c);
			}
			else if (max ==a){
			setA(c);
			setB(b);
			setC(a);
			}
			else
			setA(a);
			setB(c);
			setC(b);
		}
	
	
	setA(a);
	setB(b);
	setC(c);	//set - Methode, um gewünschte Überprüfungen dazwischen zu schalten. Kapselung macht Steuerung möglich. In Konstruktoren keine direkten Zuweisungen
	}

	int Dreieck::getA(){
		return a;
		}
	int Dreieck::getB(){
		return b;
		}
	int Dreieck::getC(){
		return c;
		}
	void Dreieck::setA(int a){if (a<0){a = -a}; this -> a = a;}
	void Dreieck::setB(int b){if (a<0){a = -a}; this -> b = b;}
	void Dreieck::setC(int c){if (a<0){a = -a}; this -> c = c;}
	void Dreieck::info(){ cout << "Dreieck: " << a << " , " << b << " , " << c << endl;}
	
	int Dreieck::getUmfang(){return a+b+c;}
	double Dreieck::getFlaeche(){
		return (c/2) * sqrt(2*(a*a*b*b+b*b*c*c+c*c*a*a) - (pow((double)a,4)+pow((double)b,4)+pow((double)c,4))) / (2*(double)c);
	}
	double Dreieck::getHoehe(){
		return sqrt(2*(a*a*b*b+b*b*c*c+c*c*a*a) - (pow(a,4)+pow(b,4)+pow(c,4))) / (2*c);
				}
	bool Dreieck::isRect(){
		return (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b);
		}

	bool Dreieck::isValid(int a, int b, int c){  //mit lokalen variablen, da private Methode!
		//return a + b >= c &&  a + c >=b && b+c >=a ; // alternative Methode
		int array[3] = {a,b,c};
		int max = 0;
		int i=0;
			while(i<3){
				if(array[i]>max)
				max=array[i];
				i++;
				}
		return max < a + b + c - max;	// wenn die größte Seite kleiner ist als die Summe der beiden übrigen, dann ist es ein Dreieck, dann soll true zurückkommen
		}