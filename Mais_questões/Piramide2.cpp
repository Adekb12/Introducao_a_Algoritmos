#include <iostream>
using namespace std;
void procedimento (int num){
	int linha, cont;
	linha = 0;;
	while (linha < num){
		cont = 0;
		while (cont<=linha){
			cout<<(1+cont)<<" ";
			cont++;
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

