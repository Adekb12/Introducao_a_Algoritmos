#include <iostream>
using namespace std;
float centimetro(float valor){
	return (valor*100);
}
float metro(float valor){
	return (valor/100);
}
int main (){
	float valor;
	string medida;
	cin>>valor>>medida;
	if (medida=="centimetro"){
		cout<<centimetro(valor)<<" cm"<<endl;
	}
	else if (medida=="metro"){
		cout<<metro(valor)<<" m"<<endl;
	}
	else {
		cout<<"ERRO"<<endl;
	}
	return 0;
}
	
