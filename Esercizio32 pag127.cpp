#include<iostream>
using namespace std;

int perimetro(int lato);
int area(int lato);

int main(){
	int lato, perimetro, area;
	cout<<"Quanto vale il lato?"<<endl;
	cin>>lato;
	perimetro=lato*4;
	area=lato*lato;
	cout<<"Il perimetro vale:"<<perimetro<<endl;
	cout<<"L'area vale:"<<area<<endl;
	return 0;
}

