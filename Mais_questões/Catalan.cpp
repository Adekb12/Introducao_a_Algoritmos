#include <iostream>
using namespace std;
int FATORIAL(int n){
	if (n==0 or n==1){
		return 1;
	}
	else {
		return n*FATORIAL(n-1);
	}
}
void SOMA(int n,int& soma,int& enesimo){
	int cont;
	cont = 0;
	soma = 0;
	while(cont<n){
		enesimo = (FATORIAL(2*cont))/(FATORIAL(cont+1)*FATORIAL(cont));
		soma += enesimo;
		cont++;
	}
}
int main (){
	int n,soma,enesimo;
	cin>>n;
	SOMA(n,soma,enesimo);
	cout<<soma<<endl;
	cout<<enesimo<<endl;
	return 0;
}
 
