#include <iostream>
using namespace std;
int main (){
	
	char caractere;
	int cont,conta,contb;
	cont = 1;
	conta = 0;
	contb = 0;
	do {
		cin>>caractere;
		if (caractere == 'a'){
			conta++;
		}
		else if (caractere == 'b'){
			contb++;
		}
		cont++;
	}while (cont<=10);
	if (conta<contb){
		cout<<1<<endl;
	}
	else {
		cout<<0<<endl;
	}
	
	return 0;
}
