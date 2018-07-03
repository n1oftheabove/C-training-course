#include "pictureformat.h"
#include "jpeg.h"

int main (void){
	//PictureFormat pf("profilePicture");	//würde Fehlermeldung geben, weil kein Objekt der Klasse PictureFormat initialisiert werden kann
	PictureFormat *pf("profilePicture");//Zeiger darauf geht aber
	JPEG *jp;

	// wenn JPEG nicht mehr abstrak ist, geht folgendes
	JPEG jp("mein Bewerbungsfoto.jpg", "ist kein profi foto");
	PictureFormat *pf2 = new JPEG("st1.jpg", "info zum bild");	//Zeiger der Klasse PicFor bekommt zur Laufzeit ein Objekt der Klasse JPEG, würde nicht gehen, wenn JPEG noch nicht implementierte Methoden enthält

	//Klasse v;		Objekt
	//Klasse *v;	Zeiger	kann von abstrakten klassen angelegt werden
	//Klasse &v;	Referenz	kann von abstrakten klassen angelegt werden
	system("pause");
	return 0;
}


//Projekt: Bibliothekverwaltung
	// bis Freitag: Welche Voraussetzungen soll eine Bibliothekverwaltungssoftware erfüllen?