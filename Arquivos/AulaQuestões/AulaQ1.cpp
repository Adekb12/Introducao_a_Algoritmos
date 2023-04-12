#include <iostream>
#include <fstream>//para arquivos
using namespace std;
int main (){
	int n;
	//gravacao
	ofstream gravacao("numero", ios::app);
	for (int i=1;i<=10;i++){
		cin>>n;
		//gravando - semelhante ao cout
		gravacao << n <<endl;
	}
	gravacao.close();
	return 0;
}
