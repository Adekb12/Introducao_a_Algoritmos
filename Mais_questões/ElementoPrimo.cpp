#include <iostream>
using namespace std;
int PRIMO(int n){
	int divisor,cont;
	divisor = 1;
	cont = 0;
	while (divisor<=n){
		if (n%divisor==0){
			cont++;
		}
		divisor++;
	}
	if (cont==2){
		return 1;
	}
	else {
		return 2;
	}
}
int VERIFICA(int n){
	cin>>n;
	if (n>0 and PRIMO(n)==1){
		return n;
	}
	else {
		return VERIFICA(n);
	}
}
int main (){
	int n;
	cout<<VERIFICA(n)<<endl;
	return 0;
}
