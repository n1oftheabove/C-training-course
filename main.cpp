#include "rechteck.h"
#include <iostream>
#include<cstdlib>

using namespace std;


int main(){
	Rechteck r(-3,-4);
	r.info();	// Info nach dem Muster "Rechteck: a=3, b=4"
	r.setA(7);
	cout << "a = " << r.getA() << endl;		//auf r.a oder r.b keinen Zugriff, da a, b private, ENCAPSULATION
	r.setB(7);
	cout << "b = " << r.getB() << endl;		//auf r.a oder r.b keinen Zugriff, da a, b private, ENCAPSULATION
	
	int umfang = r.getUmfang();
	cout << "Umfang = " << umfang << endl;
	int flaeche = r.getFlaeche();
	cout << "Fläche = " << flaeche << endl;
	double diagonale = r.getDiagonale();
	cout << "Diagonale = " << diagonale << endl;
	if (r.isQuadrat()){cout << "Ihr Rechteckt ist ein Quadrat"<<endl;}
	else cout << "Ihr Rechteck ist kein Quadrat" << endl;
	
	

	system("pause");
}