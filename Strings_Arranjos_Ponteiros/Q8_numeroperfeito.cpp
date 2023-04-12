#include <iostream>
using namespace std;
int main (){
	int n,cont=1,i=0,soma=0;
	cin>>n;
	int vetor[n];
	while (cont<n){
		if (n%cont==0){
			vetor[i]=cont;
			i++;
		}
		cont++;
	}
	for (int j=0;j<i;j++){
		soma+=vetor[j];
	}
	if (soma==n){
		for (int j=0;j<i;j++)cout<<vetor[j]<<" ";
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}
