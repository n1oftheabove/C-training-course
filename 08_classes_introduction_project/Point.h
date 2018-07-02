//Konstruktoren und Destruktoren
//Headerdateien und Quelldateien

// Was macht man in den Headerdateien?
	//KLASSEN DEKLARIEREN
// Was macht man in den Quelldateien
	//KLASSEN DEFINIEREN oder IMPLEMENTIEREN (die Logik der Klassen)

class Point{
private:
	double x;
	double y;
	//Methodendeklaration
public:
	Point(double px, double py){   //KONSTRUKTOR: Methode ohne Rückgabewert (obwohl nicht void davor steht),
									// muss gleich benannt sein wie Klasse
			x=px; y=py;
	}
	Point(double px){
	x = px;
	y = 0.0;
	}
	
	void out();
	void eingabe();
};