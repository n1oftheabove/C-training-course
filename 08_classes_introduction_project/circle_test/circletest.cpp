#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include "Point.h"		//hier wird Klasse Point geholt
#include "Circle.h"		//hier wird Klasse Circle geholt

#define PI 3.14159265359; // globale Konstante definieren

using namespace std;

int main(){

	Circle c1;
	Point p1;	// Kreismittelpunkt
	Point p2; //Punkt, der überprüft werden soll
	p1.x_coor = 0;
	p1.y_coor = 0;
	p2.x_coor = 0;
	p2.y_coor = 0;
	c1.p = p1; // Wichtig! Zu c1 gehört ja noch .p!

	cout << "Geben Sie die x-Koordinate des Kreismittelpunktes an.\n" <<endl;
	if(!(cin >> p1.x_coor)){
		cout << "ungültige Eingabe" <<endl;
	};
	cout << "Geben Sie die y-Koordinate des Kreismittelpunktes an.\n" <<endl;
	if(!(cin >> p1.y_coor)){
		cout << "ungültige Eingabe" <<endl;
	};
	cout << "Geben Sie den Radius des Kreises an.\n" <<endl;
	if(!(cin>> c1.radius)){
		cout << "ungültige Eingabe" <<endl;
	};
	cout << "Geben Sie jetzt einen Punkt an! Ich werde überprüfen, ob dieser auf, in oder außerhalb des Kreises liegt.\n" <<endl;
	cout << "x-Koordinate des Punktes?" << endl;
	if(!(cin >> p2.x_coor)){
		cout << "ungültige Eingabe" <<endl;
	};
	cout << "y-Koordinate des Punktes?" << endl;
	if(!(cin >> p2.y_coor)){
		cout << "ungültige Eingabe" <<endl;
	};

	if(c1.isin(p2)) cout << "Punkt liegt innerhalb" << endl;
	else if(c1.isout(p2)) cout << "Punkt liegt ausserhalb" << endl;
	else cout << "Punkt liegt auf dem Kreis" << endl;
	system("PAUSE");
	
}
