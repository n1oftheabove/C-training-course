#include<iostream>
#include<cstdlib>
using namespace std;

struct Applikation{
	Applikation(){
		cout << "Applikation wird geladen ...\n"<<endl;
		run();
		}
	void run(){
		for (int i=0; i<3; i++)
		cout << "Applikation wird ausgeführt...\n)"<<endl;
		}
	~Applikation(){
	cout << "Applikation wird beendet... Tschüss\n"<<endl;
	}
};

struct Bruch {
	public:
		Bruch(int z=0, int n=1){
			zaehler = z;
			nenner = n;
			cout << "Bruch: %d / %d wurde erzeugt\n"<< zaehler<< nenner<< endl;
			}
		~Bruch(){
			cout << "Bruch %d / %d wurde entfernt\n" << zaehler << nenner << endl;
			}
	private:
		int zaehler;
		int nenner;
};



int main(){
{
Applikation myApp;
}
Bruch *b1, b2(1,2), b3;
b1= new Bruch(3,4);
{
	Bruch b4(4);
}
system("pause");
return 0;
}