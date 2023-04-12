#include <iostream>
using namespace std;
int main (){
	string palavra;
	cin>>palavra;
	int tam,contV=0,contC=0;
	tam = palavra.size();
	for (int i=0;i<tam;i++){
		if (palavra[i]=='a' or palavra[i]=='e' or palavra[i]=='i' or palavra[i]=='o' or palavra[i]=='u'){
			contV++;
		}else{
			contC++;
		}
	}
	cout<<contV<<endl<<contC<<endl;
	return 0;
}
