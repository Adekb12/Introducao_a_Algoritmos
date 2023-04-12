#include <iostream>
#include <fstream>
using namespace std;
int VERIFICA(int m){
	if (m%3==0)
		return -1;
	else
		return m;
}
int main (){
	string nome;
	int n,m;
	cin>>nome;
	ifstream arquivo(nome);
	ofstream semMult("saida.txt");
	if (arquivo){
		while(arquivo >> n){
			m = VERIFICA(n);
			if(m!=-1)
				semMult << m <<" ";
		}
	}
	arquivo.close();
	semMult.close();
	return 0;
}
