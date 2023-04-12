#include <iostream>
using namespace std;
int main (){
	int numero,funcao,chute,con;
	con = 0;
	cin>>numero;
	funcao = ((numero*7)/4);
	do {
		cin>>chute;
		if (chute>funcao){
			cout<<"Chutou alto"<<endl;
		}
		else if (chute<funcao){
			cout<<"Chutou baixo"<<endl;
		}
		con++;
	}while (chute!=funcao);
	cout<<"NUmero de tentativas ate acertar: "<<con<<endl;
	
	return 0;
}
