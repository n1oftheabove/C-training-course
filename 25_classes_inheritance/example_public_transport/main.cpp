#include <iostream>
#include "verkehrsmittel.h"
#include "bus.h"
#include "sbahn.h"

using namespace std;

int main(){
	Verkehrsmittel *v1 = new Verkehrsmittel(75, "Meier", "Spandau", "Wartenberg");
	Bus *v3 = new Bus(455, "Abel", "Essen Hbf", "Essen Betriebshof", 88);	
	Verkehrsmittel *v2 = new Sbahn(77, "Schmidt", "Zehlendorf", "Marzahn", "Schulz", 4, 240);
	Bus *v4 = new Bus(455, "Abel", "Essen Hbf", "Essen Betriebshof", 88);
	
	v1->info();
	v2->info();
	v3->info();

	//schoen wäre jetzt cout << *v << endl;
	// -> Überladung
	cout << v1 << endl;
	cout << v2 << endl;
	cout << v3 << endl;
	//cout << *v << endl;

	bool b = v1 < v2;
cout << "v1 < v2: " << b << endl;

	b = (v1 > v2);
	cout << "v1 > v2: " << b << endl;

	b = (v3 == v4);
	cout << "v3 == v4: " << b << endl;


	system("pause");
}