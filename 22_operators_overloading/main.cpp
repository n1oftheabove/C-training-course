#include <iostream>
#include "bruch.h"
#include <cstdlib>
using namespace std;

int main(){
	Bruch b1;
	b1.info();	// 1/1
	
	Bruch b2(3,4);
	b2.info();	// 3/4
	
	Bruch b3(4,7);
	b3.info();	// 4/7

	//Bruch b4 = b2.multiplizieren(b3);
	Bruch b4 = b2 * b3;		//Operator * muss überladen werden
	b4.info();	//12/28 nach Kürzen 3/7

	Bruch b5= b2.dividieren(b3);
	b5.info();	//21/16 = 1 
	
	Bruch b6 = b2.addieren(b3);
	b6.info();	//37 /21

	Bruch b7 = b2.subtrahieren(b3);
	b7.info();	// 5/21

	Bruch b8(48, 16);
	b8.info();

	system("pause");

	//	Kürzen implementieren! am besten gleich, wenn Bruch gebildet wird, kürzen
	// Nenner darf nicht null sein, beim Setter drauf achten!
	// 5/3 soll zu 1/2/3 werden


}