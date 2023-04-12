#include <iostream>
using namespace std;
int main (){
	string cor1,cor2;
	int numero,primeiro,segundo,terceiro,quarto,quinto,resto;
	cin>>cor1>>cor2>>numero;
	primeiro = numero/100000;
	resto = numero%100000;
	segundo = resto/10000;
	resto = resto%10000;
	terceiro = resto/1000;
	resto = resto%1000;
	quarto = resto/100;
	resto = resto%100;
	quinto = resto/10;
	resto = resto%10;

	if (primeiro == resto and segundo == quinto and terceiro == quarto){
		cout<<cor1<<endl;
	}
	else {
		cout<<cor2<<endl;
	}
	
	return 0;
}
