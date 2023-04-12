#include <iostream>
using namespace std;

int funcao(int n1,int& n2){
	int quociente;
	quociente = n1/n2;
	n2 = n1%n2;
	return quociente;
}
int main (){
	int n1,n2;
	cin>>n1>>n2;
	if (n2==0){
		cout<<"erro"<<endl;
	}
	else {
		cout<<funcao(n1,n2)<<" "<<n2<<endl;
	}							
}
