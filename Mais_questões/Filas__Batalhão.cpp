#include <iostream>
using namespace std;
int main (){
	int soldados,filas;
	cin>>soldados;
	filas = 0;
	while (soldados>filas){
		soldados -= filas;
		filas++;
	}
	cout<<filas<<endl;
	return 0;
}
