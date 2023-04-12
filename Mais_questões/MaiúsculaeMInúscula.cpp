#include <iostream>
using namespace std;
int main (){
	
	char letra;
	cin>>letra;
	
	if (int(letra)>=65 and int(letra)<=90){
		cout<<"MAIUSCULA"<<endl;
	}
	else {
		cout<<"MINUSCULA"<<endl;
	}
	return 0;
}
