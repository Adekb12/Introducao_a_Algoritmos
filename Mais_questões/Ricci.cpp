
#include <iostream>
using namespace std;

int Fibo(int P,int S,int cont){
	if (cont==0){
		return P;
	}
	else if (cont==1){
		return S;
	}
	else {
		return Fibo(P,S,cont-1) + Fibo(P,S,cont-2);
	}
}
int main (){
	int P,S,N,cont;
	cont = 0;
	cin>>P>>S>>N;
	while (cont<N){
		cout<<Fibo(P,S,cont)<<" ";
		cont++;
	}
	return 0;
}
