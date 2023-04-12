#include <iostream>
using namespace std;
void ESCREVER(int q,int vetor[]){
	cout<<"[";
	if (q==0){
		cout<<"]"<<endl;
	}
	else {
		for (int i=0;i<q;i++){
			cout<<vetor[i];
			if (i<(q-1)){
				cout<<", ";
			}
		}
		cout<<"]"<<endl;
	}
}
int main (){
	int q;
	cin>>q;
	int vetor[q];
	for (int i=0;i<q;i++){
		cin>>vetor[i];
	}
	ESCREVER(q,vetor);
	return 0;
}
