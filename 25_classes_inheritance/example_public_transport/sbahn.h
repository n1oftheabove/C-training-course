#include "verkehrsmittel.h"

class Sbahn : public Verkehrsmittel {

	private:
		string schaffner;
		int anzahlWagen;
		int anzahlSitzplaetzeProWaggon;
		
	public:
		Sbahn(int, string, string, string, string, int, int);
		string getSchaffner();
		int getAnzahlWagen();
		int getAnzahlSitzplaetzeProWaggon();
		void setSchaffner(string);
		void setAnzahlWagen(int);
		void setAnzahlSitzplaetzeProWaggon(int);
		
		void info();
		void print(ostream &os);

	};