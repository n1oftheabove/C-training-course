#include "JPEG.h"

JPEG::JPEG(const string &n, const string &i):PictureFormat(n),info(i) {

}

void JPEG::setInfo(const string &i){
	info = i;
}

const string& JPEG::getInfo() const{
	return info;
	}

// zwei virtuelle Methoden der Basisklasse Pictureformat müssen noch implementiert werden, damit JPEG nicht mehr abstrakte Klasse


