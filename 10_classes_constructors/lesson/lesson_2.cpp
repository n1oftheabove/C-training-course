#include<iostream>
#include<cstdlib>
using namespace std;

class Punkt{		//Klasse Punkt
private:
	int px, py,pz;
public:
	//konstruktor
	Punkt(int x, int y, int z): px(x), py(y), pz(z){}				// Ein Konstruktor mit "Elemente-Initialisierer"

	Punkt( const Punkt & p): px(p.px), py(p.py), pz(p.pz){      //Ein Copy Konstruktor
			cout << "Hier ist ein Copy-Konstruktor" << endl;
	}

	void output(){
			cout << "(" << px << " , " << py << " , " << pz << " ) " <<endl;
		}
	void setP(int x, int y, int z){
		px=x; py=y; pz=z;
		}
};

class Folge{
private:
	int *f;
	int n;
public:
	Folge(int x){    //wenn Folge einen int-Wert bekommt, macht sie das hier
		n = x;
	f = new int[x];
	for(int i = 0; i < x; i++){
			f[i] = i;
		}
	}

	Folge( const Folge & _fcopy){    //hier wieder ein Copy-Konstruktor
		
		n = _fcopy.n;
		f = new int[n];
		for(int i = 0; i < n ; i++){
			f[i] = _fcopy.f[i];	
			}
		}

	void setNull()
		{
			for(int i =0; i<n; i++)
				{
					f[i] = 0;
				}
		}
	void print(){
		cout << f << ">>";
		for(int i = 0; i < n; i++){
			cout << f[i] << " " ;
			cout<< endl;
			}
		}

};

int main(){

	class Punkt p1(2,3,4);
	cout << "1. Punkt > "; 
	p1.output(); // macht cout << "(" << px << " , " << py << " , " << pz << " ) " <<endl;

	
	class Punkt p2 = p1;	//p2(p1): Objekt kopieren, d.h. Copy Konstruktor
							// der Compiler ruft einen Standard-Kopierkonstruktor auf. Alle Werte von Objekt p1 werden zu p2 kopiert
							// WIRD MIT DIESER SYNTAX IMMER COPY-KONSTRUKTOR AUFGERUFEN?
	cout << "2. Punkt >" ; p2.output();
	p1.setP(5,6,7);
	cout << "1. Punkt nach Ersetzung >" ; p1.output();
	
	
	class Folge f1(10);
	class Folge f2(f1);			// // das gleiche wie f2 = f1, hier wird copy Konstuktor "Folge( const Folge & _fcopy){}" aufgerufen
	cout << "1.. Folge: "; f1.print();	//0 1 2 3 4 5 6 7 8 9
	cout << "2.. Folge: "; f2.print();	//0 1 2 3 4 5 6 7 8 9
	f1.setNull();

	cout << "1: " ; f1.print();		// 0 0 0 0 0 0 0 0 0 0 0
	cout << "2: " ; f2.print();		// 0 0 0 0 0 0 0 0 0 0 0

	//f1 und f2 referenzieren auf die gleiche Speicheradresse *f (weil f2 mit Copy-Konstruktor erstellt wurde), d.h. alle beide werden Nullfolge

	system("pause");
 return 0;
}
