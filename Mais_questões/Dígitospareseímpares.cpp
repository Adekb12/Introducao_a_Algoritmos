#include <iostream>
using namespace std;
int main (){
	
	int numero,primeiro,segundo,terceiro,quarto,quinto,resto,par,impar;
	cin>>numero;
	primeiro = numero/10000;
	resto = numero%10000;
	segundo = resto/1000;
	resto = resto%1000;
	terceiro = resto/100;
	resto = resto%100;
	quarto = resto/10;
	quinto = resto%10;
	par = 0;
	impar = 0;
	
	if (primeiro%2 == 0){
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}
	if (segundo%2 == 0){
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}
	if (terceiro%2 == 0){
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}
	if (quarto%2 == 0){
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}
	if (quinto%2 == 0){
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}
	
	cout<<par<<endl<<impar<<endl;
	return 0;
}
		
	
	
	
