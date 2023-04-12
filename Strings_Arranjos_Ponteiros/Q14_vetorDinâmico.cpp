#include <iostream>
#include <string.h>
using namespace std;
int main (){
	int *original,tamanho,capacidade,entrada,redimensionamentos = 0;
	
	capacidade = 5;
	tamanho = 0;
	
	original = new int[capacidade];
	
	cin>>entrada;
	while (entrada>0){
		if (tamanho<capacidade){
			original[tamanho] = entrada;
			tamanho++;
		}
		else {
			redimensionamentos++;
			int *novo = new int[capacidade+5];
			memcpy (novo, original, capacidade*sizeof(int));
			capacidade += 5;
			delete[] original;
			original = novo;	
		}
		cin>>entrada;
	}
	
	for (int i=0;i<tamanho;i++){
		cout<<original[i]<<" ";
	}
	cout<<endl;
	cout<<capacidade<<endl<<redimensionamentos<<endl;
	
	delete[] original;
	return 0;
}
