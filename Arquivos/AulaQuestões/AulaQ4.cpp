#include <iostream>
#include <fstream>//para arquivos
using namespace std;
struct produto{
	string nome;
	float valor;
};
/*int main (){
	int n;
	cin>>n;
	ofstream gravacao("produto");
	if (gravacao){
		gravacao<<n<<endl;
		produto v[n];
		for (int i=0;i<n;i++){
			cin>>v[i].nome>>v[i].valor;
			gravacao<<v[i].nome<<" "<<v[i].valor<<endl;
		}
		gravacao.close();
	}else{
		cout<<"erro";
	}
	return 0;
}*/
int main (){
	//leitura
	ifstream leitura("produto");
	if (leitura){
		int n;
		leitura >> n;
		produto vetor[n];
		for (int i=0;i<n;i++){
			leitura >> vetor[i].nome >> vetor[i].valor;
			//leitura >> vetor[i].vslor;
			cout<<vetor[i].nome<<"------"<<vetor[i].valor<<endl;
		}
	}else{
		cout<<"erro ao encontrar o arquivo"<<endl;
	}
	return 0;
}
