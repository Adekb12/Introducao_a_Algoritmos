#include <iostream>
#include <fstream>
using namespace std;
struct amigo{
	string nome;
	int idade;
	float altura;
	string telefone;
};
int main (){
	amigo registro;
	ifstream arq("agenda.txt");
	ofstream uivo("saida.txt");
	if (arq){
		while(arq >> registro.nome and arq >> registro.idade and arq >> registro.altura and arq >> registro.telefone){
			uivo <<"--------"<<endl;
			uivo << registro.nome <<" tem "<< registro.idade <<" anos e "<< registro.altura <<" de altura."<<endl;
			uivo <<"Tel.: "<< registro.telefone <<"."<<endl;
			uivo <<"--------"<<endl; 
		}
		arq.close();
		uivo.close();
	}
	return 0;
}
