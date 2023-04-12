#include <iostream>
#include <fstream>//para arquivos
using namespace std;
/*int main (){
	int n;
	cin>>n;
	int v[n];
	
	ofstream gravacao("vetor");
	gravacao<<n<<endl;//quantdade de elementos
	for (int i=0;i<n;i++){
		cin>>v[i];
		gravacao<<v[i]<<endl; //grava os elementos
	}
	gravacao.close();
	return 0;
}*/
int main (){
	int n;
	fstream leitura("vetor",ios::in);
	if(leitura){
		leitura >> n;
		cout<<n<<endl;
		
		int v[n];
		for (int i=0;i<n;i++){
			leitura >> v[i];
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		leitura.close();
	}else{
		cout<<"arquivo nao encontrado"<<endl;
	}
	return 0;
}
