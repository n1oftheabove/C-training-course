#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student{
public:
	string name;
	int matrnr;
	string fach;

public:
	Student(){}		//Standardkonstruktor
	Student(string sname, int smatrnr, string sfach): name(sname), matrnr(smatrnr), fach(sfach){};
	//eigener Konstruktor

void output(){
	cout << "Name: " << name << endl;
	cout << "Matrikelnummer: " << matrnr << endl;
	cout << "Fach: " << fach << endl;
	}
};

//class Tutorium{
//private:
//	int n;
//	string dozent;
//	string fach;
//	class Student students[];
//
//public:
//	Tutorium (int N, string D, string F): n(N), dozent(D), fach(F), students{}
//
//void output(){
//	cout << "Anzahl " << n <<endl;
//	cout << "Fach: " << dozent << endl;
//	cout << "Studenten: " << fach << endl;
//	}



int main(){

class Student s1;
cout << "geben Sie für den Stundente ein:" <<endl;
cout << "den Namen: "<<endl;
cin >> s1.name;
cout << "die Matrikelnummer: "<<endl;
cin >> s1.matrnr;
cout << "das Fach: " <<endl;
cin >> s1.fach;

cout << "Ihr Student: "<<endl;
s1.output();
system("pause");

return 0;
}