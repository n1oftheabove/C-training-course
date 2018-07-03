#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
#include<vector>
using namespace std;

//Exception-Klassen sind ganz normale Klassen und können auch abgeleitet werden
//können von Programmierer erstellt werden und es gibt standard Ausnahmeklassen

class eMathException{};	//leere Klasse
class eDivisionByZero : public eMathException{};
class eSqrtOfNegative : public eMathException{};

//eigene Exception Klasse:
class MyError{
		vector<string> msg;
		int err_code;
	public:
		enum class ERR{DIV=0, INP1, INP2};
		MyError(const ERR err): err_code((int)err){		/*Konstruktor, erwartet Fehlercode
				 von ERR. err wird zu int gecasted, damit aus enum-Konstante int wird.
				 static_cast<int> ginge auch*/
			msg.push_back("Divison by zero"); //hängt an Ende von vector Eintrag dran
			msg.push_back("Input Dividend");
			msg.push_back("Input Divisor");
			}
		const string &what(){
			return msg.at(err_code);
			}
};

//
//wenn kein catch auf den geworfenen Typ passt, wird intern die Funktion terminate aufgerufen
// catch(...) fängt unbekannte bzw. alternative Exceptions auf, um terminate zu verhindern
// im catch-Block lässt sich auch Ausnahme weiterleiten


//Beispiel exception handling beim Wurzelziehen
double calculate(double a, double b)
{//mehrere throw befehle in einer Methode
	
	if(b == 0) throw eDivisionByZero();
	double erg = a/b;
	if(erg <0) throw eSqrtOfNegative();
	double enderg;
	try
	{ enderg = sqrt(erg);
	 } catch (...) //... ist default exception
	{
		throw eMathException();	//weiterpropagieren der Exception
	}
return enderg;
}

//Beispiel standard exception library
double safe_sqrt(double val){
	if(val <0.0){
		throw domain_error("Negative Zahlen sind kein BT des Defitionsbereiches");
	}
	return sqrt(val);
}



double division(int &x, int &y){
	if(y==0) throw MyError(MyError::ERR::DIV);
	return(double) x/y;
}
void input_values(int &x, int &y){
	cout << "Dividend: ";
	//cin >> x; //woher weiß ich, dass der Benutzer eine richrtige Zahl eingibt?
	
	if (!cin >>x) {
		throw MyError(MyError::ERR::INP1);
		}
	cout << "Divisor";
	if(!(cin >> y)){
		throw MyError(MyError::ERR::INP2);
	}
}
	
//**************MAIN**************************

int main(){

	cout << "hier wird safe_sqrt gestestet" << endl;
	try{
	double wurzel = safe_sqrt(-5);
		} catch(const domain_error &ex){
		cout << ex.what() << endl;
	}
	cout << wurzel << endl;

	double result =0;

	try{
		int value1=0, value2 = 0;
		input_values(value1, value2);
		result = divison(3,0);
		} catch (MyError err){
			cout << "Fehler: " << err.what() << endl;
			}
		/*catch(string s){
			cout << s << endl;
		}
		cout << "result = " << result << endl;


	double a = 35; double b = 7; double c;
	try{
	c = calculate(a,b);
	//kommende catch Blöcke werden nacheinander abgehandelt. Wird ein exception gefangen,
	//wird auch nicht weiter gesucht. Deswegen: Spezielle Exceptions zuerst schreiben,
	// allgemeine später
	} catch (const eDivisionByZero &ex)//exception variable soll nicht modifiziert werden
	{
		cout << "Dividieren durch 0 ist nicht erlaubt" << endl;	
	} catch (const eSqrtOfNegative &ex)
	{
		cout << "Wurzelziehen aus negative Zahlen ist nicht erlaubt" << endl;
	} catch(const eMathException &ex)
	{
		cout << "Ein mathematischer Fehler ist aufgetreten" << endl;
	} catch (...)
	{
		cout << "Es ist eine unbekannte Exception aufgetreten" << endl;
	}
	*/

	system("pause");
	return 0;
}
//beachten auch: In try-Blöcken erklärte Variablen wie gewohnt auch nur dort sichtbar
