//	16052014
// Strings

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
string str01("Eine Textfolge");
string str02=str01;
string str03{"C++11-like"};	//C++11
string str04 = "So geht es auch";
string str05(4,'X');
string str06;
cout << "Einen String bitte\n"<<endl;
getline(cin,str06);
cout << "Ihre Eingabe: " << str06 << endl;
system("Pause");
return 0;
}
