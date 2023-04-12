#include <iostream>
#include <fstream>
using namespace std;
int main (){
	string nome;
	cin>>nome;
	ifstream arq(nome);
	ofstream quivo("cifrado");
	string codigo;
	int tam;
	if (arq){
		while (arq >> codigo){
			tam = codigo.size();
			for (int i=0;i<tam;i++){
				if (codigo[i]=='X')
					codigo[i]= 'A';
				else if (codigo[i]=='Y')
					codigo[i]= 'B';
				else if (codigo[i]=='Z')
					codigo[i]= 'C';
				else 
					codigo[i]= char (int(codigo[i])+3);
			}
			quivo << codigo <<" ";
		}
		quivo.close();
	}
	arq.close();
	return 0;
}
