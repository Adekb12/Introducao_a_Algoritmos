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
}	
