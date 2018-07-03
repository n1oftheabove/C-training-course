#include "bus.h"

Bus::Bus(int linie, string fahrer, string start, string ziel, int anzahlSitzplaetze) : Verkehrsmittel(linie,fahrer,start,ziel){
	//Konstruktor ruft standard konstruktor der übergeordneten Klasse auf
	setAnzahlSitzplaetze(anzahlSitzplaetze);	
}
			
		void Bus::setAnzahlSitzplaetze(int anzahlSitzplaetze){
			if (anzahlSitzplaetze < 8){
				anzahlSitzplaetze = 8;
				}
			this -> anzahlSitzplaetze = anzahlSitzplaetze;
		}
		
		int Bus::getAnzahlSitzplaetze(){
			return anzahlSitzplaetze;
		}

	void Bus::info(){
			//Aufruf der Methode der Basisklasse
			Verkehrsmittel::info();
			cout << "Anzahl Sitzplaetze: " << anzahlSitzplaetze << endl;
	}

/*	ostream& operator<<(ostream& out, const Bus& b){
		out<< "Linie" << b.getLinie() << "fahrer" << b.getFahrer() << "start " << b.getStart() << "ziel" << b.getZiel << "Anzazhl SP " << b.anzahlSitzplaetze << endl; 
		return out;
		}
*/

void Bus::print(ostream &os){
	os << "Linie " << getLinie() << ", Fahrer: " << getFahrer() << ", Start: " << getStart() << ", Ziel: " << getZiel() << endl << ", Anzahl der Sitzplaetze: "<< anzahlSitzplaetze << endl;
}