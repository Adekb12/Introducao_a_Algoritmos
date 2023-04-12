#include <iostream>
using namespace std;
struct Cartinha{
	string nome,presente;
};
struct Brinquedo{
	string nome;
	int disponivel,pedida;
};
int main (){
	int n,m;
	cin>>n;
	Cartinha pedido[n];
	for (int i=0;i<n;i++){
		cin>>pedido[i].nome>>pedido[i].presente;
	}
	cin>>m;
	Brinquedo noel[m];
	for (int i=0;i<m;i++){
		cin>>noel[i].nome>>noel[i].disponivel;
	}	
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if(noel[i].nome==pedido[j].presente)
				noel[i].disponivel--;	
		}
		if (noel[i].disponivel<0)
			cout<<noel[i].nome<<" ";
	}
	return 0;
}
