#include <iostream>
using namespace std;
int main (){
	int valor1,valor2,valor3,valor4,n,contpar,contimpar;
	cin>>valor1>>valor2>>valor3>>valor4;
	cin>>n;
	contpar = 0;
	contimpar = 0;
	while (n>0){
		if (n>=1 and n<valor1 and n%2==0){
			contpar++;
		}
		else if (n>=valor1 and n<valor2 and n%2!=0){
			contimpar++;
		}
		else if (n>=valor2 and n<valor3 and n%2==0){
			contpar++;
		}
		else if (n>=valor3 and n<valor4 and n%2!=0){
			contimpar++;
		}
		cin>>n;
	}
	cout<<contpar<<endl<<contimpar<<endl;
	return 0;
}
	
