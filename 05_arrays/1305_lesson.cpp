#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

//zwei dim-Arrays
		//alle Einträge im Array im gleichen Typ

int main(){
	int two_dim_a[4][5]={
							{10,11,12,13,14},		//wird hier nix definiert, werden per default null reingeschrieben
							{10,11,12,13,14},
							{10,11,12,13,14},
							{10,11,12,13,14}
};

cout<<"***************************************************************"<<endl;
for(int i = 0; i <4; i++)
	{
		for(int j = 0; j<5;j++)
			{
cout<<"\t"<<two_dim_a[i][j];			//\t mit tab getrennt
			}
cout<<endl;
	}
system("PAUSE");


}