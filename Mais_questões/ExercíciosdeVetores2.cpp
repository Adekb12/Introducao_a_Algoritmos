#include <iostream>
using namespace std;
int main (){
	int vetor[10]={0};
	int k,novo,p;
	cin>>k;
	for (int i=0;i<k;i++){
		cin>>vetor[i];
	}
	cin>>novo>>p;
	for (int g = ;g>=p;g--){
		vetor[g+1]=vetor[g];
	}
	vetor[p]=novo;
	for (int i=0;i<10;i++){
		cout<<vetor[i]<<" ";
	}
	return 0;
}
