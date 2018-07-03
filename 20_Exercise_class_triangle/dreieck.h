
class Dreieck{
	private:
		int a,b,c;
		double hoehe;
		bool isValid(); // der Anwender soll die Funktion nicht aufrufen dürfen
		int getMax(int, int, int);
	public:
	Dreieck(int , int , int );		//Konstruktor
	int getA();
	int getB();
	int getC();
	void setA(int );
	void setB(int );
	void setC(int );
	void info();
	
	int getUmfang();
	double getFlaeche();
	double getHoehe();
	bool isRect();
	bool isValid(int, int, int);
		
};