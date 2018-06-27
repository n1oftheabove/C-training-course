#pragma once //sorgt dafür, dass file nur einmal includiert wird

class Datum{
private:
	int tag;
	int monat;
	int jahr;
public:
	Datum();
	Datum(int, int, int);
	void setTag(int);
	void setMonat(int);
	void setJahr(int);
	void info();
	int getTag();
	int getMonat();
	int getJahr();
	bool isValid(Datum);
	bool isSJ(int);
};