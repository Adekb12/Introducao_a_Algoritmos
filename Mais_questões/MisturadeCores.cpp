#include <iostream>
using namespace std;
int main (){
	
	string cor1,cor2;
	cin>>cor1>>cor2;
	
	if ((cor1 == "azul" and cor2 == "amarelo")or(cor1 == "amarelo" and cor2 == "azul")){
		cout<<"verde";
	}
	else if ((cor1 == "azul" and cor2 == "vermelho")or(cor1 == "vermelho" and cor2 == "azul")){
		cout<<"violeta";
	}
	else if ((cor1 == "vermelho" and cor2 == "amarelo")or(cor1 == "amarelo" and cor2 == "vermelho")){
		cout<<"laranja";
	}
	else if (cor1 == cor2 or cor2 ==  cor1){
		cout<<cor1;
	}
	return 0;
}
