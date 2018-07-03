#pragma once
#include<string>
#include<iostream>

using namespace std;
class Autor{
	//Autor hat auch Anschrift. Ggf. Klasse Anschrift schreiben
private:
	string name;
	string vorname;
	string mail;
public:
	Autor();
	Autor(string, string, string);
	~Autor();
	void setName(string);
	void setVorname(string);
	void setMail(string);
	string getName();
	string getVorname();
	string getMail();
	string info();

};