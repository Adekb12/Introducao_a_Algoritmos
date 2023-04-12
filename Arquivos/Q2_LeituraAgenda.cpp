#include <iostream>
#include <fstream>
using namespace std;

int main (){
	string nome;
	int idade;
	float altura;
	string telefone;
	ifstream arq("agenda.txt");
	ofstream uivo("saida.txt");
	if (arq){
		while (arq>>nome>>idade>>altura>>telefone){
			if (uivo){
				uivo << "--------" <<endl;
				uivo << nome << " tem " << idade << " anos e " << altura << " de altura." <<endl;
				uivo << "Tel.: " << telefone << "." <<endl;
				uivo << "--------" <<endl;
			}
		}
	}
	arq.close();
	uivo.close();
	return 0;
}
