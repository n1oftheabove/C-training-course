#include "dreieck.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	Dreieck d(2,6,1);		//Rechtwinkling bei z.b. 4,3,5
	d.info();
		
	if(d.isValid()){cout << "Ihr Dreieck ist gültig!" << endl;}
	else cout << "Ihr Dreieck it ungültig!" << endl;		
	cout << "Seite A :" << d.getA() << endl;
	cout << "Umfang: " << d.getUmfang() <<endl;
	cout << "Fläche: " << d.getFlaeche() << endl;
	cout << "Hoehe: " << d.getHoehe() << endl;
	if(d.isRect()){ cout << "Ihr Dreieck ist ein rechtwinkliges " << endl;}
	else cout << "Ihr Dreieck ist nicht rechtwinklig" << endl;

system("pause");
}