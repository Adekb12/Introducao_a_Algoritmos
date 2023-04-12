#include <iostream>
using namespace std;
int main (){
	int n,procurado,aux = n;
	cin>>n;
	int vetor[n];
	for (int i = 0;i<n;i++){
		cin>>vetor[i];
	}
	cin>>procurado;
	for (int i=0;i<n;i++){
		if (vetor[i]==procurado){
			for (int j=i;j<n;j++){
				vetor[j] = vetor[j+1];
			}
			n--;
			i=n;
		}
	}
	if (aux==n){
		cout<<"ELEMENTO NAO ENCONTRADO"<<endl;
	}
	else {
		for (int i=0;i<n;i++){
			cout<<vetor[i]<<" ";
		}
	}
	return 0;
}
