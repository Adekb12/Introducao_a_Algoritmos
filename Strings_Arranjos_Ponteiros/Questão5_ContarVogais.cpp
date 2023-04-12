#include <iostream>
using namespace std;
int main (){
	string vetor;
	cin>>vetor;
	int tam,cont=0;
	tam = vetor.size();
	for (int i=0;i<tam;i++){
		if (vetor[i]=='a' or vetor[i]=='e' or vetor[i]=='i' or vetor[i]=='o' or vetor[i]=='u')
			cont++;
	}
	cout<<cont;
	return 0;
}
