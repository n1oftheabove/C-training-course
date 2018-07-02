#include <iostream>
#include <cstdlib>
using namespace std;

class Automat{
private:
	int geld;
	double preis;
	double rest;
public:
	//Methoden
	void geld_input(){
		int select=1;
		geld = 0;
		while(!(select == 0)){
		cout << "Bitte werfen Sie Geld ein, [1] 1 Euro, [2] 2 Euro, [0] fertig und zurueck zum MENUE" << endl;
			cin >> select;
			switch(select){
				case 1: geld += select;
					break;
				case 2: geld += select;
					break;
				case 0: return;		//return springt aus einer void Methode raus
					break; 
				default: cout << "Muenze wird nicht akzeptiert" << endl;
				}
			}
		cout << "Sie haben insgesamt " << geld  << " Euro eingeworfen"<< endl;
		};

	void getr_w(){
		char select;
		cout << "[t] - Tee (90 cent)" << endl;
		cout << "[k] - Kaffee (1.20 €)" << endl;
		cout << "[c] - Cappuccino (2.40 €)" << endl;
		cout << "[0] - Zurueck zum MENUE"<<endl;
		cin >> select;
		switch(select){
			case 't': preis = 0.9;
				break; 
			case 'k': preis = 1.2;
				break;
			case 'c': preis = 2.4;
				break;
			case '0': return; break;
			default: cout << "Ungueltige Eingabe" << endl;
			}
		};

	void pruefen(){
		int preisint = int(preis);
		switch(preisint){
		case 0: cout << "Sie haben Tee gewaehlt" << endl;
			break;
		case 1: cout << "Sie haben Kaffee gewählt" << endl;
			break;
		case 2: cout << "Sie haben Cappuccino gewaehlt"<<endl;
			break;
		default: cout << "Sie haben bisher keine gueltige Getraenkewahl getroffen" << endl;
		}
		cout << "Sie haben   -   " << geld << "Euro   -   eingeworfen" <<endl;
		system("pause");
		return;
	};

	void getr_ent(){
		int preisint = int(preis);
		rest = 0;
		if (geld>=preis){
			switch(preisint){
				case 0: cout << "Ihr Tee wird zubereitet...." << endl;
					rest = geld - preis;
					break;
				case 1: cout << "Ihr Kaffee wird zubereitet....." << endl;
					rest = geld - preis;
					break;
				case 2: cout << "Ihr Cappuccino wird zubereitet...."<<endl;
					rest = geld - preis;
					break;
				default: cout << "Sie haben bisher keine gueltige Getraenkewahl getroffen" << endl;
				}
			}
		else cout << "Sie haben noch nicht genug Geld eingeworfen" <<endl;
		system("pause");
		return;
		};

	void restgeld(){
		if (rest > 0){
			cout << "Hier ist ihr Restgeld:" << endl;
			cout << rest << " Euro"<<endl;
			}
		else cout << "Kein Restgeld vorhanden" <<endl;
		system("pause");
		return;
		};
};