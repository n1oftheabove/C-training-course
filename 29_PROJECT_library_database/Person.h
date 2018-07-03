#pragma once
#include<string>
#include<iostream>
#include "Datum.h"
#define N 3

using namespace std;
class Person{
protected:
	string name;
	string vorname;
	string strasse;
	string ort;
	int plz;
public:
	Person();
	Person(string, string, string, string, int);
	~Person();
//Die Argumente von setters dürften auch als Konstante definiert werden
	void setName(const string &);
	void setVorname(const string &);
	void setStrasse(const string &);
	void setOrt(const string &);
	void setPlz(const int &);	//hier könnte domain error exception eingebaut werden
//Getters verändern keinen Attribut, könnten als const defert werden 
	const string & getName() const ;
	const string & getVorname() const ;
	const string & getStrasse() const;
	const string & getOrt() const;
	const int & getPlz() const;
	string info();
};