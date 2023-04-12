#include <iostream>
#include <cmath>
using namespace std;
int somatorio (int n){
	int cont = 1,soma = 0,funcao;
	while (cont<=n){
		funcao = (5*(pow(cont,2)) + (2*cont) + 8);
		soma += funcao;
		cont++;
	}
	return soma;
}
int main (){
	int n;
	cin>>n;
	cout<<somatorio(n)<<endl;
	return 0;
}
