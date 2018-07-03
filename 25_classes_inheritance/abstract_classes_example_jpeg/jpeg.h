#include "pictureformat.h"

#include<iostream>
#include<string>
#ifndef JPEG_H
#define JPEG_H
using namespace std;

class JPEG : public PictureFormat {
	string info;
public:
	JPEG(const string &n, const string &i);	//Konstruktor
	~JPEG(){};
	void setInfo();
	const string getInfo() const;	//Methode darf keine Attribute modifizeren
	void showPicture(){
	cout <<"JPEG Bild: "<< getName() << "wird angezeigt" << endl;
}

	void showPictureInfo(){
	cout <<"Info Bild: "<< getInfo() << "wird angezeigt" << endl;
}

};

#endif // !JPEG_H