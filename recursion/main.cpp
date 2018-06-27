// One example for recursion: Factorial function

#include <iostream>

using namespace std;

long long getFakultaet(int);
long long getFakultaetRek(int);

int main2(){

cout << "Please enter a number . " << endl;
int zahl;
cin >> zahl;
long long fakultaet = getFakultaet(zahl);
cout << zahl << "! = " << fakultaet << endl;
long long fakultaet1 = getFakultaetRek(zahl);
system("pause");
return 0;
}

long long getFakultaet(int zahl){
int temp = 1;
for(int i = zahl; i>1; i--){	
	temp = temp*i;
}
return temp;
}

long long getFakultaetRek(int zahl){
if(zahl ==0 || zahl == 1){
	return 1;
	}
return zahl * getFakultaetRek(zahl -1);
}
