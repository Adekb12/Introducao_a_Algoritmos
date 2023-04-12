#include <iostream>
using namespace std;
int primo (int valor){
	int divisor=1, contador=0;
	while (divisor <= valor){
		if (valor%divisor == 0){
			contador++;
		}
		divisor++;
	}
	if (contador==2)
		return 1;//eh primo
	else 
		return 0;
}
int soma (int n){
	int cont = 0, valor = 1, resposta, total = 0;
	while (cont<n){
		resposta = primo(valor);
		if (resposta == 1){
			cout<<"primo "<<valor<<endl;
			cont++;//incrementa o contador de primos;
			total += valor;
		}
		valor++;
	}
	return total;
}
int main (){
	int n;
	cin>>n;
	cout<<soma (n);
	return 0;
}
