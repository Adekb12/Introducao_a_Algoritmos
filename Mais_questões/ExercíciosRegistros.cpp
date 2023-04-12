#include <iostream>
using namespace std;
struct donos{
	string nome,cpf;
};
struct carro{
	string placa, cor, marca;
	int ano;
	donos proprietarios[2];
};
carro preenche(){
	carro aux;
	cin>>aux.placa>>aux.cor>>aux.ano>>aux.marca;
	for (int i =0;i<2;i++){
		cin>>aux.proprietarios[i].nome>>aux.proprietarios[i].cpf;
	}
	return aux;
}
void IMPRIME(carro aux[],int n){
	for (int i=0;i<n;i++){
		cout<<aux[i].placa<<" "<<aux[i].cor<<" "<<aux[i].ano<<" "<<aux[i].marca<<" ";
		for (int j=0;j<2;j++){
			cout<<aux[i].proprietarios[j].nome<<" "<<aux[i].proprietarios[j].cpf;
			cout<<endl;
			
		}
	}
}
int BUSCA(carro *loja,int n,string marca){
	int posicao;
	for (int i=0;i<n;i++){
		if (marca == loja[i].marca){
			posicao = i;
			i=n;
		}
	}
	return posicao;
} 
int main (){
	int n;
	cin>>n;
	carro *loja = new carro[n];
	for (int i=0;i<n;i++){
		loja[i] = preenche();
	}
	IMPRIME(loja,n);
	string marca;
	cin>>marca;
	int posicao = BUSCA(loja,n,marca);
	if (posicao == -1){
		cout<<"Marca nao encontrada"<<endl;
	}
	else {
		cout<<posicao<<endl;
		cout<<loja[posicao].placa<<endl;
		for (int i=0;i<2;i++){
			cout<<loja[posicao].proprietarios[i].nome<<" "<<loja[posicao].proprietarios[i].cpf<<" ";
		}
	}
	delete[]loja;
	return 0;
}
