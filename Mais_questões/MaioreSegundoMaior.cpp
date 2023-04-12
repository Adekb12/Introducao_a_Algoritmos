#include <iostream>
using namespace std;
int main(){
	
	float numero,maior,segundomaior,cont,media;
	cont = 0;
	maior = -2400000;
	segundomaior = -2400000;
	media = 0;
	while (cont<7){
		cin>>numero;
		media += numero;
		if (numero>maior){
			segundomaior = maior;
			maior = numero;
		}
		else if (numero<=maior and numero>segundomaior){
			segundomaior = numero;
		}
		cont++;
	}
	media = media - maior - segundomaior;
	cout<<maior<<endl<<segundomaior<<endl<<(float)media/5<<endl;
	return 0;
}
