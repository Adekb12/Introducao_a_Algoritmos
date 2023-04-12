#include <iostream>
#include <fstream>
using namespace std;
struct produto{
	char nome[10];
	float valor;
};
//gravando em binario um vetor de struct
int main (){
	int n;
	cin>>n;
	produto vetor[n];
	for (int i=0;i<n;i++){
		cin>>vetor[i].nome>>vetor[i].valor;
	}
	//gravando em binario
	ofstream gravacao("produtoBinario");
	gravacao.write((const char *)(vetor),sizeof(produto)*n);
	gravacao.close();
	return 0;
}
