#include<iostream>
#include<string>
#ifndef PICTUREFORMAT_H
#define PICTUREFORMAT_H
using namespace std;

class PictureFormat{
	string fname;
public:
	PictureFormat(const string &name);	//es gibt keine virtuellen Konstruktoren
	virtual ~PictureFormat(){};
	void setName(const string &name);
	const string& getName() const;		//const damit keine Attribute der Klasse veränderbar
	
	//reine virtuelle Methoden
	virtual void showPicture()=0;		//hier werden die Methoden nur deklariert (Schnittstellen/Interfaces), da von PictureFormat keine Objekte erzeugt werden sollen
	virtual void showPictureInfo()=0;	// =0 verhindert Implementieren, werden erst in Unterklassen implementiert

};

#endif // !PICTUREFORMAT_H