#include <iostream>
using namespace std;
void troca(int& a, int& b) {
int temp = a;
a = b;
b = temp;
}
void inverte(int *vetor, int ini, int fim){
	for (int i = 0; i < fim/2; i++){
		troca(vetor[ini+i], vetor[fim-i]);
	}
}
int main (){
	int tamanho,ini,fim;
	cin>>tamanho;
	int *vetor;
	vetor = new int[tamanho];
	for (int i=0;i<tamanho;i++){
		cin>>vetor[i];
	}
	cin>>ini>>fim;
	inverte(vetor,ini,fim);
	for (int i = 0;i<tamanho;i++){
		cout<<vetor[i]<<" ";
	}
	return 0;
}
