#include <iostream>
using namespace std;
int PRIMO(int cont){
	int divisor,cont2;
	divisor = 1;
	cont2 = 0;
	while (divisor<=cont){
		if (cont%divisor==0){
			cont2++;
		}
		divisor++;
	}
	if (cont2==2){
		return 1;
	}
	else {
		return 0;
	}
}
int VERIFICA(int n){
	int cont,verifica,divisao;
	cont = 2;
	verifica = 0;
	divisao = n;
	while (cont<=n){
		if (PRIMO(cont)==1){
			while (divisao%cont==0){
				divisao = divisao/cont;
				cout<<cont<<" ";
				if (cont!=2 and cont!=3 and cont!=5){
					verifica++;
				}
			}
		}
		cont++;
	}
	cout<<endl;
	if (verifica==0){
		return 1;
	}
	else {
		return 0;
	}
}
int main (){
	int n;
	cin>>n;
	if (VERIFICA(n)==1){
		cout<<"REGULAR"<<endl;
	}
	else{
		cout<<"NAO REGULAR"<<endl;
	}
	return 0;
}
