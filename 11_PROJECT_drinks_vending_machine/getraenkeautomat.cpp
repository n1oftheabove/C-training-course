//21st of May 2014
//ein kleiner getraenkeautomat

#include<iostream>
#include<cstdlib>
#include "Automat.h"
using namespace std;

int main(){
	int select=6;
	class Automat a1;
while(!(select==0)){
cout << " ***** GETRAENKE-AUTOMAT-MENUE ***** " << endl;
cout << "" <<endl;
cout << "[1] - Geld einwerfen" << endl;
cout << "[2] - Getraenk waehlen" << endl;
cout << "[3] - Bestand pruefen" << endl;
cout << "[4] - Getraenk entnehmen" << endl;
cout << "[5] - Restgeld entnehmen " << endl;
cout << "[0] - Programm beenden " << endl;
cin >> select;

	switch(select){
	case 1: a1.geld_input(); /*cout << "1" << endl;*/
		break;
	case 2: a1.getr_w();
		break;
	case 3: a1.pruefen(); /*cout << "3" << endl*/;
		break;
	case 4: a1.getr_ent(); /*cout << "4" << endl;*/
		break;
	case 5: a1.restgeld(); /*cout << "5" << endl;*/
		break;
	case 0: return 1;
		break;
	default: cout << "ungültige Eingabge" << endl;
		}
	}
return 0;
}
