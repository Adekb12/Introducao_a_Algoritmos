#include <iostream>
using namespace std;
int main (){
	
	int matricula,matricula2,matricula3;
	float nota,maior,segundamaior;
	cin>>matricula;
	maior = -2400000;
	segundamaior = -2400000;
	while (matricula!=0){
		cin>>nota;
		if (nota>maior){
			segundamaior = maior;
			maior = nota;
			matricula3 = matricula2;
			matricula2 = matricula;
		}
		else if (nota>segundamaior){
			segundamaior = nota;
			matricula3 = matricula;
		}
		cin>>matricula;
	}
	cout<<matricula2<<" "<<maior<<endl<<matricula3<<" "<<segundamaior<<endl;
	return 0;
}
	
