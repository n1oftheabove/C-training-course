#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int findmax( int obj);
int findmin( int obj);
int counteven( int obj);



int main(){
int myarray[10]={0};
cout<<"Geben Sie 10 ganze Zahlen ein!\n";
for(int i=0; i<10; i++){
cout << i+1 <<". te Zahl?"<<endl;
cin>>myarray[i];
}

cout << "Ihr Array lautet  "<< myarray[0]
<< myarray[1]<< " "
<< myarray[2]<< " "
<< myarray[3]<< " "
<< myarray[4]<< " "
<< myarray[5]<< " "
<< myarray[6]<< " "
<< myarray[7]<< " "
<< myarray[8]<< " "
<< myarray[9] <<endl;
system("PAUSE");

int option=0;
cout << "Wähle eine Option  "<<endl;
cout << "-1- Maximum finden"<<endl;
cout << "-2- Minimum finden"<<endl;
cout << "-3- Anzahl der geraden Zahlen ermitteln"<<endl;

if(!(cin >> option)){
cout<< "Ungültige Eingabe\n"<<endl;
return 1;
}
switch(option){
case 1 : cout << "Das Maximum ist "<< findmax(myarray) <<endl;
break;
case 2 : cout << "Das Minimum ist "<< findmin(myarray) <<endl;
break;
case 3 : cout << "Die Anzahl der geraden Elemente im Array ist "<< counteven(myarray) <<endl;
break;
default: cout << "Ungültige Option\n"<<endl;
}

}

int findmax( int obj){



}

int findmin( int obj){

}

int counteven(int obj){
	int modcounter=0;
	for(int i=0;i<9;i++){
		if(0==(obj[i] % 2)) modcounter+=1;
	}
	return modcounter;
}
