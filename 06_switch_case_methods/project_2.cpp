#include<iostream>
#include<cstdlib>
using namespace std;
// Methoden

unsigned int biggerthan(int num);
int main(){
	cout << "Bitte eine Zahl eingeben"<<endl;
	int zahl;
	cin>>zahl;
	unsigned int toobig = biggerthan(zahl);
	if(biggerthan(zahl*2)) zahl -=100;			//condition wird true bei eingabe von zahl = 8
	cout<<"Zahl = "<<zahl<<endl;
	system("PAUSE");
	return 0;
	}

// Implementierung

unsigned int biggerthan(int num){
	if(num <=10) return 0; //beendet Methode
	int diff = num-10;
	return diff;
}
