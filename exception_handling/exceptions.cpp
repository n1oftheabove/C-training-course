#include <iostream>
#include <string>
using namespace std;


//try catch throw
//standard exception klassen aus der C++-Bibliothek

int divide(int x, int y);

int main(){
int Result;
try{
//kritischer code
	Result = Divide(5,0);
	} catch (const int &ex) {
		cout << "Division durch null ist nich möglich!" << endl;
	} 
	//throw 2;	//aequivalent zu return
		} 
	/*catch(DTP1 ex2 //datentyp bzw. exception-class, der weitergegeben werden soll)
	{
		//Ausnahmebehandlung
		cerr << "Eine Ausnahme ist passiert" << e << endl;	//eine Aussnahme ist passiert2
	}
	catch(DTP2 ex2){
	}	
	cout << "ausserhalb try-catch" << endl;*/

system("pause");
return 0;

}


double divide(double x, double y){
	if(y==0){
		throw int();	//Datentyp der geworfen wird, muss auch gefangen werden
	}
	cout << "Es gab keine Ausnahme" << endl;
	return x/y;
}
