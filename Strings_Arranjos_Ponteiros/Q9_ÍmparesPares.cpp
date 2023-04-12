#include <iostream>
using namespace std;
int main (){
	int vetor[20],par[20],impar[20],j=0,b=0;
	for (int i=0;i<20;i++){
		cin>>vetor[i];
		if (vetor[i]%2==0){
			par[j]=vetor[i];
			j++;
		}else{
			impar[b]=vetor[i];
			b++;
		}
	}
	for (int i=0;i<j;i++){
		cout<<par[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<b;i++)cout<<impar[i]<<" ";
	return 0;
}
