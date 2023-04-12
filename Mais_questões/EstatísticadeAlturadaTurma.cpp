#include <iostream>
using namespace std;
int main (){
	
	int fichas,contficha,contmF = 0,contmM = 0;
	float altura,maior,menor,mediaF,mediaM,mediaT;
	char sexo;
	maior = -1;
	menor = 2400000;
	mediaM = 0;
	mediaF = 0;
	mediaT = 0;
	contficha = 0;
	cin>>fichas;
	while (contficha<fichas){
		cin>>altura>>sexo;
		if (altura>maior){
			maior = altura;
		}
		if (altura<menor){
			menor = altura;
		}
		if (sexo == 'f'){
			mediaF = mediaF + altura;
			mediaT = mediaT + altura;
			contmF++;
			
		}
		else if (sexo == 'm'){
			mediaM = mediaM + altura;
			mediaT = mediaT + altura;
			contmM++;
		}	
		contficha++;
	}
	cout<<maior<<endl<<menor<<endl;
	if (contmF == 0){
		cout<<"erro"<<endl;
	}
	else {
		cout<<mediaF/contmF<<endl;
	}
	if (contmM == 0){
		cout<<"erro"<<endl;
	}
	else {
		cout<<mediaM/contmM<<endl;
	}
	cout<<mediaT/contficha<<endl;
	
	return 0;
}	
	
