#include <iostream>
using namespace std;
struct politico{
	string partido,nome;
};
struct operacao{
	string pm,pessoa;
	int valor;
};
int main (){
	int q,o;
	cin>>q;
	politico v[q];
	for (int i=0;i<q;i++){
		cin>>v[i].partido>>v[i].nome;
	}
	cin>>o;
	operacao d[o];
	for (int i=0;i<o;i++){
		cin>>d[i].pm>>d[i].pessoa>>d[i].valor;
	}
	string bp,bo;
	int desviado = 0;
	cin>>bp>>bo;
	for (int i=0;i<q;i++){
		if (bp==v[i].partido){
			for (int j=0;j<o;j++){
				if (d[j].pm==bo and d[j].pessoa==v[i].nome){
					desviado += d[j].valor;
				}
			}
		}
	}
	cout<<desviado<<endl;
	return 0;
}
