#include <iostream>
using namespace std;
struct registro{
	string nome,planeta;
	int batalhas;
};
int main (){
	int qP,qS,cont,k=0,aux,soma;
	cin>>qP>>qS;
	registro storm[qS];
	string p[qP]={};
	for (int i=0;i<qS;i++){
		cin>>storm[i].nome>>storm[i].planeta>>storm[i].batalhas;
		cont = 0;
		for (int j=0;j<qP;j++){
			if (storm[i].planeta==p[j])
				cont++;
		}
		if (cont==0){
			p[k]=storm[i].planeta;
			k++;
		}
	}
	for (int i=0;i<qP;i++){
		aux = 0;
		soma = 0;
		for (int j=0;j<qS;j++){
			if (p[i]==storm[j].planeta){
				aux++;
				soma+=storm[j].batalhas;
			}
		}
		cout<<p[i]<<" "<<aux<<" "<<float(soma)/aux<<endl;
	}
	return 0;
}
