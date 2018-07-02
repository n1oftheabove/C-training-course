// 22052014
// Programm, welches zwei Vektoren zur Eingabe verlangt,
//  und daraus relevante Größen den lin. Algebra berechent
// (Skalar-, Vektorprodukt-, Betrag- ,etc...)

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
#define PI 3.14159265

class Vektor{
private:
	int x,y,z,d; 
	double betr;
	double ang;
	
public:
	Vektor(){};		//Default Konstruktor
	Vektor(int x1, int y1, int z1){  //Konstruktor
			x = x1, y = y1; z = z1;
		};
	
	void kreuzpr(Vektor f, Vektor g){
		x = f.y*g.z -f.z*g.y;
		y = f.z*g.x - f.x * g.z;
		z = f.x*g.y - f.y*g.x;
			}

	void adding(Vektor f, Vektor g){
		x = f.x + g.x;
		y = f.y + g.y;
		z = f.z + g.z; 
			}
	
	void scalar(Vektor f, Vektor g){
		d = f.x * g.x + f.y * g.y + f.z * g.z;
			}
	
	void winkel(Vektor f, Vektor g){
			Vektor result(0,0,0);
			Vektor resultf(0,0,0);
			Vektor resultg(0,0,0);
			result.kreuzpr(f,g);
			result.betrag( result);		//in result.betr ist dann betrag des Kreuzproduktes von f und g gespeichert
			resultf.betrag(f); 
			resultg.betrag(g);
			ang = (360 * asin(result.betr / (resultf.betr * resultg.betr))) / (2 * PI);
			}

	void output(){
		cout << "(" << x << "," << y << "," << z << ")" << endl;
			}

	void outputscalar(){
		cout << d <<endl;
			}
	void betrag(Vektor f){
		betr = sqrt(f.x * f.x + f.y * f.y + f.z * f.z);
	}
	void outputbetr(){
		cout << betr << endl;
			}
	void outputang(){
		cout << ang <<" Grad" << endl;
			}

};

int main(){

int a, b, c, d, e, f;
cout << "geben Sie einen Vektor ein" <<endl;
cout << "x-Koordinate :" <<endl;
cin >> a;
cout << "y-Koordinate :" <<endl;
cin >> b;
cout << "z-Koordinate :" <<endl;
cin >> c;
cout << "geben Sie noch einen Vektor ein" <<endl;
cout << "x-Koordinate :" <<endl;
cin >> d;
cout << "y-Koordinate :" <<endl;
cin >> e;
cout << "z-Koordinate :" <<endl;
cin >> f;

class Vektor v1(a,b,c);
class Vektor v2(d,e,f);
cout << "Ihr Vektor 1: (" <<a<<","<<b<<","<<c<<")"<<endl;
v1.betrag(v1);
cout << "Hat die Länge: "<< endl;
v1.outputbetr();
cout << "Ihr Vektor 2: (" <<d<<","<<e<<","<<f<<")"<<endl;
v2.betrag(v2);
cout << "Hat die Länge: "<< endl;
v2.outputbetr();

class Vektor result(0,0,0);
result.kreuzpr(v1,v2);
cout << "Das Kreuzprodukt: " << endl;
result.output();

result.winkel(v1,v2);
cout << "Der Winkel: " << endl;
result.outputang();


result.adding(v1,v2);
cout << "Die Addition: " << endl;
result.output();

result.scalar(v1,v2);
cout << "Das Skalarprodukt: " << endl;
result.outputscalar();
cout << " "<<endl;

system("pause");
return 0;
}