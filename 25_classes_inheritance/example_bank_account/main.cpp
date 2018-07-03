//#include "konto.h" ist eigentlich überflüssig
#include "sparkonto.h"
#include "girokonto.h"

// TODO:
	//1.  cpp's der drei Klassen ergänzen d.h. Methoden vervollständigen
	//2. Funktionalitäten der Klassen hier in der main methode testen
	//3. Was ist mit "const"-Methoden gemeint (welche Merkmale, welchen Zweck, auch im Zshg mit Vererbung?)

int main(){

	Konto konto01("florian", "FLOIBAN", "TOLLE BIC", "GLS BANK", 1500);
	Girokonto gkonto01(2000, "Wondmu", "WONDMUIBAN", "TOLLE BIC", "SPARKASSE", 1700);
	Sparkonto skonto01(2, "Max", "MAXIBAN", "MAX BIC", "DEUTSCHE BANK", 20000);

	konto01.printdata();
	gkonto01.printdata();
	skonto01.printdata();

	//konto01.setGeld(100);
	//gkonto01.setDispo(1000);
	//skonto01.setBic("245523AD34FGHJ");

	system("pause");
	return 0;
}