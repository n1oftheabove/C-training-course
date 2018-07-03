#include "pictureformat.h"
// eine abstrakte Klasse beinhaltet mindestens eine "reine" virtuelle Methode
	//rein virtuell: Nicht implementiert und initialisiert mit 0

PictureFormat::PictureFormat(const string &name){}

PictureFormat::~PictureFormat(){}

void PictureFormat::setName(const string &name){
	fname = name;

}

const string& PictureFormat::getName() const {
	return fname;	
}