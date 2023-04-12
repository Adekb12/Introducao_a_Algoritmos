#include <iostream>
using namespace std;
int main (){
	
	cout<<"Escolha um numero para escolher o pedido:"<<endl;
	cout<<"1-Refrigerante 2-Suco 3-Hamburguer 4-X-Tudo"<<endl;
	
	int opcao,quantidade;
	cin>>opcao>>quantidade;
	
	switch (opcao){
		case 1:
		cout<<3.00*quantidade<<endl;
		break;
		case 2:
		cout<<2.50*quantidade<<endl;
		break;
		case 3:
		cout<<4.50*quantidade<<endl;
		break;
		case 4:
		cout<<8.00*quantidade<<endl;
		break;
		default:
		cout<<"Opcao inexistente. Tente um dos numeros disponiveis."<<endl;
	}
	return 0;
}
		
