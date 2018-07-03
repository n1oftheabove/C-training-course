#include "intmatrix.h"
#include <iostream>
using namespace std;

		IntMatrix::IntMatrix(){}		//standart konstruktor
		IntMatrix::IntMatrix(int a, int b){
			setA(a);
			setB(b);
			int mat[zeile][spalte];
			}	//konstruktor
		IntMatrix::getA(){
			return zeile;
			}
		IntMatrix::getB(){
			return spalte;
			}
		IntMatrix::setA(int z){
			zeile = z;	
			}
		IntMatrix::setB(int s){
			spalte = s;
			}
		IntMatrix::println(IntMatrix){}
		IntMatrix::get(int, int){}
		IntMatrix::getRandomMatrix(int, int, int){}
		IntMatrix::equals(IntMatrix){}