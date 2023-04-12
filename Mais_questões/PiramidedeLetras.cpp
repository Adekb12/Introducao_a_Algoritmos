#include <iostream>
using namespace std;

void procedimento (int num){
	int linha = 0, letra,i;
	while (linha < num){
		letra = 97;
		i = 0;
		while (i<=linha){
			//converte para letra (97+0), depois (97+1)...
			cout<<char(letra+i)<<" ";
			i++;
		}
		cout<<endl;
		linha++;
	}
}
int main (){
	int n;
	cin>>n;
	
	procedimento(n);
	
	return 0;
}
