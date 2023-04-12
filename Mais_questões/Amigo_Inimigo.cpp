#include <iostream>
using namespace std;
int main (){
	int codigo,digito3,digito4;
	string situacao;
	cin>>codigo;
	digito3 =(codigo%10000)/1000;
	digito4 =((codigo%1000)%1000)/100;
	if (((digito3+digito4 == 7) or (digito3+digito4 == 8)) and (digito3*digito4 == 12)){
		situacao = "Inimigo";
	}
	else {
		situacao = "Amigo";
	}
	cout<<situacao<<endl;
	return 0;
}
