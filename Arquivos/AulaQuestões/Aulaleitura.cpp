#include <iostream>
#include <fstream>//para arquivos
using namespace std;
int main (){
	//leitura de dados;
	string nomedoArquivo;
	cin>>nomedoArquivo;
	
	ifstream leitura(nomedoArquivo);
	int valor;
	if (leitura){
		while (leitura >> valor){
			cout<<valor<<endl;
		}
		leitura.close();
	}else{
		cout<<"arquivo nao encontrado"<<endl;
	}
	return 0;
}
