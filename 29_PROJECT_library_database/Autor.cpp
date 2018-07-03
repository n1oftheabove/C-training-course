#include "Autor.h"
#include <iostream>
#include<string>
using namespace std;

	Autor::Autor(){
		setVorname("autor_vorname");
		setName("autor_name");
		setMail("autor@mail.xx");
		}
	
	Autor::Autor(string name, string vorname, string mail){
		setVorname(vorname);
		setName(name);
		setMail(mail);
		}
	Autor::~Autor(){}


	void Autor::setName(string name){
		this-> name = name;
		}
	void Autor::setVorname(string vorname){
		this ->vorname = vorname;
		}
	void Autor::setMail(string mail){
		this->mail=mail;
		}


	string Autor::getName(){
		return name;
		}
	string Autor::getVorname(){
		return vorname;
		}
	string Autor::getMail(){
		return mail;
		}

	string Autor::info(){
	return "Nachname: " + getName() + ", Name: " + getVorname() + ", Email: " + getMail();
		}