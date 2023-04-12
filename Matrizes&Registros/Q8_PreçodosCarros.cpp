#include <iostream>
using namespace std;
struct carro{
	string nome;
	int ano,valor;
};
int main (){
	int q,rfc;
	cin>>q;
	carro crr[q];
	for(int i=0;i<q;i++){
		cin>>crr[i].nome>>crr[i].ano>>crr[i].valor;
	}
	cin>>rfc;
	for(int i=0;i<q;i++){
		if (crr[i].valor<rfc){
			cout<<crr[i].nome<<" "<<crr[i].ano<<" "<<crr[i].valor<<endl;
		}
	}
	return 0;
}
