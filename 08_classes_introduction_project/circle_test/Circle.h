#define PI 3.14159265359; // globale Konstante definieren
using namespace std;

class Circle{
public:
	double radius;
	Point p;
	void output(){
		cout<<"radius: "<< radius << endl;
		cout<<"center: "<< p.x_coor << "(X), "
			 << p.y_coor << "(Y)"<<endl;
		}
	double area(){
		return pow(radius,2) * PI;
		//* davor wird als Zeiger interpretiert!!!
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
