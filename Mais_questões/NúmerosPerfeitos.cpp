#include <iostream>
using namespace std;
int main (){
	int n,soma,cont;
	cin>>n;
	while (n>0){
		soma = 0;
		cont = 1;
		while (cont<n){
			if ((n%cont)==0){
				soma += cont;
			}
			cont++;
		}
		if (soma==n){
			cout<<"perfeito"<<endl;
		}
		else {
			cout<<"nao perfeito"<<endl;
		}
		cin>>n;
	}
	return 0;
}
