#include "Buch.h"
#include "Autor.h"
#include <iostream>
#include<string>
using namespace std;


Buch::Buch():Medium(){
	setIsbn("000");
	setAutor(Autor());
}
Buch::Buch(string titel, Datum d, int kontingent, Autor a, string isbn):Medium(titel, d, kontingent){
	setAutor(a);
	setIsbn(isbn);
}
Buch::~Buch(){

}
void Buch::setIsbn(string isbn){
	this-> isbn = isbn;
}
string Buch::getIsbn(){
	return isbn;
}
void Buch::setAutor(Autor a){
	 a = autor;
}
Autor Buch::getAutor(){
	return autor;
}

string Buch::info(){
	return Medium::info() +" " + autor.info() +", ISBN: " + isbn;
}