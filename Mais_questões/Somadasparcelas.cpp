#include <iostream>
using namespace std;
float Soma(int N){
	float S;
	int cont;
	S = 0;
	cont = 1;
	while (cont<=N){
		S += float(cont*(cont+1))/(cont+3);
		cont++;
	}
	return S;
}
int main (){
	int N;
	cin>>N;
	cout<<Soma(N)<<endl;
	return 0;
}
