#include <iostream>
using namespace std;
int simplifica(int n,int& d){
	int resto,x,y;
	x = n;
	y = d;
	resto = 1;
	if (x<y){
		int aux;
		aux = x;
		x = y;
		y = aux;
	}
	while (resto!=0){
		resto = x%y;
		x = y;
		y = resto;
	}
	//x é o MDC
	n = n/x;
	d = d/x;
	return n;
}		
int main (){
	int numerador,denominador;
	cin>>numerador>>denominador;
	cout<<simplifica(numerador,denominador)<<endl<<denominador<<endl;
	return 0;
}
