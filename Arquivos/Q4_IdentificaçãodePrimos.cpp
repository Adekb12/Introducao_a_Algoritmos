#include <iostream>
#include <fstream>
using namespace std;
int PRIMO(int k,int &tam){
	int cont = 0;
	if (k==1){
		tam++;
		return 0;
	}
	for (int i=1;i<=k;i++){
		if (k%i==0)
			cont++;
	}
	if (cont==2){
		tam++;
		return 0;
	}else 
		return -1;
}
int main (){
	int n,s,y=0,tam=0,aux=0;
	ifstream arquivo("inteiros.dat");
	ofstream primo("primos.dat");
	if(arquivo){
		arquivo.read((char *)(&n),sizeof(int));
		int vetor[n],p[n];
		arquivo.read((char *)(vetor),sizeof(int)*n);
		for (int i=0;i<n;i++){
			 s = PRIMO(vetor[i],tam);
			 if (s==0){
				 p[y]=vetor[i];
				 y++;
			 }	 	 
		}
		if (tam==0){
			cout<<0<<endl;
		}
		else {
			for (int i=0;i<tam;i++){
				for (int j=0;j<tam;j++){
					if (i!=j and p[i]==p[j]){
						p[j]=0;
						aux++;
					}
				}
			}
			primo << tam <<" ";
			for (int i=0;i<(tam-aux);i++){
				primo << p[i]<<" ";
			}
		}
		arquivo.close();
		primo.close();
	}
	return 0;
}
