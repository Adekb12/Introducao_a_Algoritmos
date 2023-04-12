#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ifstream arquivo("numeros");
	ofstream par("pares");
	ofstream impar("impares");
	int n;
	if (arquivo){
		while (arquivo >> n){
			if (n%2==0)
				par << n <<" ";
			else 
				impar << n <<" ";
		}
	}
	arquivo.close();
	par.close();
	impar.close();
	return 0;
}
