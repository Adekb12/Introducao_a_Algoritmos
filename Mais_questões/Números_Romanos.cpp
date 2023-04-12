#include <iostream>
using namespace std;
string romano(int n){
	string numero;
	int dezena,unidade;
	dezena = n/10;
	unidade = n%10;
	switch (unidade){
		case 1:
			numero = "I";
			break;
		case 2:
			numero = "II";
			break;
		case 3:
			numero = "III";
			break;
		case 4:
			numero = "IV";
			break;
		case 5:
			numero = "V";
			break;
		case 6:
			numero = "VI";
			break;
		case 7:
			numero = "VII";
			break;
		case 8:
			numero = "VIII";
			break;
		case 9:
			numero = "IX";
			break;
	}
	if (dezena>0 and dezena<=5){ 
		switch (dezena){
			case 1:
				numero = "X"+numero;
				break;
			case 2:
				numero = "XX"+numero;
				break;
			case 3:
				numero = "XXX"+numero;
				break;
			case 4:
				numero = "XL"+numero;
				break;
			case 5:
				numero = "L";
				break;
		}
	}
	return numero;
}
int main (){
	int n;
	cin>>n;
	while (n>=0){
		if (n==0 or n>50){
			cout<<"NUMERO INVALIDO"<<endl;
		}
		else {
			cout<<romano(n)<<endl;
		}
		cin>>n;
	}
	return 0;
}
