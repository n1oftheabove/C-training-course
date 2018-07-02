#include <iostream>
#include <cstdlib>
#include <string> //für C++11 state of the art strings
using namespace std;

//strcpy_s ist Microsoft
//strcpy ist unssafe, da es über das Ende von destination hinaus schreibt
//std::string in C++ verwenden, statt C-Style-Strings!

int main(){
string str("Eine Textfolge");
cout <<"string: "<< str << endl;
string str1("abcdefghi");
cout <<"string: "<< str << endl;
cout <<"str1: "<< str1 <<endl;
//strcpy(str, str1);		//strcpy(destination,source); MELDUNG: UNSAFE! s. oben
string str2 = str1;
cout << "str2: " << str2 <<endl;
//string str3{"C++ String"};		//funktioniert in VISUAL STUDIO 2012 noch nicht
//cout << "str3: " << str3 << endl;

cout << "einen String bitte!"<<endl;
string str05;
getline(cin, str05);	//lieber Strings immer so einlesen, da bei cin >> variable keine Längenüberprüfung!
						//außerdem bringt cin beim ersten Leerzeichen ab!
cout << str05 << endl;


// Elemente in String adressieren mit bezeichner.methode():
		//bezeichner.front()	adressiert String an erster Stelle
		//bezeichner.back()		adressiert String an letzter Stelle
		//bezeichner.at(x)		adressiert String an Stelle x
		//bezeichner.size()		gibt Länge des Strings aus

cout << "Erster Buchstabe " << str05.front() << endl;
cout << "Letzter Buchstabe " << str05.back() << endl;
cout << "3. Buchstabe "<< str05.at(3) <<endl;
cout << "Länge des Strings " << str05.size() <<endl;
system("pause");

}