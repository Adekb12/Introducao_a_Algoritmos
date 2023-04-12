#include <iostream>
#include <string.h>
using namespace std;
int* TROCA(int vetor[],int &capa){
	int *novo = new int[capa+5];
	for (int j=0;j<capa;j++){
		novo[j]=vetor[j];
	}
	capa+=5;
	delete[]vetor;
	return novo;
}
int main(){
	int capa,n,i,r;
	capa = 5;
	int *vetor = new int[capa];
	cin>>n;
	i = 0;
	r = 0;
	while (n>0){
		if (i<capa){
			vetor[i]=n;
			i++;
		}
		else {
			vetor = TROCA(vetor,capa);
			vetor[i]=n;
			i++;
			r++;
		}
		cin>>n;
	}
	for (int j=0;j<i;j++)cout<<vetor[j]<<" ";
	cout<<endl<<capa<<endl<<r<<endl;
	delete[]vetor;
	return 0;
}
