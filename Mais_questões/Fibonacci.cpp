#include <iostream>
using namespace std;
int main (){
	
	int N,soma,ultimo,penultimo;
	ultimo = 0;
	penultimo = 1;
	cin>>N;
	if (N==1){
		cout<<0<<endl;
	}
	else {
		cout<<ultimo<<endl<<penultimo<<endl;
	}
	while (N>=3){
			soma = ultimo + penultimo;
			ultimo = penultimo;
			penultimo = soma;
			N--;
			cout<<soma<<endl;	
	}
	return 0;
}
		
