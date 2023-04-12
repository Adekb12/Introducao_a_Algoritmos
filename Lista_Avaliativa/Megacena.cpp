#include <iostream>
using namespace std;
struct registro{
	int m[6];
};
void MAIOR(int v[],int q){
	int maior = -1,soma,p;
	int g[6];
	for (int i=0;i<q;i++){
		soma = 0;
		for (int j=0;j<6;j++){
			soma += v[i].m[j];
		}
		if (soma>maior){
			maior = soma;
			p = i;
		}
	} 
	for(int i=0;i<6;i++){
		g[i]=v[p].m[i];
	}
	int *ptr;
	ptr = v[p];
}
int main (){
	int q;
	cin>>q;
	registro v[q];
	for (int i=0;i<q;i++){
		for (int j=0;j<6;j++){
			cin>>v[i].m[j];
		}
	}
	MAIOR(v,q);
	
	return 0;
	
}
