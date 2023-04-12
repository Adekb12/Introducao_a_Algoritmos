#include <iostream>
using namespace std;
int main (){
	int n,tam,maior;
	cin>>n;
	int vetor[n];
	string palavra[n];
	maior = -1;
	for (int i=0;i<n;i++){
		cin>>palavra[i];
		tam = palavra[i].size();
		if (tam>maior){
			maior = tam;
		}
		vetor[i]=tam;
	}
	for (int i=0;i<n;i++){
		while(vetor[i]<maior){
			cout<<"*";
			vetor[i]+=1;
		}
		cout<<palavra[i]<<endl;
	}
	return 0;
}
