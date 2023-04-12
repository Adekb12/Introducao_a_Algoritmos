//arquivo binário
#include <iostream>
#include <fstream>
using namespace std;

/*int main (){
	int n=12345;
	ofstream gravacao("binario");
	//write para gravar
	gravacao.write((const char *) (&n), sizeof(int));
	gravacao.close();
	return 0;
}*/
int main (){
	//leitura
	int valor;
	ifstream leitura("binario");
	leitura.read((char *)(&valor),sizeof(int));
	cout<<valor;
	leitura.close();
	return 0;
}
