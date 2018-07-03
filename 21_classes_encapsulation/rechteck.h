//Bei Microsoft Coding: Klassennamen mit Großbuchstaben

//Methoden hier nur ganz abstrakt definieren ohne Rumpf

class Rechteck{
	//Objektvariablen
	private:
		int a, b;
	public:
		Rechteck(int, int);	//Konstruktor
		int getA();		//get Methode haben die gleichen Rückgabewerte wie die ObjektVariable
		int getB();		//wir programmieren hier nur Methoden! Wie der Nutzer dann einliest (cin, Datenbank, etc.) ist uns egal
		void setA(int);
		void setB(int);
	
	int getUmfang();
	int getFlaeche();
	double getDiagonale();
	bool isQuadrat();
	
	void info();

};