#include <iostream>
using namespace std;
int VALIDO(int vetor[],int t){
	int q = t;
	for (int i=0;i<t;i++){
		if (vetor[i]%3==0){
			vetor[i]=-1;
			q--;
		}
	}
	return q;
}
int main (){
	int t,q;
	cin>>t;
	int vetor[t];
	for (int i=0;i<t;i++){
		cin>>vetor[i];
	}
	q = VALIDO(vetor,t);
	for (int i=0;i<t;i++){
		if (vetor[i]!=-1){
			cout<<vetor[i]<<" ";
		}
	}
	cout<<endl;
	cout<<q<<endl;
	return 0;
}
