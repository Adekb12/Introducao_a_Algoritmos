#include <iostream>
using namespace std;
int main (){
	int tam,cont,i=0;
	string repetida;
	cin>>repetida;
	tam = repetida.size();
	while(i<tam){
		cont = i;
		if (repetida[i]==repetida[i+1]){
			while (cont<tam){
				repetida[cont]=repetida[cont+1];
				cont++;
			}
			tam--;
			i--;
		}
		i++;
	}
	for (int j=0;j<tam;j++)cout<<repetida[j];
	return 0;
}
