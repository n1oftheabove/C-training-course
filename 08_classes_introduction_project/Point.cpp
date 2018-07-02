//Konstruktoren und Destruktoren
//Headerdateien und Quelldateien

// Was macht man in den Headerdateien?
	//KLASSEN DEKLARIEREN
// Was macht man in den Quelldateien
	//KLASSEN DEFINIEREN oder IMPLEMENTIEREN (die Logik der Klassen)

//*******************************************
// in der .cpp-Datei werden die Logiken geschrieben

#include "Point.h" //hier werden die Schablonen geholt
#include <iostream>
using namespace std;

void Point::out(){
	cout<<Point::x <<Point::y<< endl;
}
void Point::eingabe(){
	cout << "x eingeben" <<endl;
	cin >> Point::x;
	cout << "y eingeben" <<endl;
	cin>> Point::y;
}

int main(){
	class Point p(12.0,14.0);
	//p.eingabe();
	p.out();

	class Point q(123.0);
		q.out();
	system("PAUSE");
}