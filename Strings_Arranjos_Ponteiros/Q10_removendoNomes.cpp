#include <iostream>
using namespace std;
int REPETE(string vetor[],int n,string novo[]){
	int j=0;
	for (int i=0;i<n;i++){
		if(vetor[i]!=vetor[i+1]){
			novo[j]=vetor[i];
			j++;
		}
	}
	return j;
}
int main (){
	int n,q;
	cin>>n;
	string vetor[n];
	string novo[n];
	for (int i=0;i<n;i++){
		cin>>vetor[i];
	}
	q = REPETE(vetor,n,novo);
	cout<<q<<endl;
	for (int i=0;i<q;i++)cout<<novo[i]<<endl;
	return 0;
}
