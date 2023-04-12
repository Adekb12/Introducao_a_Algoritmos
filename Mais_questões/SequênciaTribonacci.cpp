#include <iostream>
using namespace std;
int Tribo(int cont){
	if (cont == 1){
		return 1;
	}
	else if (cont == 2){
		return 1;
	}
	else if (cont == 3){
		return 2;
	}
	else {
		return Tribo(cont-1) + Tribo(cont-2) + Tribo(cont-3);
	}
}
int main (){
	int N,cont;
	cont = 1;
	cin>>N;
	while (cont<=N){
		cout<<Tribo(cont)<<" "; ;
		cont++;
	}
	return 0;
}
