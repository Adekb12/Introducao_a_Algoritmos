#include <iostream>
using namespace std;
struct dados{
	string nome;
	char sexo;
	float altura,peso;
};
int main (){
	int n;
	float maior,ideal;
	string pesada;
	cin>>n;
	dados paciente[n];
	for (int i=0;i<n;i++){
		cin>>paciente[i].nome>>paciente[i].sexo>>paciente[i].altura>>paciente[i].peso;
	}
	maior = paciente[0].peso;
	pesada = paciente[0].nome;
	for (int i=0;i<n;i++){
		if (paciente[i].peso>maior){
			maior = paciente[i].peso;
			pesada = paciente[i].nome;
		}
	}
	cout<<pesada<<endl;
	for (int i=0;i<n;i++){
		if (paciente[i].sexo=='H'){
			ideal = (72.7*paciente[i].altura) - 58;
			if (paciente[i].peso>ideal)
				cout<<paciente[i].nome<<" "<<ideal-paciente[i].peso<<endl;
		}else{
			ideal = (62.1*paciente[i].altura) - 44.7;
			if (paciente[i].peso>ideal)
				cout<<paciente[i].nome<<" "<<ideal-paciente[i].peso<<endl;
		}
	}
	for (int i=0;i<n;i++){
		if (paciente[i].sexo=='H'){
			ideal = (72.7*paciente[i].altura) - 58;
			if (paciente[i].peso<ideal)
				cout<<paciente[i].nome<<" "<<ideal-paciente[i].peso<<endl;
		}else{
			ideal = (62.1*paciente[i].altura) - 44.7;
			if (paciente[i].peso<ideal)
				cout<<paciente[i].nome<<" "<<ideal-paciente[i].peso<<endl;
		}
	}
	return 0;
}
