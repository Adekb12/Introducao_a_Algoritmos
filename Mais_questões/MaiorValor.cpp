#include <iostream>
using namespace std;
int MAIOR(int n,int& maior){
	if (n>maior){
		maior = n;
	}
	return maior;
}
int main (){
	int n,maior;
	char sentinela;
	sentinela = 'S';
	maior = -2400000;
	while (sentinela!='N'){
		cin>>n;
		maior = MAIOR(n,maior);
		cin>>sentinela;
	}
	cout<<maior<<endl;
	return 0;
}
