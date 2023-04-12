#include <iostream>
using namespace std;
float funcao(float distancia,float velocidade, float tempo,float& previsao){
	previsao = ((velocidade*tempo)+distancia)/1.852;
	return distancia/1.852;
}
int main (){
	float distancia,velocidade,tempo;
	cin>>distancia;
	while (distancia>=0){
		cin>>velocidade>>tempo;
		float previsao;
		previsao = 1;
		cout.precision(2);
		cout.setf(ios::fixed);
		cout<<funcao(distancia,velocidade,tempo,previsao)<<" "<<previsao<<endl;
		cin>>distancia;
	}
	return 0;
}
