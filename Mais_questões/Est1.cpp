#include <iostream>
using namespace std;
void SOMATORIO(int p){
	int cont = 1;
	float soma = 0;
	while (cont<=p){
		soma += (cont*(cont+1))/cont+3;
	}
	cout<<soma<<endl;
}
int main (){
	int parcelas;
	cin>>parcelas;
	SOMATORIO(parcelas);
	return 0;
}
