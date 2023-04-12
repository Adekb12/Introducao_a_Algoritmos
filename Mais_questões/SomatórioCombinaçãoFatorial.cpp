#include <iostream>
using namespace std;
long int fatorial(int f){
	if (f==0 or f==1){
		return 1;
	}
	else {
		return f*fatorial(f-1);
	}
}
long int combinacao(int n,int cont){
	return (fatorial(n))/(fatorial(cont)*fatorial(n-cont));
}
long int somatorio(int N){
	int cont,soma;
	cont = 1;
	soma = 0;
	while (cont<=N){
		soma += combinacao(N,cont);
		cont++;
	}	
	return soma;
}
int main (){
	int N;
	cin>>N;
	cout<<somatorio(N)<<endl;
	return 0;
}
