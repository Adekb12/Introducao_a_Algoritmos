#include <iostream>
#include <cstring>
using namespace std;
int FATORIAL(int f){
	if (f==1 or f==0){
		return 1;
	}else{
		return f*FATORIAL(f-1);
	}
}
long int MULTIFATORIAL(int posi[],int cont){
	int d=1;
	for (int i=0;i<cont;i++){
		d*= FATORIAL(posi[i]);
	}
	return d;
}
int main (){
	char *vetor = new char[20];
	int tam;
	cin>>vetor;
	tam = strlen(vetor);
	int posi[tam],r,cont=0;
	for (int i=0;i<tam;i++){
		r =1;
		for (int j=0;j<tam;j++){
			if(vetor[i]==vetor[j] and i!=j and vetor[i]!='*'){
				vetor[j]='*';
				r++;
			}
		}
		if (r>1){
			posi[cont] = r;
			cont++;
			
		}
	}
	delete[]vetor;
	cout<<FATORIAL(tam)/MULTIFATORIAL(posi,cont);
	return 0;
}
