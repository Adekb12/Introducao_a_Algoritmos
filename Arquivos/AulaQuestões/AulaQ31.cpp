#include <iostream>
#include <fstream>//para arquivos
using namespace std;
int main (){
	ifstream leitura("frases.txt");
	if (leitura){
		string frase;
		while (getline(leitura,frase)){
			cout<<frase<<endl;
		}
		
	}else{
		cout<<"arquivo nao encontrado"<<endl;
	}
	return 0;
}

