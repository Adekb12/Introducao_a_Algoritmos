#include <iostream>
using namespace std;
int SOMA(int n){
	int soma,resto;
	soma = 0;
	resto = n;
	while(resto>10){
		soma += resto%10;
		resto = resto/10;
	}
	soma += resto;
	return soma;
}
bool HARSHAD(int n,int& resto){
	resto = n%SOMA(n);
	
	if (resto==0){
		return true;
	}
	else {
		return false;
	}
}
int main (){
	int n,resto;
	cin>>n;
	bool resultado;
	resultado = HARSHAD(n,resto);
	if (resultado==true){
		cout<<resto<<" sim"<<endl;
	}
	else {
		cout<<resto<<" nao"<<endl;
	}
	return 0;
}
