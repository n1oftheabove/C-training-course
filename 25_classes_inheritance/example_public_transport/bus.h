#pragma once
#include "verkehrsmittel.h"

class Bus : public Verkehrsmittel { //Bus soll von Klasse Verkehrsmittel alle public member von Verkehrsmittel bekommen
	// wenn eine andere Klasse von Bus vererbt, dann wird weitervererbt (Polymorphie)

	private:
		int anzahlSitzplaetze;

	public:
		Bus(int, string, string, string, int);
		int getAnzahlSitzplaetze();
		void setAnzahlSitzplaetze(int);
		
		void info();
		void print(ostream &os);

	/*friend ostream& operator << (ostream&, const Bus&);*/
};