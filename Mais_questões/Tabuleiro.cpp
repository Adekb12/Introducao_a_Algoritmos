#include <iostream>
using namespace std;
int main (){
	int tamanho,cont,cont2;
	cin>>tamanho;
	cont = 1;
	while (cont<=tamanho){
		cont2 = 1;
		if (cont%2!=0){
			while (cont2<=tamanho){
				if (cont2%2!=0){
					cout<<(char)46;
				}
				else {
					cout<<(char)35;
				}
				cont2++;
			}
		}
		else{
			while (cont2<=tamanho){
				if (cont2%2!=0){
					cout<<(char)35;
				}
				else {
					cout<<(char)46;
				}
				cont2++;
			}
		}
		cout<<endl;
		cont++;
	}
	return 0;
}
