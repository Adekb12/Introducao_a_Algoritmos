#include <iostream>
using namespace std;
void TROCA(char vA[],char vB[]){
	int cont = 9;
	char aux;
	for (int i=0;i<10;i++){
		if (i%2==0){
			aux = vA[i];
			vA[i] = vB[cont];
			vB[cont] = aux;
			cont--;
		}
	}
}
int main (){
	char vA[10];
	char vB[10];
	for (int i=0;i<10;i++){
		cin>>vA[i];
	}
	for (int i=0;i<10;i++){
		cin>>vB[i];
	}
	TROCA(vA,vB);
	for (int i=0;i<10;i++){
		cout<<vA[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<10;i++){
		cout<<vB[i]<<" ";
	}
	cout<<endl;
	return 0;
}
