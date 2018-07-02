//1405_homework

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#define PI 3.14159265359; // define global constant

using namespace std;

class Point{
public:
	double x_coor;
	double y_coor;
	void output(){
		cout<<"x-coordinate: "<< x_coor <<endl;
		cout<<"y-coordinate: "<< y_coor <<endl;
		}
	double distance(Point p){
		return sqrt(pow((x_coor - p.x_coor),2) + pow((y_coor - p.y_coor),2));
		}
};

class Circle{
public:
	double radius;
	Point p;
	void output(){
		cout<<"radius: "<< radius << endl;
		cout<<"center: "<< p.x_coor << "(X), " << p.y_coor << "(Y)"<<endl;
		}
	double area(){
		return pow(radius,2) * PI;		//be aware: with * directly before  variable is interpreted as pointer
		}
	double circumstance(){
		return radius * 2 * PI;
		}
	bool isin(Point q){
		bool r = false;
		if(p.distance(q)<radius) r=true; 
		return r;
		}
	bool isout(Point q){
		bool r = false;
		if(p.distance(q)>radius) r=true;
		return r;
	}
	bool isrand(Point q){
		bool r = false;
		if(p.distance(q)==radius) r=true;
		return r;
	}
};

int whereispoint(double x1, double y1, double x2,double y2, double rc);

//class Team{
//public:
//	int rückennummer;
//	char vorname;
//	char name;
//	char position;
//	int alter;
//	int einsätze;
//	int tore;
//	void output(){
//		cout<< "Rückennummer: " <<rückennummer<<endl;
//		cout<< "Vorname: " <<vorname<<endl;
//		cout<< "Name: " <<name<<endl;
//		cout<< "Position: " <<position<<endl;
//		cout<< "Alter: " <<alter<<endl;
//		cout<< "Einsätze: " <<einsätze<<endl;
//		cout<< "Tore: " <<tore<<endl;
//	}
//};

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

//switch (whereispoint(p1.x_coor, p1.y_coor, p2.x_coor, p2.y_coor, c1.radius)){
	if(c1.isin(p2)) cout << "Punkt liegt ausserhalb" << endl;
	else if(c1.isout(p2)) cout << "Punkt liegt innerhalb" << endl;
	else cout << "Punkt liegt auf dem Kreis" << endl;
	
	}

/*
//switch case(){
//}
//cout

p1.output();
//c1.output();
c1.area();
c1.circumstance();

system("PAUSE");
return 0;

}

int whereispoint(double x1, double y1, double x2,double y2, double rc){
	double diff = rc - sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
	if(diff < 0){
		return -1;}
	else if(diff > 0){
		return 1;}
	else{return 0;}
}*/
