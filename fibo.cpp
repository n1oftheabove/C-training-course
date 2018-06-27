#include<iostream>

using namespace std;

int getFibo(int i);

int main(){
	for (int i = 1; i<=40; i++){
		cout << i << " " << getFibo(i) << endl;
	}
	
	cout << " *********************** " << endl;
		for (int i = 1; i <= 30; i++){
			cout << i << " " << getFibo(i) << endl;
		}

system("pause");
}


int getFibo(int i){
int temp = 0;
int twoone = 1;
if(i==2 || i==1){ return twoone;
} else { temp = getFibo(i-1) + getFibo(i-2);
return temp;} 
}