#include <iostream>
using namespace std;
//Declaração de subprogramas
int primo (int valor){
	//desenvover a lógica do primo
	int divisor=1, contador=0;
	while (divisor <= valor){
		if (valor%divisor == 0){
			contador++;
		}
		divisor++;
	}
	if (contador==2)
		return 1;//eh primo
	else 
		return 0;
}
int main (){
	int n;
	cin>>n;
	//funcao devolve um valor
	cout<<primo (n);//chamada da função
	return 0;
}
/*int primo(int n){
	int r;
	if (n==2 or n==3 or n==5 or n==7){
		r = 1;
	}
	else if ((n%2==0) or (n%3==0) or (n%5==0) or (n%7==0)){
		r = 0;
	}
	else {
		r = 1;
	}
	return r;
}
int main (){
	int n;
	cin>>n;
	cout<<primo(n)<<endl;
	return 0;
}	*/
