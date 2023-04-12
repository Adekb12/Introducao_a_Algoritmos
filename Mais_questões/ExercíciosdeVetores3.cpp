#include <iostream>
using namespace std;
int main (){
	int N;
	cin>>N;
	int *vetor = new int[N];
	int *vetor2 = new int[N];
	for (int i = 0;i<N;i++){
		cin>>vetor[i];
		if (vetor[i]<0){
			vetor2[i]=0;
		}
		else {
			vetor2[i] = vetor[i];
		}
	}
	for (int i=0;i<N;i++){
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<N;i++){
		cout<<vetor2[i]<<" ";
	}
	return 0;
}
