/*#include <iostream>
using namespace std;

int Fibo(int N){
	if (N==1){
		return 0;
	}
	else if (N==2){
		return 1;
	}
	else {
		return (Fibo(N-2)+Fibo(N-1));
	}
}
int main (){
	int N,cont;
	cont=1;
	cin>>N;
	while (cont<=N){
		cout<<Fibo(cont)<<endl;
		cont++;
	}
	return 0;
}*/
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
