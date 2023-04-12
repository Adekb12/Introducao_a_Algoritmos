#include <iostream>
using namespace std;
struct clientes{
	int codigo;
	string nome;
};
struct contas{
	int cliente,codigo;
};
void inserirCONTA(contas *ct[],int &capa,int &p){
	cin>>ct[p].cliente>>ct[p].codigo;
	
}
void inserirCLIENTE(clientes c[],int &w){
	cin>>c[w].codigo>>c[w].nome;
	int r=0;
	if (w==0)
		cout<<"OK"<<endl;
	else {
		while (r<w){
			if (c[w].codigo==c[r].codigo)
				r = 150;
			r++;
		}
		if (r==150)
			cout<<"ERRO"<<endl;
		else{
			cout<<"OK"<<endl;
			w++;
		}
	}			
}
int main (){
	int n=1,w=0,capa=10,p=0;
	clientes c[100]={};
	contas *ct = new contas[capa];
	while (n!=0){
		switch(n){
			case 1:
				inserirCLIENTE(c,w);
				break;
			case 2:
				inserirCONTA(&ct,capa,p);
				break;
			case 3:
				
				
				break;
			case 4:
				
				
				break;
		}		
		cin>>n;
	}
	return 0;
}
